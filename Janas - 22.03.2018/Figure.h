#ifndef Figure_h
#define Figure_h

#include "Transformable.h"
#include "Point.h"

class Area 
{
public:
	virtual double area() const = 0;
	virtual ~Area() {};
};

/// Class that storesa info about figure
class Figure : public Transformable
{
public:
	/// Constructor, allocates memory for given number of points
	/// Memory is freed by destuctor
	Figure (int numberOfPoints);

	/// Copy constructor - makes new instances of stored points - no dependency
	Figure (const Figure& copied);

	/// Prints info about figure
	virtual void print() const;

	/// Allows to make change in point given by pointID
	void setPoint(int pointID, double x, double y);

	/// Virtual method thst calculates length of figure - we
	/// understand length as sum of distances between points
	virtual double length() const;

	/// Virtual destructor, frees allocated memory
	virtual ~Figure();

	/// Enables scaling figure - math operation
	virtual void scale(const Point & p, const double scale);

	/// Moves figure by given coordinates
	virtual void move(const double x, const double y);
	
	/// Rotates figure by given angle 
	virtual void rotate(const Point & p, const double angle);	

protected:
	Point* m_storedPoints;
	int m_numberOfPoints;

};



#endif