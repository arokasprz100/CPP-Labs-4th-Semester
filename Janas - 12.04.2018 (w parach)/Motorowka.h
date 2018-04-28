#ifndef Motorowka_h
#define Motorowka_h

#include "PredkoscMaksymalna.h"

//klasa reporezentujaca szczegolny typ pojazdu czyli pojazd wodny
// Nie dziedziczy po pojezdzie ladowym, bo dynamic_cast zwraca nulla
class Motorowka : public virtual Pojazd 
{
public:
	//kontruktor inicjalizujacy pole predkosci maksymalnej
	Motorowka(PredkoscMaksymalna predkoscMaksymalna):
		m_predkoscMaksymalna(predkoscMaksymalna) {}

	//metoda wirtualna zwracajaca string z rodzajem pojazdu
	virtual std::string rodzaj() const {return "Motorowka";}

	//metoda zwracajaca referenncje do obiektu typu PredkoscMaksymalna
	//uzywana przy wypisywaniu predkosci maksymalnej
	const PredkoscMaksymalna& predkoscMaksymalna() const {return m_predkoscMaksymalna;}

	//wirtualny destruktor, nie robi nic
	virtual ~Motorowka() {}

private:
	//pole reprezentujace obiekt klasy PredkoscMaksymalna
	PredkoscMaksymalna m_predkoscMaksymalna;

};

#endif