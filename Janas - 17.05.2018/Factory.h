#ifndef Factory_h
#define Factory_h


/// Klasa reprezentujaca "fabryke". Fabryka
/// posiada funkcje pozwalajace na przechowywanie
/// zadanych wartosci.
class Factory
{
public:
	/// Szablon funkcji ktora, jesli argument set = true, to
	/// zapamietuje wartosc value. Funkcja zapamietuje ostatnia
	/// wartosc, dla ktorej set = true. Funkcja zwraca rowniez
	/// wspomniana wartosc 
	template <typename T> 
	const T& base (const T& value, bool set = true) const;

	/// Szablon funkcji zwracjacej zapamietany przez funkcje base
	/// obiekt. To, ktory z zapamietanych obiektow zostanie zwrocony
	/// zalezne jest od typu przekazanego jako parametr szablonu
	template <typename T> 
	const T& product () const;

};


/// Definicje metod szablonu: ///

template <typename T> 
const T& Factory::base (const T& value, bool set) const
{
	static T m_value;
	if (set == true)
		m_value = value;

	return m_value;
}

template <typename T> 
const T& Factory::product () const
{
	return base<T>(T(), false);
}

#endif