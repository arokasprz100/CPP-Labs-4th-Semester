#include "Sheep.h"
#include <iostream>

Sheep::Sheep(unsigned age):
	Animal(age)
{
	std::cout<<"Sheep "<<std::endl;
}



void Sheep::print() const
{
	std::cout<<"Animal with age "<<m_age<<", Sheep"<<std::endl;
}



Sheep::~Sheep()
{
	std::cout<<"Bye Sheep"<<std::endl;
}