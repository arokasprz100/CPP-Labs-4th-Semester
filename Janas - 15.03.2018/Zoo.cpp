#include "Zoo.h"
#include <iostream>

Zoo::Zoo(std::string name, unsigned cap):
	m_name (name), m_allPlaces(cap)
{
	m_storedAnimals = new Animal* [cap];
	for (unsigned i = 0; i<cap; ++i)
		m_storedAnimals[i] = 0;

	m_numberOfStored = 0;
}

void Zoo::print() const
{
	std::cout<<"Zoo: "<<m_name<<std::endl;
	for (unsigned i = 0; i<m_allPlaces; ++i){
		std::cout<<"Enclosure "<<i<<" : ";
		if (m_storedAnimals[i]==0)
			std::cout<<"empty"<<std::endl;
		else
			m_storedAnimals[i]->print();
	}
}

Animal* Zoo::insert(unsigned place, Animal* inserted)
{
	if (m_storedAnimals[place])
		return inserted;
	m_storedAnimals[place] = inserted;
	m_numberOfStored++;
	return 0;

}

Animal* Zoo::insert(Animal* inserted)
{
	static unsigned lastPlace = 0;
	while (lastPlace<m_allPlaces)
	{
		if (m_storedAnimals[lastPlace])
			lastPlace++;
		else 
		{
			m_storedAnimals[lastPlace] = inserted;
			lastPlace++;
			m_numberOfStored++;
			return 0;
		}

	}
	return inserted;
	
}

Animal* Zoo::remove (unsigned place)
{
	Animal *temp = 0;
	if (m_storedAnimals[place]){
		temp = m_storedAnimals[place];
		m_storedAnimals[place] = 0;
		m_numberOfStored--;
	}
	return temp;

}


void Zoo::reorganize(unsigned newNumber)
{
	if (newNumber<m_numberOfStored)
	{
		std::cout<<"There is more than "<<newNumber<<" animals in zoo, resize imposible"<<std::endl;
		return;
	}
	else
	{
		std::cout<<m_name<<" zoo: new size = "<<newNumber<<std::endl;
		Animal ** temp = new Animal* [newNumber];
		for (unsigned i =0; i<newNumber; ++i)
			temp[i] = 0;
		unsigned j =0;
		for (unsigned i =0; i<m_allPlaces; ++i)
		{
			if (m_storedAnimals[i]){
				temp[j] = m_storedAnimals[i];
				j++;
			}
		}
		m_allPlaces = newNumber;
		delete [] m_storedAnimals;
		m_storedAnimals = temp;
	}

}

unsigned Zoo::numOfAnimals() const
{
	return static_cast<int>(m_numberOfStored);
}


Zoo::~Zoo()
{
	for (unsigned i =0; i<m_allPlaces; ++i)
	{
		if (m_storedAnimals[i])
			delete m_storedAnimals[i];
	}
	std::cout<<m_name<<" zoo - closed"<<std::endl;
	delete [] m_storedAnimals;
}