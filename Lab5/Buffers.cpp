//
//  Buffers.cpp
//
//  Vertex and element buffer implementations.
//
//  Author:  Warren R. Carithers
//  Date:    2017/02/11 22:34:54
//

#include <cstdlib>
#include <iostream>

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#endif

#ifndef __APPLE__
#include <GL/glew.h>
#endif

#include <GLFW/glfw3.h>

#include "Buffers.h"
#include "Canvas.h"

///
// Constructor
///
BufferSet::BufferSet( void ) {
    // do this the easy way
    initBuffer();
}

///
// initBuffer() - reset the supplied BufferSet to its "empty" state
///
void BufferSet::initBuffer( void ) {
    vbuffer = ebuffer = 0;
    numElements = 0;
    vSize = eSize = tSize = cSize = 0;
    bufferInit = false;
}

///
// dumpBuffer(buf) - dump the contents of a BufferSet
//
// @param which - description of the buffer
// @param buf - the buffer to dump
///
void BufferSet::dumpBuffer( const char *which, BufferSet &buf ) {
    cout << "Dumping buffer " << which << " (";
    if( buf.bufferInit ) {
        cout << "initialized)" << endl;
    } else {
        cout << "not initialized)" << endl;
    }
    cout << "  IDs: v " << buf.vbuffer << " e " << buf.ebuffer <<
        "#elements: " << buf.numElements << endl;
    cout << "  Sizes:  v " << buf.vSize << " e " << buf.eSize <<
        " t " << buf.tSize << " c " << buf.cSize << endl;
}

///
// makeBuffer() - make a vertex or element array buffer
//
// @param target - which type of buffer to create
// @param data   - source of data for buffer (or NULL)
// @param size   - desired length of buffer
//
// @return the ID of the new buffer
//
GLuint BufferSet::makeBuffer( GLenum target, const void *data, GLsizei size ) {
    GLuint buffer;

    glGenBuffers( 1, &buffer );
    glBindBuffer( target, buffer );
    glBufferData( target, size, data, GL_STATIC_DRAW );

    return( buffer );
}

///
// createBuffers(buf,canvas) create a set of buffers for the object
//     currently held in 'canvas'.
//
// @param C   - the Canvas we'll use for drawing
///
void BufferSet::createBuffers( Canvas &C ) {

    // first, reset this BufferSet
    if( bufferInit ) {
        // must delete the existing buffer IDs first
        glDeleteBuffers( 1, &(vbuffer) );
        glDeleteBuffers( 1, &(ebuffer) );
    }

    // clear everything out
    initBuffer();

    // get the vertex count
    numElements = C.numVertices();

    // if there are no vertices, there's nothing for us to do
    if( numElements < 1 ) {
        return;
    }

    // OK, we have vertices!
    // #bytes = number of elements * 4 floats/element * bytes/float
    vSize = numElements * 4 * sizeof(float);
    float *points = C.getVertices();

    // accumulate the required vertex buffer size
    int vbufSize = vSize;

    // get the color data (if there is any)
    float *colors = C.getColors();
    if( colors != NULL ) {
        cSize = numElements * 4 * sizeof(float);
        vbufSize += cSize;
    }

    // get the element data
    // #bytes = number of elements * bytes/element
    eSize = numElements * sizeof(GLuint);
    GLuint *elements = C.getElements();

    // first, create the connectivity data
    ebuffer = makeBuffer( GL_ELEMENT_ARRAY_BUFFER, elements, eSize );

    // next, the vertex buffer, containing vertices and "extra" data
    vbuffer = makeBuffer( GL_ARRAY_BUFFER, NULL, vbufSize );
    glBufferSubData( GL_ARRAY_BUFFER, 0, vSize, points );

    // add in the color data (if there is any)
    if( cSize > 0 ) {
        glBufferSubData( GL_ARRAY_BUFFER, vSize, cSize, colors );
    }

    // NOTE:  'points', 'colors', and 'elements' are dynamically allocated,
    // but we don't free them here because they will be freed at the next
    // call to clear() or the get*() functions

    // finally, mark it as set up
    bufferInit = true;
}
