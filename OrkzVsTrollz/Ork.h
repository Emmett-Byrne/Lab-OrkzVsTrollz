#pragma once
#include "Character.h"
#include <iostream>

using namespace std;

class Orc : public Character {
public:

	Orc();
	void warcry()
	{
		cout << "waaaaagggghhhh!!!" << endl;
	};
};


Orc::Orc()
{
	m_baseDamage = 10;
	m_health = 100;
	m_isOrk = true;
}