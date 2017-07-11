//  Shapes
//
//  Routines for tessellating a number of basic shapes
// //  Students are to supply their implementations for the functions in
//  this file using the function DrawTriangle() to do the tessellation.
//
//  This code can be compiled as either C or C++.
//
//  Author: Han Min Thu
//  Date : April 11, 2017


#include <cmath>
#include <vector> 
#include "Shapes.h"
#include "Canvas.h"
#include "Vertex.h"

using namespace std;

#define PI ( 4 * atan( 1 ) )

vector<float> points; // stored points


///
// makeCube - Create a unit cube, centered at the origin, with a given number
// of subdivisions in each direction on each face.
//
// @param subdivision - number of equal subdivisions to be made in each 
//        direction along each face
///

void makeCube( Canvas &C, int subdivisions )
{
    if( subdivisions < 1 )
        subdivisions = 1;


    // Draw the front side of Cube
    float frontx_increment;  // value for x-increment (value+0.5)
    float fronty_increment; // value for x-increment (value+0.5)
    float variations;
    for( int i = 0; i < subdivisions; i++ ) {
        for( int j = 0; j < subdivisions; j++ ) {
            // find the variation for each variations 
            //

            variations = 1.0/subdivisions;
            
            // find the each increment on x-axis for building Cube 
            float cx = variations*i - 0.5; 
            float cy = variations*j - 0.5;
            frontx_increment = cx+variations;
            // Find the increment value on x and y axis
            fronty_increment = cy+variations;
            
            // construct Cube using Triangle functions from Canvas
            addTriangle(C, cx, cy, 0.5,frontx_increment , cy, 0.5, frontx_increment, fronty_increment, 0.5 );
            addTriangle(C, cx, cy, 0.5, frontx_increment, fronty_increment, 0.5, cx, fronty_increment, 0.5 );
        }
    }


    // Drawing back side of Cube (only on x-axis)
    float backx_decrement; // value for x-decrement (value-0.5)
    float backy_increment;  // value for x-decrement (value+0.5)

    for( int i = 0; i < subdivisions; i++ ) {
        for( int j = 0; j < subdivisions; j++ ) {
            float variations = 1.0/subdivisions;
            float cx = -variations*i + 0.5;
            float cy = variations*j - 0.5;
            backx_decrement = cx -variations; //set value on x axis, back so negative 
            backy_increment = cy +variations; //set new value on y-axis
            addTriangle(C, cx, cy, -0.5, backx_decrement, cy, -0.5, backx_decrement, backy_increment, -0.5 );
            addTriangle(C, cx, cy, -0.5, backx_decrement, cy + variations, -0.5, cx, backy_increment, -0.5 );
        }
    }



    // Drawing right side of Cube ( on z-axis)
    float rightz_decrement; // value for z-decrement (value-0.5)
    float righty_increment;  // value for z-increment (value+0.5)

    for( int i = 0; i < subdivisions; i++ ) {
        for( int j = 0; j < subdivisions; j++ ) {
            // 0.5 * (1,-1,1) ==> 0.5 * (1, +1, -1)
            float variations = 1.0/subdivisions;
            float cy = variations*i - 0.5;
            float cz = -variations*j + 0.5;
            // find the z and y values for drawing right side
            rightz_decrement = cz-variations;
            righty_increment = cy+variations;

            addTriangle(C, 0.5, cy, cz, 0.5, cy, rightz_decrement, 0.5,righty_increment , rightz_decrement );
            addTriangle(C, 0.5, cy, cz, 0.5, cy + variations,rightz_decrement , 0.5, righty_increment, cz );
        }
    }



    // Drawing left side of Cube (on y and z-axis)
    float leftz_increment; // value for z-increment (value+0.5)
    float lefty_increment;  // value for z-increment (value+0.5)

    for( int i = 0; i < subdivisions; i++ ) {
        for( int j = 0; j < subdivisions; j++ ) {
            // 0.5 * (-1, -1, -1) ==> 0.5* (-1,+1,+1)
            float variations = 1.0/subdivisions;
            float cy = variations*i - 0.5;
            float cz = variations*j - 0.5;
            // find y and z value on Z axis for increment
            leftz_increment = cz+variations;
            lefty_increment = cy+variations;
            addTriangle(C, -0.5, cy, cz, -0.5, cy, leftz_increment , -0.5, lefty_increment , leftz_increment );
            addTriangle(C, -0.5, cy, cz, -0.5, lefty_increment, leftz_increment , -0.5, lefty_increment , cz );
        }
    }

    // Drawing top side of Cube (on y and z-axis)
    float topx_increment; // value for x-increment (value+0.5)
    float topz_decrement;  // value for z-decrement (value-0.5)

    for( int i = 0; i < subdivisions; i++ ) {
        for( int j = 0; j < subdivisions; j++ ) {
            // 0.5* (-1,1,1) ==> 0.5*(1,1, -1)
            float variations = 1.0/subdivisions;
            float cx = variations*i - 0.5;
            float cz = -variations*j + 0.5;
            // find the value for increment on x and z axis
            topx_increment = cx +variations;
            topz_decrement = cz -variations;
            addTriangle(C, cx, 0.5, cz,topx_increment , 0.5, cz, topx_increment , 0.5, topz_decrement);
            addTriangle(C, cx, 0.5, cz, topx_increment , 0.5, topz_decrement, cx, 0.5, topz_decrement);
        }
    }


    // Drawing bottom side of Cube (on x and z-axis)
    float botx_decrement; // value for x-decrement (value-0.5)
    float botz_increment;  // value for z-increment (value+0.5)

    for( int i = 0; i < subdivisions; i++ ) {
        for( int j = 0; j < subdivisions; j++ ) {
            // (1,-1,-1)  ==> (-1,-1,1)
            float variations = 1.0/subdivisions;
            float cx = -variations*i + 0.5;
            float cz = variations*j - 0.5;
            // find decrement and increment for x and z
            botx_decrement = cx -variations;
            botz_increment = cz + variations;
            addTriangle(C, cx, -0.5, cz, cx - variations, -0.5, botz_increment, botx_decrement, -0.5, cz );
            addTriangle(C, cx, -0.5, cz, cx, -0.5, botz_increment, botx_decrement, -0.5, botz_increment );
        }
    }
}


