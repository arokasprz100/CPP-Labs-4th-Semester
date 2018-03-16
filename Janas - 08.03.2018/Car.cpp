#include "Car.h"
#include <iostream>

Car::Car (unsigned id, int numberOfPassengers):
	Vehicle(id), m_numberOfPassengers(numberOfPassengers) 
{
	m_passengersIDs = new unsigned [m_numberOfPassengers];
}

void Car::SetPassengersIds (const int * ids, unsigned number)
{
	for (unsigned i=0; i<number; ++i)
		m_passengersIDs[i] = ids[i];
}

void Car::Drive() const
{
	std::cout<<"Driving the car with ID="<<Id()<<std::endl;
}

void Car::Print() const
{
	std::cout<<"Car with ID="<<Id()<<" has "<<m_numberOfPassengers<<" passengers with following IDs: " ;
	for (unsigned i = 0; i<m_numberOfPassengers; ++i)
	{
		std::cout<<m_passengersIDs[i];
		if (i!=m_numberOfPassengers-1)
			std::cout<<", ";
		else
			std::cout<<". ";
	}
	std::cout<<"Max speed of the car is "<<m_maxSpeed<<std::endl;

}

void Car::SetPrice(unsigned price)
{
	std::cout<<"The car price will be: "<<price<<std::endl;
	Product::SetPrice(price);
}

void Car::Move() const
{
	Drive();
}

Car::~Car()
{
	delete [] m_passengersIDs;
}