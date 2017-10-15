#include <iostream>
#include "Character.h"
#include "Spell.h"
#include "Ork.h"
#include "Troll.h"
#include "Regenerate.h"
#include "MagicMissile.h"
#include "Slow.h"
#include "FireSpear.h"

using namespace std;


//----------------------------------------------------------------------------------------------------



void gameloop();
void initialize();
void getInput(Character *c);
void damageRound1(Character *ork, Character *troll);
void castSpells(Character *ork, Character *troll);
void damageRound2(Character *ork, Character *troll);
void damageRound3(Character *ork, Character *troll);

int main(void)
{
	gameloop();

	return 0;
}

void gameloop()
{
	Orc orc;
	Troll troll;
	Character* npc = &orc;
	bool gameOver = false;

	while (!gameOver)
	{
		for (int i = 0; i < 2; i++)
		{
			cout << "currplayer is: ";
			if (npc->getType())
			{
				cout << "Ork";
			}
			else
			{
				cout << "Troll";
			}
			cout << endl;

			getInput(npc);

			//Swap currplayer
			if (npc->getType())
			{
				npc = &troll;
			}
			else
			{
				npc = &orc;
			}
		}

		damageRound1(&orc, &troll);
		castSpells(&orc, &troll);
		damageRound2(&orc, &troll);
		damageRound3(&orc, &troll);
	}

	
}

void initialize()
{
}

void getInput(Character *c)
{
	int selection;
	bool invalid = true;
	cout << "select spell(not implemented)" << endl;

	while (invalid)
	{
		cout << "select attack type: \n1.ranged\n2.melee\n3.magic" << endl;
		cin >> selection;
		c->setAttackType(selection);
		system("CLS");

		if (selection < 1 || selection > 3)
		{
			invalid = true;
			cout << "invalid input" << endl;
		}
		else
		{
			invalid = false;
		}
	}

	invalid = true;
	while (invalid)
	{

		cout << "select attack speed: \n1.fast\n2.normal\n3.slow" << endl;
		cin >> selection;
		c->setAttackSpeed(selection);
		system("CLS");

		if (selection < 1 || selection > 3)
		{
			invalid = true;
			cout << "invalid input" << endl;
		}
		else
		{
			invalid = false;
		}
	}

	invalid = true;
	while (invalid)
	{
		cout << "select shield: \n1.Tower\n2.Crest\n3.Magic" << endl;
		cin >> selection;
		c->setshieldType(selection);
		system("CLS");


		if (selection < 1 || selection > 3)
		{
			invalid = true;
			cout << "invalid input" << endl;
		}
		else
		{
			invalid = false;
		}
	}

}

void damageRound1(Character * ork, Character * troll)
{
	cout << "DAMAGE ROUND 1: FAST ATTACKS" << endl;

	if (ork->attackSpeed == 1)
	{
		int damage = ork->getDamage() * 0.75;
		if (troll->getShieldType() == ork->getAttackType())
		{
			damage *= 0.50;
		}

		troll->dealDamge(damage);
		std::cout << "The ork quickly makes it's attack on the Troll and deals " << damage << " damage." << std::endl;
	}

	if (troll->attackSpeed == 1)
	{
		int damage = troll->getDamage() * 0.75;
		if (ork->getShieldType() == troll->getAttackType())
		{
			damage *= 0.50;
		}

		ork->dealDamge(damage);
		std::cout << "The Troll quickly makes it's attack on the ork and deals " << damage << " damage." << std::endl;
	}

	if (ork->attackSpeed != 1 && troll->attackSpeed != 1)
	{
		std::cout << "Neither make a fast attack on the other and instead look passionately into each others eyes" << std::endl;
	}

	system("pause");
	system("CLS");

}

void castSpells(Character * ork, Character * troll)
{
	system("pause");
	system("CLS");

}

void damageRound2(Character * ork, Character * troll)
{
	cout << "DAMAGE ROUND 2: NORMAL ATTACKS" << endl;

	if (ork->attackSpeed == 2)
	{
		int damage = ork->getDamage();
		if (troll->getShieldType() == ork->getAttackType())
		{
			damage *= 0.50;
		}

		troll->dealDamge(damage);
		std::cout << "The ork makes it's attack on the Troll and deals " << damage << " damage." << std::endl;
	}

	if (troll->attackSpeed == 2)
	{
		int damage = troll->getDamage();
		if (ork->getShieldType() == troll->getAttackType())
		{
			damage *= 0.50;
		}

		ork->dealDamge(damage);
		std::cout << "The Troll makes it's attack on the ork and deals " << damage << " damage." << std::endl;
	}

	if (ork->attackSpeed != 2 && troll->attackSpeed != 2)
	{
		std::cout << "Neither make an attack on the other and instead look lovingly into each others eyes" << std::endl;
	}

	system("pause");
	system("CLS");

}

void damageRound3(Character * ork, Character * troll)
{
	cout << "DAMAGE ROUND 3: SLOW ATTACKS" << endl;

	if (ork->attackSpeed == 3)
	{
		int damage = ork->getDamage() * 1.25;
		if (troll->getShieldType() == ork->getAttackType())
		{
			damage = 0;
		}

		troll->dealDamge(damage);
		std::cout << "The ork makes it's attack on the Troll and deals " << damage << " damage." << std::endl;
	}

	if (troll->attackSpeed == 3)
	{
		int damage = troll->getDamage() * 1.25;
		if (ork->getShieldType() == troll->getAttackType())
		{
			damage = 0;
		}

		ork->dealDamge(damage);
		std::cout << "The Troll makes it's attack on the ork and deals " << damage << " damage." << std::endl;
	}

	if (ork->attackSpeed != 3 && troll->attackSpeed != 3)
	{
		std::cout << "Neither make an attack on the other and instead look longfully into each others eyes" << std::endl;
	}

	system("pause");
	system("CLS");

}

