#ifndef Vehicle_h
#define Vehicle_h

#include "Product.h"

class Vehicle : public Product 
{
public:
	Vehicle (const unsigned id) : 
		Product(id) {}

	virtual void SetPrice(unsigned price);

	virtual void Print() const;

	void SetMaxSpeed(unsigned speed);

	virtual void Move() const;

	virtual ~Vehicle() {}

protected:
	unsigned m_maxSpeed;

};

#endif