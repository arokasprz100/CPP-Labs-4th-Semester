#ifndef Amfibia_h
#define Amfibia_h

#include "Samochod.h"
#include "Motorowka.h"

//klasa reprezentujaca Amfibie czyli polaczenie samochodu i motorowki
//dlatego dziedziczy po obu z nich
class Amfibia : public Samochod, public Motorowka
{
public:
	//konstruktor przyjmujacy predkosc maksymalna na ladzie i na wodzie
	//wywoluje kontruktor klasy pojazd z powodu dziedziczenia wirtualnego
	Amfibia(PredkoscMaksymalna predkoscSamochodu, PredkoscMaksymalna predkoscMotorowki):
		Pojazd(), Samochod(predkoscSamochodu), Motorowka(predkoscMotorowki) {}

	//metoda zwracajaca string z rodzajem pojazdu
	virtual std::string rodzaj() const {return "Amfibia";}

	//wirtualny destruktor, nie robi nic
	virtual ~Amfibia() {}

};

#endif