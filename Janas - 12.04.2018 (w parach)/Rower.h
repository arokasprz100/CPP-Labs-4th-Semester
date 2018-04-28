#ifndef Rower_h
#define Rower_h

#include "PojazdLadowy.h"

//klasa reprezentujaca rower, czyli szczegolny typ pojazdu ladowego
// Dziedziczy po Pojezdzie Ladowym, rowniez bo dynamic_cast nie zwraca nulla
class Rower : public PojazdLadowy
{
public:
	//metoda wirtualna zwracajaca string z typem pojazdu
	virtual std::string rodzaj() const {return "Rower";}

	//wirtualny destruktor, nie robi nic
	virtual ~Rower() {}

};


#endif