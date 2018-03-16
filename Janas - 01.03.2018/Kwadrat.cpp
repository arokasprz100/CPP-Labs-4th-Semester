#include "Kwadrat.h"

void Kwadrat::wypisz (std::ostream& strumien_wyjsciowy) const
{
	strumien_wyjsciowy<<"Kwadrat o boku:"<<m_bok<<std::endl;
}

double Kwadrat::polePow() const
{
	return m_bok*m_bok;
}