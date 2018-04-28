#include "Value.hpp"

void Value::Print() const
{
	std::cout<<m_name<<" = "<<m_value<<std::endl;
}

Value::~Value()
{
	std::cout<<"Destroying value "<<m_value<<std::endl;
}