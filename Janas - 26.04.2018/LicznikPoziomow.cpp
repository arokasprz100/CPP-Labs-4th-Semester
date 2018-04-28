#include <iostream>
#include "LicznikPoziomow.h"

unsigned LicznikPoziomow::m_poziom = 0u;

LicznikPoziomow::LicznikPoziomow()
{
	m_poziom++;
	std::cout<<"Rozpoczynamy poziom numer "<<m_poziom<<"."<<std::endl;
}

LicznikPoziomow::~LicznikPoziomow()
{
	std::cout<<"Konczymy poziom numer "<<m_poziom<<"."<<std::endl;
	m_poziom--;
}