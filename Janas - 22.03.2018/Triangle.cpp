#include "Triangle.h"
#include <cmath>

Triangle::Triangle (Point A, Point B, Point C):
	Figure(3)
{
	m_storedPoints[0] = A;
	m_storedPoints[1] = B;
	m_storedPoints[2] = C;

}

double Triangle::area() const
{
	//A = 0.5 * | (Ax - Cx)(By - Ay) - (Ax - Bx)(Cy - Ay) |
	return 0.5 * fabs( (m_storedPoints[0].x() - m_storedPoints[2].x())
					 * (m_storedPoints[1].y() - m_storedPoints[0].y()) -
					   (m_storedPoints[0].x() - m_storedPoints[1].x()) *
					   (m_storedPoints[2].y() - m_storedPoints[0].y()) );
}

void Triangle::print() const
{
	std::cout<<"Triangle : [";
	for (int i=0; i<m_numberOfPoints; ++i)
		std::cout<<m_storedPoints[i];
	std::cout<<"]"<<std::endl;
}

double Triangle::length() const
{
	double len = 0.0;
	for (int i=0; i<m_numberOfPoints-1; ++i)
		len+= m_storedPoints[i].distance(m_storedPoints[i+1]);
	len+= m_storedPoints[0].distance(m_storedPoints[m_numberOfPoints-1]);
	return len;
}