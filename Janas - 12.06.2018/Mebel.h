#ifndef Mebel_h
#define Mebel_h

#include <string>
#include <iostream>
#include <vector>
#include <fstream>

/// Prosta klasa reprezentujaca mebel
/// Mebel posiada nazwe, wymiary oraz opis
/// Dane o meblu moga zostac wypisane na ekran lub
/// do pliku oraz wczytane
class Mebel
{
public:
	/// Prosty konstruktor, ustawia pola Mebla na podane w argumentach
	/// Domyslnie wartosci sa puste
	Mebel(const std::string& nazwa = "", int x = 0, int y = 0, int z = 0, const std::string& opis = ""):
		m_nazwa(nazwa), m_x(x), m_y(y), m_z(z), m_opis(opis) {}

	/// Zaprzyjazniony z klasa operator wypisujacy informacje o meblu do
	/// strumienia. Moze sluzyc do zapisu do pliku
	friend std::ostream& operator<<(std::ostream& strumien, const Mebel& wypisywany);

	/// Zaprzyjazniony z klasa operator wczytujacy informacje o meblu ze strumienia
	/// Moze sluzyc do wczytywania z pliku
	friend std::ifstream& operator>>(std::ifstream& strumien, Mebel& zapis);

private: /// pola

	/// nazwa mebla
	std::string m_nazwa;

	/// wymiary mebla
	int m_x, m_y, m_z;

	/// opis mebla
	std::string m_opis;

};

/// Przeladowany operator wypisujacy wektor mebli
std::ifstream& operator>> (std::ifstream& strumien, std::vector<Mebel>& wektor);

#endif