///
// makeCylinder - Create polygons for a cylinder with unit height, centered at
// the origin, with separate number of radial subdivisions and height 
// subdivisions.
//
// @param radius - Radius of the base of the cylinder
// @param radialDivision - number of subdivisions on the radial base
// @param heightDivisions - number of subdivisions along the height
//
// Can only use calls to C.DrawTriangle()
///
void makeCylinder( Canvas &C, float radius, int radialDivisions, int heightDivisions )
{
    if( radialDivisions < 3 )
        radialDivisions = 3;

    if( heightDivisions < 1 )
        heightDivisions = 1;


    // Drawing top side of Cylinder 
    float topx; // value for x-decrement (value-0.5)
    float topz;  // value for z-increment (value+0.5)
    float degree; // theta for Cylinder

    // find value on x for drawing top 
    topx= 2.0*PI/radialDivisions;
    topz = 1.0/heightDivisions;
    // find value for z for drawing top Cylinder

    for( int i = 0; i < radialDivisions; i++ ) {

        degree= topx*i;
        addTriangle(C, 0, 0.5, 0, radius*cos( degree), 0.5, radius*sin( degree), radius*cos( degree+ topx), 0.5, radius*sin( degree+ topx) );

        // Draw bottom  
        addTriangle(C, 0,-0.5, 0,radius*cos( degree), -0.5, radius*sin( degree), radius*cos( degree- topx), -0.5, radius*sin( degree- topx) );
        for( int j = 0; j < heightDivisions; j++ ) {
            // float value on y-axis value
            float cy = -0.5 + topz*j;
            // adding Triangle to right Cylinder
            addTriangle(C, radius*cos( degree), cy, radius*sin( degree),
                    radius*cos( degree+ topx), cy, radius*sin( degree+ topx),
                    radius*cos( degree+ topx), cy + topz, radius*sin( degree+ topx) );
            // Calculate the radius for left and right side of Cylinder 
            addTriangle(C, radius*cos( degree), cy, radius*sin( degree),
                    radius*cos( degree+ topx), cy + topz, radius*sin( degree+ topx),
                    radius*cos( degree), cy + topz, radius*sin( degree) );
        }
    }

}



