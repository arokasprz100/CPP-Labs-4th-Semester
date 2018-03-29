#include "Property.h"

void Property::print(std::ostream& stream) const
{
	stream<<"EMPTY";
}

void Property_Int::print(std::ostream& stream) const
{
	stream<<m_data<<"i";
}

void Property_Float::print(std::ostream& stream) const
{
	stream<<m_data<<"f";
}

std::ostream& operator << (std::ostream& stream, const Property& printed)
{
	printed.print(stream);
	return stream;
}

Property* Property::clone() const
{
	return new Property();
}

Property* Property_Int::clone() const
{
	return new Property_Int(*this);
}

Property* Property_Float::clone() const
{
	return new Property_Float(*this);
}


	


void Property_Int::modulo (int value)
{
	m_data = m_data % value;
}

void Property_Float::inverse()
{
	m_data = 1.0f / m_data;
}