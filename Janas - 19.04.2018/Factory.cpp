#include "Factory.hpp"

Value* Factory::PrepareValue(std::string name, double value)
{
	Value* manufactured =  new Value(name, value);
	m_valueVector.push_back(manufactured);
	if (value>=m_rangeStart and value <=m_rangeEnd)
		return manufactured;	
	else throw OutOfRange(this, manufactured);
}

Factory::~Factory()
{
	for (unsigned i = 0; i<m_valueVector.size(); ++i)
		delete m_valueVector[i];
	std::cout<<"Factory destroyed."<<std::endl;
}