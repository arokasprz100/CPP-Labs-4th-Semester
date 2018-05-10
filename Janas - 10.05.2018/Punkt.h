#ifndef Punkt_h
#define Punkt_h

/// Klasa reprezentujaca punkt na plaszczyznie (punkt 2d)
class Punkt
{
public:
	/// Konstruktor obiektu klasy punkt. Przyjmuje argumenty reprezentujace
	/// wspolrzedne punktu
	Punkt (int x = 0, int y = 0):
		m_x(x), m_y(y) {}

	/// Metoda szablonowa zwracajaca wspolrzedna o zadanym indeksie
	/// Jesli 0 to x, w innym wypadku y
	template <int cords> int wsp() const;

	/// Operator porownania punktu z punktem. Najpierw sprawdza x, jesli rowne to y
	bool operator < (const Punkt& porownywany) const;

	/// Metoda szablonowa zwracajaca min z dwoch wartosc
	template <typename T> static const T& min(const T& por1, const T& por2);

	/// Metoda szablonowa zwracajaca max z dwoch wartosc
	template <typename T> static const T& max(const T& por1, const T& por2);


private:
	int m_x;
	int m_y;

};


template <int cords> int Punkt::wsp() const
{
	if (cords==0)
		return m_x;
	else 
		return m_y;
}


template <typename T> const T& Punkt::min(const T& por1, const T& por2)
{
	return por1 < por2 ? por1 : por2;
}


template <typename T> const T& Punkt::max(const T& por1, const T& por2)
{
	if (por1 < por2)
		return por2;
	else 
		return por1;
}

#endif