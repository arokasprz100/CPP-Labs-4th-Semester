#include "ProArray.h"

ProArray::ProArray(unsigned size):
	m_size(size)
{
	m_stored = new Property* [size];
	for (unsigned i=0; i<size; ++i)
		m_stored[i] = new Property;
}

ProArray::~ProArray()
{
	for (unsigned i = 0; i<m_size; ++i)
		delete m_stored[i];
	delete [] m_stored;
}

void ProArray::set (unsigned index, const Property& added)
{
	delete m_stored[index];
	m_stored[index] = added.clone();
	
}

void ProArray::printAll()
{
	std::cout<<"{";
	for (unsigned i=0; i<m_size; ++i){
		m_stored[i]->print(std::cout);
		if (i != m_size - 1)
			std::cout<<", ";
	}
	std::cout<<"}"<<std::endl;
}
