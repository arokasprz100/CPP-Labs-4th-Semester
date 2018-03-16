#include "Trojkat.h"
#include <cmath>

void Trojkat::wypisz (std::ostream& strumien_wyjsciowy) const
{
	strumien_wyjsciowy<<"Trojkat o bokach: "<<m_bok_a<<" "<<m_bok_b<<" "<<m_bok_c<<std::endl;
}

double Trojkat::polePow() const
{
	double polowa_obwodu = 0.5 * (m_bok_a+m_bok_b+m_bok_c);
	return sqrt(polowa_obwodu*(polowa_obwodu-m_bok_a) * (polowa_obwodu-m_bok_b) * (polowa_obwodu-m_bok_c));
}