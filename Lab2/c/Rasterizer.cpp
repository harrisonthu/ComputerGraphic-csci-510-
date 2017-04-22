//
//  Rasterizer.cpp
//
//  Created by Joe Geigel on 11/30/11.
//  Modifications by Warren R. Carithers.
//  Copyright 2011 Rochester Institute of Technology. All rights reserved.
//
//  Contributor:  Han Min Thu
//  Date:         02 March 2017
//  Professor:    Patrick Gillis
//
//

#include "Rasterizer.h"
#include "Canvas.h"
#include <float.h>
#include <math.h>
#include <algorithm>

using namespace std;


//
// Simple class that performs rasterization algorithms
//
///
///
// Constructor
//
// @param n - number of scanlines
// @param C The Canvas to use
//
///

Rasterizer::Rasterizer(int n, Canvas &canvas) : n_scanlines(n), C(canvas)
{
}

///
// Draw a filled polygon.
//
// Implementation should use the scan-line polygon fill algorithm
// discussed in class.
//
// The polygon has n distinct vertices.  The coordinates of the vertices
// making up the polygon are stored in the x and y arrays.  The ith
// vertex will have coordinate (x[i],y[i]).
//
// You are to add the implementation here using only calls
// to C.setPixel() function.
//
// @param n - number of vertices
// @param x - array of x coordinates
// @param y - array of y coordinates
//

void Rasterizer::drawPolygon(int n, const int x[],const int y[]) {


    // find maximum x value by using max_ele func from algorithm
	int x_max = *max_element(x, x + n);  


	// Initiate Edge Table that contains all the Buckets of the polygon
	vector<Bucket> ET;

	// A temporary bucket we'll use in loops
	Bucket b;

	// Using Modulo that is discussed in class 
	// 
    // When creating bucket, with edge AB where A(x0,y0) and B(xn,yn)
	// Use modulo n so as not be out of bounds, as n value > last index 
	// at the end of the loop.


	for (int i = 0; i < n; i++) {
		
        b.yMin = min(y[i % n], y[(i + 1) % n]);
		b.yMax = max(y[i % n], y[(i + 1) % n]);
	    	
       
        //float b.xVal;
        //float b.inv_m; // inverse slope
        
        // check each value in bucket
        if (b.yMin == y[i%n]){
            b.xVal = x[i % n];
        }
        else{
            b.xVal = x[(i+1)%n];
        }
        
	
        // case: not horizontal edge
        if(b.yMax - b.yMin != 0){
            b.inv_m = (float)(x[i%n]-x[(i+1)%n])/(float)(y[i % n]-y[(i+1)% n]);
        } 
       
        else{
            b.inv_m = FLT_MAX; // set max float value to b.inv_m
        }
        
        // don't care about horizontal lines 
		if (b.inv_m != FLT_MAX)
			ET.push_back(b);
	}

	// the number of buckets for horizontal edges
	n = ET.size();


	// sort the buckets, containing yMin,Max xVal, inv_m 
	// Ignore if the number of values is small
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			// sort by yMin in bucket
			if (ET.at(j).yMin <= ET.at(i).yMin) {
				// sort by xVal if yMin is the same
				if (ET.at(j).yMin < ET.at(i).yMin || ET.at(j).xVal < ET.at(i).xVal) {
					b = ET.at(j);
                    //if row and col pixel same
					ET.at(j) = ET.at(i);
					ET.at(i) = b;
				}
			}
		}
	}



	// Initialize enum: EVEN and ODD values 
	enum {
		EVEN, ODD
	};

    // Initialize parity for EVEN Or ODD values
	int parity;


	/*
	Initializing the ScanLine,setting at pixel y =0
	*/
	int scanLine = ET.at(0).yMin;


	/*
     * Create another Edge Table that contains bucket type
	*/
	vector<Bucket> currentET;

	int maxLine = ET.at(n-1).yMax;

	for (int line = scanLine; line <= maxLine; line++) {
		parity = EVEN;
		// for each scanLine, we want to retrieve every bucket
        // whose yMin = scanLine
		int i = 0;
		while (i < n) {
			b = ET.at(i);
			if (b.yMin == line) {
				// Remove any edges from the ET for which the minimum y value
				// is equal to the scan-line 
                // and place them in the active edge table
				currentET.push_back(b);
				ET.erase(ET.begin() + i);
				n--;
			}
			else {
				i++;
			}
		}

		int nbActiveEdges = currentET.size(),
			currentEdge = 0;

		if (line < maxLine) {
			i = 0;

			// Remove any edges from the active edge table for which
			// the maximum y value is equal to the scan_line. 
			while (i < nbActiveEdges) {
				b = currentET.at(i);
				if (b.yMax == line) {
					currentET.erase(currentET.begin() + i);
					nbActiveEdges--;
				}
				else {
					i++;
				}
			}
		}

		// Reorder the edges in current edge table based on 
		// increasing x value. 
		for (int i = 0; i < nbActiveEdges - 1; i++) {
			for (int j = i + 1; j < nbActiveEdges; j++) {
                // edges have crossed
				if (currentET.at(j).xVal < currentET.at(i).xVal) {
					b = currentET.at(j);
					currentET.at(j) = currentET.at(i);
					currentET.at(i) = b;
				}
			}
		}

		/*
         * =========================================================
         *                  Filling the Polygon
         * =========================================================
		*/

		for (int scanX = 0;scanX<=x_max&&currentEdge <nbActiveEdges;scanX++){
			if (scanX == round(currentET.at(currentEdge).xVal)) {
				// We change parity
				if (currentEdge + 1 < nbActiveEdges && scanX != round(currentET.at(currentEdge + 1).xVal)) {
                    if(parity == EVEN){
                        parity = ODD;
                    }
                    else{
                        parity = EVEN;
                    }
					//parity = (parity == EVEN) ? ODD : EVEN;
				}

				// Test every edges. 
                // Check multiple buckets have the same xVal using while loop
				while (currentEdge < nbActiveEdges && scanX == round(currentET.at(currentEdge).xVal)) {
					// Update the x value for for each edge in active table 
					// edge table (ET) using the formula x1 = x0 + 1/m
					Bucket b = currentET.at(currentEdge);
					Bucket bUpdated = { b.yMin, b.yMax, b.xVal + b.inv_m, b.inv_m };
					currentET.at(currentEdge) = bUpdated;
					// We need to draw the last pixel of the bucket
					C.setPixel(scanX, line);
					currentEdge++;
					//parity = (parity == EVEN) ? ODD : EVEN;
				}
			}
			// Draw all pixels from the x value of ODD to the x value 
            // even parity edge pairs
			if (parity == ODD) {
				C.setPixel(scanX, line);
			}
		}
	}
}
