#include "Vehicle.h"
#include <iostream>

void Vehicle::SetPrice(unsigned price)
{
	std::cout<<price<<" is the new cost of the vehicle"<<std::endl;
	Product::SetPrice(price);
}

void Vehicle::Print() const
{
	std::cout<<"This is a vehicle with max speed of "<<m_maxSpeed<<std::endl;
}

void Vehicle::SetMaxSpeed(unsigned speed)
{
	m_maxSpeed = speed;
}

void Vehicle::Move() const
{
	std::cout<<"Moving with speed "<<m_maxSpeed<<std::endl;
}