#ifndef NicePrinter_h
#define NicePrinter_h

#include <iostream> /// std::cout, std::endl
#include <iomanip> /// std::setw()


/// Klasa do wypisywania roznych typow
/// Numeruje kolejne wypisania i formatuje
/// numeracje
class NicePrinter
{
public:
	/// Konstruktor, ustawia liczbe miejsc przeznaczonych do wypisania
	/// numeracji. Jedyny argument tej funkcji oznacza wlasnie ta ilosc
	/// cyfr w numerze. 
	NicePrinter(unsigned numerOfDigits) 
		: m_numerOfDigits(numerOfDigits) {}

	/// Szablon operatora () sluzacego do wypisywania wartosci zadanej
	/// w argumencie. Wypisuje zgodnie z formatem:
	/// <numer>: <wartosc>
	/// gdzie na numer przeznaczona jest zadana w konstruktorze ilosc znakow
	template <typename T> 
	void operator() (const T& doWypisania) const;

private:
	/// Pole oznaczajace ilosc cyfr przeznaczonych na numeracje przy wypisywaniu
	unsigned m_numerOfDigits;

	/// Statyczna zmienna typu int przechowujaca numer kolejnego wypisania
	static unsigned m_nextNumber;

};

unsigned NicePrinter::m_nextNumber = 1;

/// Definicje metod szablonu: ///

template <typename T> 
void NicePrinter::operator() (const T& doWypisania) const
{
	std::cout << std::setw( m_numerOfDigits ) << m_nextNumber;
	std::cout << ": "<<doWypisania<<std::endl;
	++m_nextNumber;
}



#endif