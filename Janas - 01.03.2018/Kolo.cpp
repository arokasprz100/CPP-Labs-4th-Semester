#include "Kolo.h"

void Kolo::wypisz (std::ostream& strumien_wyjsciowy) const
{
	strumien_wyjsciowy<<"Kolo o promieniu:"<<m_promien<<std::endl;
}

double Kolo::polePow() const
{
	return m_promien*PI*PI;
}