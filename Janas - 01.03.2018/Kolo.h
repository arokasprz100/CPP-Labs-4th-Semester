#ifndef Kolo_h
#define Kolo_h

#include "Ksztalt.h"

class Kolo : public Ksztalt
{
public:
	/// Konstruktor jednoargumentowy wywolywany przy tworzeniu obiektu klasy Kolo
	/// Przyjmowany argument typu double reprezentuje promien kola
	/// Domyslnie ma on wartosc 0.0
	Kolo (double promien = 0.0):
		m_promien(promien) {}

	/// Funkcja wypisujaca informacje o kole do przekazanego jako argument strumienia
	/// Format wypisywania: Kolo o promieniu: <promien_kola>
	/// Metoda ta jest stala, gwarantuje niemodyfikowanie obiektu
	virtual void wypisz (std::ostream& strumien_wyjsciowy) const;

	/// Funkcja liczaca i zwracajaca pole powierzchni Kola
	/// Metoda typu const
	virtual double polePow() const;



private:
	/// Pole typu double przechowujace promien kola
	double m_promien;

};

#endif