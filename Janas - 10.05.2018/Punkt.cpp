#include "Punkt.h"

bool Punkt::operator < (const Punkt& porownywany) const
{
	if (m_x > porownywany.m_x)
		return false;
	else if (m_x == porownywany.m_x)
		if (m_y >= porownywany.m_y)
			return false;
	return true;
}