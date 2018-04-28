#ifndef Calc_error_h
#define Calc_error_h

#include <string>
#include <stdexcept>

/// Klasa reprezentujaca wlasny wyjatek - dziedziczy po wyjatku runtime_error
class Calc_error : public std::runtime_error
{
public:
	/// Konstruktor, przyjmuje wyjatek i dane o miejscu rzucenia
	Calc_error(std::runtime_error* wyjatek, const std::string& poziom, const std::string& plik, unsigned linia): 
		std::runtime_error(poziom + ", [plik = " + plik + ", linia = " + std::to_string(linia) + "]"), m_rzuconyWyjatek(wyjatek) {}

	/// Metoda statyczna sluzaca do obslugi rzuconych wyjatkow
	static void handler();

private:
	std::runtime_error* m_rzuconyWyjatek;
};

#endif