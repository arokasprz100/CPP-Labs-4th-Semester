#ifndef PojazdLadowy_h
#define PojazdLadowy_h

#include "Pojazd.h"

//klasa czysto abstrakcyjna reprezentujaca pojazd ladowy
//dziedziczy po pojezdzie, jest bardziej sprecyzowanym typem pojazdu
class PojazdLadowy : public virtual Pojazd 
{
public:
	//metoda czysto wirtualna w celach dziedziczenia
	virtual std::string rodzaj() const = 0;

	//wirtualny destruktor nie robi nic
	virtual ~PojazdLadowy() {}


};


#endif