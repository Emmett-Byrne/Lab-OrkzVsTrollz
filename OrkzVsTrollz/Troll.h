#pragma once
#include "Character.h"
#include <iostream>

using namespace std;


class Troll : public Character {
public:

	Troll();
	void warcry()
	{
		cout << "Blaaaaaarrrgggggg!!!" << endl;
	};
};

Troll::Troll()
{
	m_baseDamage = 10;
	m_health = 100;
	m_isOrk = false;
}