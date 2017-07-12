//
// Vertex shader for the transformation assignment
//
// Created by Warren R. Carithers 2016/04/22.
//
// Contributor: Han Min Thu 
// Date : April 24, 2017
//

#version 150

// attribute: verteex position
in vec4 vPosition;

uniform mat4 matrixThingy;

void main()
{
    	
    gl_Position =  matrixThingy * vPosition;
}


