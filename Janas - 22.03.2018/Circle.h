#ifndef Circle_h
#define Circle_h

#include "Point.h"
#include "Figure.h"

/// Class storing data about circle - radius and centre
class Circle : public Figure, public Area
{
public:
	/// Basic constructor of circle - takes centre point and radius
	Circle (Point centre, double radius);

	/// Prints info about circle
	void print() const;

	/// Calculates circle area PI * radius * radius
	double area() const;

	/// Calculates circle length PI * 2 * radius
	double length() const;

	/// Scales circle
	void scale(const Point & p, const double scale);

private:
	double m_radius;

};



#endif