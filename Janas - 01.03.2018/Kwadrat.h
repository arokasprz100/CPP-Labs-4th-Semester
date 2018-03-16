#ifndef Kwadrat_h
#define Kwadrat_h

#include "Ksztalt.h"

class Kwadrat : public Ksztalt
{
public:
	/// Kostruktor obiektu klasy Kwadrat przyjmujacy jeden argument bedacy bokiem kwadratu
	/// Domyslnie wartosc argumentu ustawiona jest na 0.0
	Kwadrat (double bok = 0.0):
		m_bok(bok) {}

	/// Funkcja wypisujaca do przekazywanego strumienia informacje o Kwadracie
	/// Format: Kwadrat o boku:<bok>
	/// Gwarantuje niemodyfikowalnosc obiektu
	virtual void wypisz (std::ostream& strumien_wyjsciowy) const;

	/// Funkcja obliczajaca i zwracajaca pole powierzchni Kwadratu
	/// Gwarantuje niemodyfikowalnosc obiektu
	virtual double polePow() const;

private:
	/// Pole przechowujace dlugosc boku kwadratu
	double m_bok;

};

#endif