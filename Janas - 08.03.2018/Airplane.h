#ifndef Airplane_h
#define Airplane_h

#include "Vehicle.h"

class Airplane : public Vehicle 
{
public:
	Airplane (unsigned id):
		Vehicle(id) {m_maxSpeed = 100;}

	void SetPrice(unsigned price);

	void SetWingspan(unsigned wingspan);

	void Fly() const;

	void Print() const;

	void Move() const;

	~Airplane() {};


private:
	unsigned m_wingspan;


};

#endif