#include "Circle.h"

Circle::Circle (Point centre, double radius):
	Figure(1), m_radius(radius)
{
	m_storedPoints[0] = centre;
}

void Circle::print() const
{
	std::cout<<"Circle : O";
	for (int i=0; i<m_numberOfPoints; ++i)
		std::cout<<m_storedPoints[i];
	std::cout<<", radius = "<<m_radius<<std::endl;
}

double Circle::area() const
{
	return Transformable::PI * m_radius * m_radius;
}

double Circle::length() const
{
	return Transformable::PI * m_radius *2.0;
}

void Circle::scale(const Point & p, const double scale)
{
	m_radius *=scale;
	m_storedPoints[0].scale(p, scale);
}
