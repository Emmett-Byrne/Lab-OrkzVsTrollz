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
	baseDamage = 10;
	health = 100;
	isOrk = false;
}