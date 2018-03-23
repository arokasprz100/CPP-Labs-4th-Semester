#ifndef Triangle_h
#define Triangle_h

#include "Figure.h"

/// This class stores data about Triangle - set of 3 points
class Triangle : public Figure, public Area
{
public:
	/// Basic constructor - takes 3 points that make a triangle
	Triangle (Point A, Point B, Point C);

	/// Calculates area of triangle 
	double area() const;

	/// Prints information about triangle
	void print() const;

	/// Prints triangle length a + b + c
	double length() const;

};



#endif