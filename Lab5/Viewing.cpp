//
//  Viewing
//
//  Created by Warren R. Carithers 2016/11/11.
//  Based on code created by Joe Geigel on 1/23/13.
//  Copyright 2016 Rochester Institute of Technology.  All rights reserved.
//
//  Simple class for setting up the viewing and projection transforms
//  for the Transformation Assignment.
//
//  This code can be compiled as either C or C++.
//
//  Contributor: Han Min Thu 
//  Date : April 24, 2017
//

#if defined(_WIN32) || defined(_WIN64)
#include <windows.h>
#endif

#ifndef __APPLE__
#include <GL/glew.h>
#endif

#include <GLFW/glfw3.h>
#include <GL/glew.h>
#include <GL/glut.h>
#include <GL/gl.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Viewing.h"

glm::mat4 perspective(1.0f);
glm::mat4 transform(1.0f);
glm::mat4 camera(1.0f);


// Method to take program and use the same vertices, called amtrixThingy
// to change the view and camera position and reset for another 
// transformation.
void changePerspective(GLuint program) {
    glUniformMatrix4fv(glGetUniformLocation(program, "matrixThingy"),1,GL_FALSE,glm::value_ptr(perspective* camera* transform));
}

///
// This function sets up the view and projection parameter for a frustum
// projection of the scene. See the assignment description for the values
// for the projection parameters.
//
// You will need to write this function, and maintain all of the values
// needed to be sent to the vertex shader.
//
// @param program - The ID of an OpenGL (GLSL) shader program to which
//    parameter values are to be sent
///
void setUpFrustum( GLuint program )
{
    perspective= glm::frustum(-1.0,1.0,-1.0,1.0,0.9,4.5);
    changePerspective(program);
}


///
// This function sets up the view and projection parameter for an
// orthographic projection of the scene. See the assignment description
// for the values for the projection parameters.
//
// You will need to write this function, and maintain all of the values
// needed to be sent to the vertex shader.
//
// @param program - The ID of an OpenGL (GLSL) shader program to which
//    parameter values are to be sent
///
void setUpOrtho( GLuint program )
{
    perspective= glm::ortho(-1.0,1.0,-1.0,1.0,0.9,4.5);
    changePerspective(program);
}


///
// This function clears any model transformations, setting the values
// to the defaults: no scaling (scale factor of 1), no rotation (degree
// of rotation = 0), and no translation (0 translation in each direction).
//
// You will need to write this function, and maintain all of the values
// which must be sent to the vertex shader.
//
// @param program - The ID of an OpenGL (GLSL) shader program to which
//    parameter values are to be sent
///
void clearTransforms( GLuint program )
{
    
    transform = glm::mat4(1.0f);
    changePerspective(program);
}


///
// This function sets up the transformation parameters for the vertices
// of the teapot.  The order of application is specified in the driver
// program.
//
// You will need to write this function, and maintain all of the values
// which must be sent to the vertex shader.
//
// @param program - The ID of an OpenGL (GLSL) shader program to which
//    parameter values are to be sent
// @param scaleX - amount of scaling along the x-axis
// @param scaleY - amount of scaling along the y-axis
// @param scaleZ - amount of scaling along the z-axis
// @param rotateX - angle of rotation around the x-axis, in degrees
// @param rotateY - angle of rotation around the y-axis, in degrees
// @param rotateZ - angle of rotation around the z-axis, in degrees
// @param translateX - amount of translation along the x axis
// @param translateY - amount of translation along the y axis
// @param translateZ - amount of translation along the z axis
///
void setUpTransforms( GLuint program,
    GLfloat scaleX, GLfloat scaleY, GLfloat scaleZ,
    GLfloat rotateX, GLfloat rotateY, GLfloat rotateZ,
    GLfloat translateX, GLfloat translateY, GLfloat translateZ )
{
    // scale 
    // glm::scale(glm::mat4(1.0f), glm::vec3(scaleX, scaleY, scaleZ))
    //
    // rotate
    // glm::rotate(glm::mat4(1.0f), rotateX*((float) M_PI)/180.0f, glm::vec3(1.0f,0.0f,0.0f) )*  glm::rotate(glm::mat4(1.0f), rotateY*((float)M_PI)/180.0f, glm::vec3(0.0f,1.0f,0.0f) ) *  glm::rotate(glm::mat4(1.0f), rotateZ*((float)M_PI)/180.0f, glm::vec3(0.0f,0.0f,1.0f) ) 
 
   transform =  glm::translate(glm::mat4(1.0f), glm::vec3(translateX, translateY, translateZ)) * glm::rotate(glm::mat4(1.0f), rotateX*((float) M_PI)/180.0f, glm::vec3(1.0f,0.0f,0.0f) )*  glm::rotate(glm::mat4(1.0f), rotateY*((float)M_PI)/180.0f, glm::vec3(0.0f,1.0f,0.0f) ) *  glm::rotate(glm::mat4(1.0f), rotateZ*((float)M_PI)/180.0f, glm::vec3(0.0f,0.0f,1.0f) ) *glm::scale(glm::mat4(1.0f), glm::vec3(scaleX, scaleY, scaleZ));
    
    changePerspective(program);

}


///
// This function clears any changes made to camera parameters, setting the
// values to the defaults: eye (0.0,0.0,0.0), lookat (0,0,0.0,-1.0),
// and up vector (0.0,1.0,0.0).
//
// You will need to write this function, and maintain all of the values
// which must be sent to the vertex shader.
//
// @param program - The ID of an OpenGL (GLSL) shader program to which
//    parameter values are to be sent
///
void clearCamera( GLuint program )
{
    GLfloat eyeX = 0, eyeY = 0, eyeZ = 0, lookatX = 0, lookatY = 0, lookatZ = -1,upX = 0, upY = 1, upZ = 0;
    glm::vec3 eye(eyeX, eyeY, eyeZ);
    glm::vec3 center(lookatX, lookatY, lookatZ);
    glm::vec3 up(upX, upY, upZ);
    
    camera = glm::lookAt(eye, center, up);
    changePerspective(program);
}

///
// This function sets up the camera parameters controlling the viewing
// transformation.
//
// You will need to write this function, and maintain all of the values
// which must be sent to the vertex shader.
//
// @param program - The ID of an OpenGL (GLSL) shader program to which
// @parameter values are to be sent
// @param eyeX - x coordinate of the camera location
// @param eyeY - y coordinate of the camera location
// @param eyeZ - z coordinate of the camera location
// @param lookatX - x coordinate of the lookat point
// @param lookatY - y coordinate of the lookat point
// @param lookatZ - z coordinate of the lookat point
// @param upX - x coordinate of the up vector
// @param upY - y coordinate of the up vector
// @param upZ - z coordinate of the up vector
///
void setUpCamera( GLuint program,
    GLfloat eyeX, GLfloat eyeY, GLfloat eyeZ,
    GLfloat lookatX, GLfloat lookatY, GLfloat lookatZ,
    GLfloat upX, GLfloat upY, GLfloat upZ )
{
    glm::vec3 eye(eyeX, eyeY, eyeZ);
    glm::vec3 center(lookatX, lookatY, lookatZ);
    glm::vec3 up(upX, upY, upZ);
    
    camera = glm::lookAt(eye, center, up);
    changePerspective(program);
}
