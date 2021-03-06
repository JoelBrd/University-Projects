/***************************************************************************
 *
 * krt - Kens Raytracer - Coursework Edition. (C) Copyright 1997-2018.
 *
 * Do what you like with this code as long as you retain this comment.
 */

// Light is the base class for lights.

#pragma once

#include "vertex.h"
#include "vector.h"
#include "colour.h"
#include "photon.h"
#include "extents.h"

class Light {
public:
	Light *next;
	string name;

	Light()
	{
		next = (Light *)0;
	}

	// Get the direction towards the light at the point on the surface
	// should return true if the surface is in front of the light
	// and false if it's behind and not illuminated.
	virtual bool get_direction(Vertex &surface, Vector &dir)
	{
		return false;
	}

	// Get the intensity of the light in the direction of the surface
	virtual void get_intensity(Vertex &surface, Colour &intensity)
	{

	}

	virtual void generate_photon(Photon *photon, int total_photons, Extents *scene_bounds)
	{

	}

	virtual void get_position(Hit hit, Vertex &vertex)
	{
		
	}

};
