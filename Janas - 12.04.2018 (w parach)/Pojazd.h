#ifndef Pojazd_h
#define Pojazd_h

#include <string> /// std::string

//klasa bazowa reprezentujaca ogolny typ pojazdu
//klasa czysto abstrakcyjna 
class Pojazd
{
public:
	//czysto wirtualna metoda, dziedziczona przez klasy pochodne
	//potrzebna bo w funkcji wypiszRodzaj() uzywamy wskaznika do pojazdu
	virtual std::string rodzaj() const = 0;

	//wirtualny destruktor, nie robi nic
	virtual ~Pojazd() {}

};


#endif