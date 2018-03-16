#include "Parrot.h"
#include <iostream>


Parrot::Parrot(unsigned age, std::string name):
	Animal(age), m_name(name)
{
	std::cout<<"Parrot: "<<name<<std::endl;
}



void Parrot::saySomething() const
{
	std::cout<<"Parrot: "<<m_name<<". "<<m_name<<"! "<<std::endl;
}



void Parrot::print() const
{
	std::cout<<"Animal with age "<<m_age<<", Parrot: "<<m_name<<std::endl;
}



Parrot::~Parrot()
{
	std::cout<<"Bye Parrot"<<std::endl;
}