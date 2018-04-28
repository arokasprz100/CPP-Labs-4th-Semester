#include "OutOfRange.hpp"
#include "Factory.hpp"

void OutOfRange::CleanFactory()
{
	delete m_ptrToFactory;
	m_ptrToFactory = nullptr;
}

std::ostream& operator<<(std::ostream& stream, const OutOfRange& exception)
{
	stream<<"Value named: "<<exception.m_ptrToValue->GetName()<<" has value "<<exception.m_ptrToValue->GetValue();
	stream<<" which is outside of the allowed range: ["<<exception.m_ptrToFactory->GetRangeStart();
	stream<<", "<<exception.m_ptrToFactory->GetRangeEnd()<<"]";
	return stream;
}
