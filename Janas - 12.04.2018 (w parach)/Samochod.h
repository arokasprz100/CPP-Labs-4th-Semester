#ifndef Samochod_h
#define Samochod_h

#include "PojazdLadowy.h"
#include "PredkoscMaksymalna.h"

//klasa reprezentujaca samochod czyli specjalny rodzaj pojazdu ladowego
// Dziedziczy po Pojezdzie Ladowym, rowniez bo dynamic_cast nie zwraca nulla
class Samochod : public virtual PojazdLadowy
{
public:
	//konstruktor inicjalizuje pole predkosci maksymalnej
	Samochod(PredkoscMaksymalna predkoscMaksymalna):
		m_predkoscMaksymalna(predkoscMaksymalna) {}

	//metoda wirtualna zwracaj string z rodzajem pojazdu ladowego
	virtual std::string rodzaj() const {return "Samochod";}

	//metoda zwracajaca referencje do obiektu klasy PredkoscMaksymalna
	const PredkoscMaksymalna& predkoscMaksymalna() const {return m_predkoscMaksymalna;}

	//wirtualny destruktor, nie robi nic
	virtual ~Samochod() {}

private:
	//pole reprezentujace obiekt predkosci maksymalnej
	PredkoscMaksymalna m_predkoscMaksymalna;

};


#endif