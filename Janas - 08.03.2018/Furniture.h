#ifndef Furniture_h
#define Furniture_h

#include "Product.h"

class Furniture : public Product 
{
public:
	Furniture (unsigned id):
		Product(id) {}

	void Sit() const;

	void Print() const;

	void SetPrice(unsigned price);

private:

};

#endif