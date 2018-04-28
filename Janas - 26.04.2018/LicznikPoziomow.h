#ifndef LicznikPoziomow_h
#define LicznikPoziomow_h

/// Klasa reprezentujaca licznik poziomow - kazdy stworzony egzemplarz obiektu zwieksza licznik o 1
class LicznikPoziomow
{
public:
	/// Glosny konstruktor - wypisuje wiadomosc i zwieksza licznik poziomow o +1
	LicznikPoziomow();

	/// Glosny destruktor - wypsiuje wiadomosci i zmienia licznik poziomow o -1
	~LicznikPoziomow();

private:
	static unsigned m_poziom; /// statyczny licznik poziomow

};

#endif