#ifndef PredkoscMaksymalna_h
#define PredkoscMaksymalna_h

/// klasa reprezentujaca predkosc maksymalna pojazdu
class PredkoscMaksymalna
{
public:
	//konstruktor inicjuje pole wartoscia podana w argumencie
	PredkoscMaksymalna(int predkosc): 
		m_predkosc(predkosc) {}

	//funkcja zwracajaca wartosc predkosci maksymalnej
	int getPredkosc() const {return m_predkosc;} 

private:
	//pole reprezentujace predkosc
	int m_predkosc;

};

//operator zwracajacy strumien z predkoscia maksymalna podana w km/h
std::ostream& operator<<(std::ostream& strumien, const PredkoscMaksymalna& wypisywana)
{
	strumien<<wypisywana.getPredkosc()<<"km/h";
	return strumien;
}

#endif