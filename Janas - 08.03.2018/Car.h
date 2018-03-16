#ifndef Car_h
#define Car_h

#include "Vehicle.h"

class Car : public Vehicle 
{
public:
	Car (unsigned id, int numberOfPassengers);

	void SetPassengersIds (const int * ids, unsigned number);

	void Drive() const;

	void Print() const;

	void SetPrice(unsigned price);

	void Move() const;

	~Car();

private:
	unsigned* m_passengersIDs;
	unsigned m_numberOfPassengers;
	

};

#endif