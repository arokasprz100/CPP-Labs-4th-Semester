#include "Airplane.h"
#include <iostream>


void Airplane::SetPrice(unsigned price)
{
	std::cout<<"The plane price is changed"<<std::endl;
	Product::SetPrice(price);
}

void Airplane::SetWingspan(unsigned wingspan)
{
	m_wingspan = wingspan;
}

void Airplane::Fly() const
{
	std::cout<<"Flying the airplane with ID="<<Id()<<std::endl;
}


void Airplane::Print() const
{
	std::cout<<"A vehicle with ID="<<Id()<<" is an airplane with max speed of "<<m_maxSpeed<<" and wignspan "<<m_wingspan<<std::endl;
}

void Airplane::Move() const
{
	Fly();
}