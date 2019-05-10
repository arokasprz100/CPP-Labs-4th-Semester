#include "Mebel.h"

std::ostream& operator<<(std::ostream& strumien, const Mebel& wypisywany)
{
	strumien << "<" <<wypisywany.m_nazwa <<"> " << wypisywany.m_x<<" "<<wypisywany.m_y<<" "<<
	wypisywany.m_z << " \"" <<wypisywany.m_opis <<"\" ";
	return strumien;
}

std::ifstream& operator>>(std::ifstream& strumien, Mebel& zapis)
{
	std::string z_pliku;
	while (strumien.good())
	{
		strumien >> z_pliku;
		zapis.m_nazwa += z_pliku + " ";
		if (z_pliku.find('>') != std::string::npos)
			break;
			
	}
	zapis.m_nazwa = zapis.m_nazwa.substr(1, zapis.m_nazwa.size() - 3);

	strumien >> zapis.m_x;
	strumien >> zapis.m_y;
	strumien >> zapis.m_z;

	while (strumien.good())
	{
		strumien >> z_pliku;
		zapis.m_opis += z_pliku + " ";
		if (z_pliku.back() == '\"')
			break;
	}

	if (zapis.m_opis.size() != 0)
		zapis.m_opis = zapis.m_opis.substr(1, zapis.m_opis.size() - 3);

	return strumien;
}


std::ifstream& operator>> (std::ifstream& strumien, std::vector<Mebel>& wektor)
{
	while (strumien.good()){
		Mebel x;
		strumien >> x;
		if (strumien.good())
			wektor.push_back(x);
	}
	return strumien;

}
