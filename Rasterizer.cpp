//  Rasterizer.cpp
//
//  Created by Warren R. Carithers on 01/28/14.
//  Based on a C++ version created by Joe Geigel on 11/30/11.
//  Copyright 2014 Rochester Institute of Technology. All rights reserved.
//
//  Contributor: Han Min Thu 
//  Date:  18 February 2017
// 
//

#include <iostream>
#include <cmath>
#include "Rasterizer.h"
#include "Canvas.h"
#include <cfloat>



// Simple class that performs rasterization algorithms
//

///
// Constructor
//
// @param n number of scanlines
// @param C the Canvas to be used
///

Rasterizer::Rasterizer( int n, Canvas &canvas ) : n_scanlines(n), C(canvas)
{


}



///
// Draw my initials
//
// Draw my own initials using calls to drawLine(), in the same
// manner that makeLines() in the driver program draws 'CG'.
///

void Rasterizer::myInitials( void ) {

    // ######## Use light blue (0.678,0.847,0.902) for initials ######## 

    C.setColor( 0.678, 0.847, 0.902 );
   

    //  'H' letter

    drawLine (40,300, 40, 50); // left vertical
    drawLine (40,300, 120, 300); // top horizontal
    drawLine (40,50, 120, 50); // bot horizontal
    drawLine (120,50, 120, 150); // bottom inner left middle line
    drawLine (120,200, 120, 300); // top inner left middle line
    drawLine (120,200, 200, 200); 
    drawLine (120,150, 200, 150); 
    drawLine (200,200, 200, 300);
    drawLine (200,150, 200,50);
    
    drawLine (200,300, 280,300); // top horizontal
    drawLine (200,50,280,50); // bot horizontal
    drawLine (280,300 ,280,50);
        
    
    //  'T' letter
    
    drawLine (350,300,550,300); // middle top horizontal
    drawLine (350,300,350,200); //   _______ 
    drawLine (550,300,550,200); //   |      |
    drawLine (350,200,410,200); //   |      |
    drawLine (490,200,550,200); //   |__  __|

                                //     |  |
    drawLine (410,200,410,50);  //     |  |
    drawLine (490,200,490,50);  //     |  |
    drawLine (410,50, 490,50);  //     |__| 



    // add code here to draw your initials
    // with calls to your drawLine() function
    // 

}

///
// Draw a line from (x0,y0) to (x1, y1)
//
// Implementation should be using the Midpoint Line Algorithm.
//
// You are to add the implementation here using only calls to the
// setPixel() method of the Canvas.
//
// @param x0 x coord of first endpoint
// @param y0 y coord of first endpoint
// @param x1 x coord of second endpoint
// @param y1 y coord of second endpoint


void Rasterizer::drawLine( int x0, int y0, int x1, int y1 )
{
    // add code here to implement drawLine()
    // using the midpoint line algorithm

    float origin;
    float deltaX = (float) (x1 - x0);
    float deltaY = (float) (y1 - y0);

    float m = (deltaX != 0) ? deltaY /deltaX : FLT_MAX;

    origin = y0 - m * x0;

    // it works for x0 < x1 or x1< x0

    int signX,signY, corrY;

    if(deltaX > 0){
        signX = 1;
    }else{
        signX = -1;
    }

    if(deltaY > 0){
        signY = 1;
    }else{
        signY = -1;
    }

    if(signY > 0){
        corrY = 0;
    }else{
        corrY = -1;
    }

    int px1X = x0;  // coordinate of pixel to color
    int px1Y = y0;  // coordinate of pixel to color 

    float x, y;

    if (m== FLT_MAX){
        for(px1Y = y0;px1Y != y1; px1Y += signY){
            C.setPixel(px1X, px1Y + corrY);
        } 
    }
    else if (-1. <= m && m <= 1.) { // small slope
        for(px1X = x0; px1X != x1; px1X += signX){
            y = m* px1X + origin;

            if (signY * 2 * y > signY * (2* px1Y + 1)) {
                px1Y += signY;
            }
            C.setPixel(px1X, px1Y);

        }
    }

    else{ // big slope

        for (px1Y = y0; px1Y != y1; px1Y += signY){
            x = (px1Y -origin) / m;     // compute "real" value of x

            if(signX*2*x > signX*(2*px1X+signX)){
                px1X += signX;
            }

            C.setPixel(px1X,px1Y+corrY);
        }
    }

}

