#include "Lion.h"
#include <iostream>


Lion::Lion(unsigned age):
	Animal(age)
{
	std::cout<<"Lion"<<std::endl;
}



void Lion::saySomething() const
{
	std::cout<<"Lion: Aghr!"<<std::endl;
}



void Lion::print() const
{
	std::cout<<"Animal with age "<<m_age<<", Lion"<<std::endl;
}



Lion::~Lion()
{
	std::cout<<"Bye Lion"<<std::endl;
}