///
// makeCone - Create polygons for a cone with unit height, centered at the
// origin, with separate number of radial subdivisions and height 
// subdivisions.
//
// @param radius - Radius of the base of the cone
// @param radialDivision - number of subdivisions on the radial base
// @param heightDivisions - number of subdivisions along the height
//
// Can only use calls to C.DrawTriangle()
///
void makeCone( Canvas &C, float radius, int radialDivisions, int heightDivisions )
{
    if( radialDivisions < 3 )
        radialDivisions = 3;

    if( heightDivisions < 1 )
        heightDivisions = 1;


    // Drawing top side of Cone 
    float conex; // value for x-decrement 
    conex= 2.0*PI/radialDivisions;
    float coney;  // value for z-increment 
    coney= 1.0/heightDivisions;
    float theta, conez;
    float distance;


    // checking distance for cone and cylinder
    if ( radius < 3){
        distance = radius;
    }
    else{
        distance = 0;
    }


    for( int i = 0; i < radialDivisions; i++ ) {
        theta = conex*i;
        addTriangle( C,0, -0.5, 0, radius*cos( theta ), -0.5, radius*sin( theta ), radius*cos( theta - conex), -0.5, radius*sin( theta - conex) );
        for( int j = 0; j < heightDivisions; j++ ) {

            // value on z-axis
            float conez = -0.5 + coney*j;
            float r1 = radius - (radius/heightDivisions)*j;
            float r2 = radius - ( (radius/heightDivisions)*(j + 1) );
            addTriangle(C, r1*cos( theta ), conez, r1*sin( theta ),
                    r1*cos( theta + conex), conez, r1*sin( theta + conex),
                    r2*cos( theta + conex), conez + coney, r2*sin( theta + conex) );
            addTriangle(C, r1*cos( theta ), conez, r1*sin( theta ),
                    r2*cos( theta + conex), conez + coney, r2*sin( theta + conex),
                    r2*cos( theta ), conez + coney, r2*sin( theta ) );
        }
    }


}


///
// makeSphere - Create sphere of a given radius, centered at the origin, 
// using spherical coordinates with separate number of thetha and 
// phi subdivisions.
//
// @param radius - Radius of the sphere
// @param slices - number of subdivisions in the theta direction
// @param stacks - Number of subdivisions in the phi direction.
//
// Can only use calls to C.DrawTriangle()
///
void makeSphere( Canvas &C, float radius, int slices, int stacks )
{
    if( slices < 3 )
        slices = 3;

    if( stacks < 3 )
        stacks = 3;

    // Drawing top side of Cone 
    float spherex; // value for x-axis
    float spherey;  // multiply by 2 for x value 
    float distance;
    spherex = PI/stacks;
    spherey= 2.0*PI/slices;
    distance = 0;// set distance to 0
    // Drawing top side of Cone 
    //
    for( int i = 0; i < stacks; i++ ) {
        float theta = spherex*i;
        for( int j = 0; j < slices; j++ ) {

            if(distance == 0){
                // got the equation from Lecture notes
                float phi = spherey*j;
                float x1 = radius*sin( theta )*cos( phi );
                float y1 = radius*cos( theta );
                float z1 = radius*sin( theta )*sin( phi );

                // find the x and y and z for top side
                float x2 = radius*sin( theta + spherex)*cos( phi );
                float y2 = radius*cos( theta + spherex);
                float z2 = radius*sin( theta + spherex)*sin( phi );


                // find the x and y and z for bottom side 
                float x3 = radius*sin( theta + spherex)*cos( phi + spherey);
                float y3 = radius*cos( theta + spherex);
                float z3 = radius*sin( theta + spherex)*sin( phi + spherey);


                // find the x and y and z for Camera view 
                float x4 = radius*sin( theta )*cos( phi + spherey);
                float y4 = radius*cos( theta );
                float z4 = radius*sin( theta )*sin( phi + spherey);

                addTriangle(C,x1, y1, z1, x2, y2, z2, x3, y3, z3);
                addTriangle(C,x1, y1, z1, x3, y3, z3, x4, y4, z4);
            }
            else{

            }
        }
    }

}


// DrawTriangle- Create triangle to the current shape, 
// add the edges to the triangle, provided by 3 arguments.
//
// @param 
// @param slices - number of subdivisions in the theta direction
// @param stacks - Number of subdivisions in the phi direction.
//
// Can only use calls to C.DrawTriangle()
///

void addTriangle (Canvas &C,float x0, float y0, float z0,
        float x1, float y1, float z1,
        float x2, float y2, float z2)
{
    // call the addTriangle function, provided from Canvas function
    C.addTriangle((Vertex){x0,y0,z0},(Vertex){x1,y1,z1},(Vertex){x2,y2,z2});
}

