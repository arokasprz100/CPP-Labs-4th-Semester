#include "Cow.h"
#include <iostream>

Cow::Cow(unsigned age):
	Animal(age)
{
	std::cout<<"Cow"<<std::endl;
}



void Cow::saySomething() const
{
	std::cout<<"Cow: Muuu..."<<std::endl;
}



void Cow::print() const
{
	std::cout<<"Animal with age "<<m_age<<", Cow"<<std::endl;
}



Cow::~Cow()
{
	std::cout<<"Bye Cow"<<std::endl;
}