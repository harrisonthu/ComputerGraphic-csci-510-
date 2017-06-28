//
//  Clipper.cpp
//
//  Created by Warren R. Carithers on 01/15/14.
//  Based on a version created by Joe Geigel on 11/30/11.
//  Copyright 2014 Rochester Institute of Technology. All rights reserved.
//
//  Contributor: Han Min Thu 
//

#include "Vertex.h"
#include "Clipper.h"

///
// Simple module that performs clipping
///

///
// Constructor
///
Clipper::Clipper() {
}


// compute intersection point, put point into newpoint parameter
Vertex intersect(Vertex s, Vertex e, float x0, float y0, float x1, float y1) {
    int sx=s.x;
    int sy=s.y;
        int ex=e.x;
    int ey=e.y;
    int _x;
    int _y;
    if (x0 == x1) { // if it's a vertical edge
        _x = x0;
        _y = sy + (x0 - sx) * (ey - sy) / (ex - sx);
    }
    else { // if it's a horizontal edge
        _y = y0;
        _x = sx + (y0 - sy) * (ex - sx) / (ey - sy);
    }
    return (Vertex) {_x,_y};
}

/*
void output(const float _x, const float _y, int &out, Vertex outV[]) {
    outV[(*out)].x = _x;
    outV[*out].y = _y;
    (*out)++;
}

*/

// is point inside boundary?
bool inside(Vertex a, float x0, float y0, float x1, float y1) {
    float _x = a.x;
    float _y = a.y;
    if (y0 == y1) { // horizontal edge
        if (x0 < x1) return _y >= y0;
        if (x0 > x1) return _y <= y0;
    } else { // vertical edge
        if (y1 > y0) return _x <= x0;
        if (y0 > y1) return _x >= x0;
    }
    return false;
}


// Function for trimming the the polygon
// Checking vertices for each left, right,top, bottom.

int SHPC(const Vertex inVertices[], Vertex outVertices[], int inLength, float x0, float y0, float x1, float y1){
    
    int outLength = 0;
    Vertex p = inVertices[ inLength-1];

    for(int j = 0; j<inLength; j++){
        Vertex s = inVertices[j];

        if(inside(s,x0,y0,x1,y1)){
            if( inside (p, x0, y0, x1, y1)){
                outVertices[outLength++]= s;
            } else{
               Vertex i =  intersect(p,s,x0,y0,x1,y1);
               outVertices[outLength++] = i;
               outVertices[outLength++] = s;
            }
        }
        else{
            if( inside(p,x0,y0,x1,y1)){
                Vertex i = intersect(p,s,x0,y0,x1,y1);
                outVertices[outLength++] = i;
            }
        }
        
        p = s;

    } // for

    return outLength;
}




/*
   int SHPC(const Vertex inV[], Vertex outV[], int in, float x0, float y0, float x1, float y1) {
   float px = inV[in - 1].x, py = inV[in - 1].y; 

   float _x = px, _y = py;

   for (int j = 0; j < in; j++){
   if (inside(inV[j].x, inV[j].y, x0, y0, x1, y1)) { // Cases 1 & 4
   if (inside(px, py, x0, y0, x1, y1)) { // Case 1
   output(inV[j].x, inV[j].y, out, outV);
   }
   else { // Case 4
   intersect(px, py, inV[j].x, inV[j].y, x0, y0, x1, y1, _x, _y);
   outV[out++]=
   output(inV[j].x, inV[j].y, out, outV);
   }
   }
   else { // Cases 2 & 3
   if (inside(px, py, x0, y0, x1, y1)) { // Case 2
   intersect(px, py, inV[j].x, inV[j].y, x0, y0, x1, y1, _x, _y);
   output(_x, _y, out, outV);
   } // Case 3 has no output
   }

   px = inV[j].x;
   py = inV[j].y;
   }
   return out
   }

*/

/*
   void SHPC(const float inx[], const float iny[],float outx[], float outy[], int in, int &out, float x0, float y0, float x1, float y1) {


   float px = inx[in - 1], py = iny[in - 1]; 
   float _x = px, _y = py;

   for (int j = 0; j < in; j++) {
   if (inside(inx[j], iny[j], x0, y0, x1, y1)) { // Cases 1 & 4
   if (inside(px, py, x0, y0, x1, y1)) { // Case 1
   output(inx[j], iny[j], out, outx, outy);
   }
   else { // Case 4
   intersect(px, py, inx[j], iny[j], x0, y0, x1, y1, _x, _y);
   output(_x, _y, out, outx, outy);
   output(inx[j], iny[j], out, outx, outy);
   }
   }
   else { // Cases 2 & 3
   if (inside(px, py, x0, y0, x1, y1)) { // Case 2
   intersect(px, py, inx[j], iny[j], x0, y0, x1, y1, _x, _y);
   output(_x, _y, out, outx, outy);
   } // Case 3 has no output 
   }

   px = inx[j];
   py = iny[j];

   } 
   }
   */

///
// clipPolygon
//
// Clip the polygon with vertex count in and vertices inV against the
// rectangular clipping region specified by lower-left corner ll and
// upper-right corner ur. The resulting vertices are placed in outV.
//
// The routine should return the with the vertex count of polygon
// resulting from the clipping.
//
// @param in    the number of vertices in the polygon to be clipped
// @param inV   the incoming vertex list
// @param outV  the outgoing vertex list
// @param ll    the lower-left corner of the clipping rectangle
// @param ur    the upper-right corner of the clipping rectangle
//
// @return number of vertices in the polygon resulting after clipping
//
///

int Clipper::clipPolygon( int in, const Vertex inV[], Vertex outV[],
        Vertex ll, Vertex ur )
{


    // left 
    Vertex * out2V = new Vertex[1000];
    int out = SHPC(inV, out2V, in, ll.x, ur.y, ll.x, ll.y);
     

    // bottom
    Vertex * out3V = new Vertex[1000];
    out = SHPC(out2V, out3V, out, ll.x, ll.y, ur.x, ll.y);

    // right
    Vertex * out4V = new Vertex[1000];
    out = SHPC(out3V, out4V, out, ur.x, ll.y, ur.x, ur.y);
    

    // top
    out = SHPC(out4V, outV, out, ur.x, ur.y, ll.x, ur.y);


    delete [] out2V;
    delete [] out3V;
    delete [] out4V;

    return out; // remember to return the outgoing vertex count!

}

