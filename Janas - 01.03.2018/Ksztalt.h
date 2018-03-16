#ifndef Ksztalt_h
#define Ksztalt_h

#include <iostream>


/// Klasa bazowa reprezentujaca ksztalt
/// Jest to klasa abstrakcyjna, posiada metody czysto wirtualne
class Ksztalt 
{
public:
	/// Metoda wirtualna wypisujaca do przekazanego w argumencie strumienia
	/// informacje o przechowywanej figurze
	virtual void wypisz (std::ostream& strumien_wyjsciowy) const = 0;

	/// Metoda wirtualna, obliczajaca i zwracajaca pole powierzchni figury
	virtual double polePow() const = 0;

	/// Wirtualny destruktor klasy Ksztalt
	/// Destruktor nie robi nic
	virtual ~Ksztalt() {};

};

/// Funkcja globalna sluzaca do wypisywania klasy ksztalt
/// Pierwszy argument to stala referencja na obiekt klasy Ksztalt
void wypisz (const Ksztalt& wypisywany);

/// Zmienna zawierajaca wartosc liczby PI z dokladnoscia do 5 cyfr znaczacych
extern double PI;

#endif