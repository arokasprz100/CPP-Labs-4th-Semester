#include "Animal.h"
#include <iostream>

Animal::Animal(unsigned age):
	m_age(age)
{
	std::cout<<"Animal with age "<<age<<", ";
}
