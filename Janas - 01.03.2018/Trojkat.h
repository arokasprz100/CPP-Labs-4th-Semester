#ifndef Trojkat_h
#define Trojkat_h

#include "Ksztalt.h"

class Trojkat : public Ksztalt
{
public:
	/// Konstruktor obiektu klasy Trojkat
	/// Konstruktor przyjmuje 3 argumenty reprezentujace boki trojkata
	/// Domyslne argumenty konstruktora ustawione sa na 0.0
	Trojkat (double a = 0.0, double b = 0.0, double c = 0.0) :
		m_bok_a(a), m_bok_b(b), m_bok_c(c) {}


	/// Funkcja wypisujaca informacje o trojkacie do przekazanego jako argument strumienia
	/// Format wypisywania: Trojkat o bokach: <bok_a> <bok_b> <bok_c>
	/// Metoda ta jest stala, gwarantuje niemodyfikowanie obiektu
	virtual void wypisz (std::ostream& strumien_wyjsciowy) const;

	/// Funkcja liczaca i zwracajaca pole powierzchni Trojkata
	/// Jest to metoda stala
	virtual double polePow() const;


private:
	/// Pola reprezentujace boki trojkata
	double m_bok_a;
	double m_bok_b;
	double m_bok_c;

};

#endif