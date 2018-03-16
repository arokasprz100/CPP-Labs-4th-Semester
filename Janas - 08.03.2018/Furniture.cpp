#include "Furniture.h"

void Furniture::Sit() const
{
	std::cout<<"You sit down on a chair. Nothing happens."<<std::endl;
}

void Furniture::Print() const
{
	std::cout<<"This is chair with ID="<<Id()<<std::endl;
}

void Furniture::SetPrice(unsigned price)
{
	Product::SetPrice(price);
}