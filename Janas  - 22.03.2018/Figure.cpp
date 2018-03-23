#include "Figure.h"
#include <iostream>
#include <cmath>

Figure::Figure (int numberOfPoints):
	m_numberOfPoints(numberOfPoints)
{
	m_storedPoints = new Point[numberOfPoints] ;

}

void Figure::print() const
{
	std::cout<<"Figure : [";
	for (int i=0; i<m_numberOfPoints; ++i)
		std::cout<<m_storedPoints[i];
	std::cout<<"]"<<std::endl;
}

void Figure::setPoint(int pointID, double x, double y)
{
	m_storedPoints[pointID].setCoordinates(x, y);
}

double Figure::length() const
{
	double len = 0.0;
	for (int i=0; i<m_numberOfPoints-1; ++i)
		len+= m_storedPoints[i].distance(m_storedPoints[i+1]);

	return len;
}

Figure::~Figure()
{
	if (m_storedPoints)
		delete [] m_storedPoints;
	m_storedPoints = 0;
}

void Figure::scale(const Point & p, const double scale)
{
	for (int i=0; i<m_numberOfPoints; ++i)
		m_storedPoints[i].scale(p, scale);
}

void Figure::move(const double x, const double y)
{
	for (int i=0; i<m_numberOfPoints; ++i)
		m_storedPoints[i].move(x, y);
}

void Figure::rotate(const Point & p, const double angle)	
{
	for (int i=0; i<m_numberOfPoints; ++i)
		m_storedPoints[i].rotate(p, angle);
}

Figure::Figure (const Figure& copied)
{
	m_numberOfPoints = copied.m_numberOfPoints;
	m_storedPoints = new Point [m_numberOfPoints];
	for (int i=0; i<m_numberOfPoints; ++i)
		m_storedPoints[i] = copied.m_storedPoints[i];
}