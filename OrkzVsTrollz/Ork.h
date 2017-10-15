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
	baseDamage = 10;
	health = 100;
	isOrk = true;
}