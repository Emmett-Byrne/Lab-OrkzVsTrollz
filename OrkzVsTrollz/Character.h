#pragma once


class Character {
public:
	virtual int getDamage();
	virtual int getHealth();
	virtual int getAttackType();
	virtual int getAttackSpeed();
	virtual int getShieldType();
	virtual bool getType();
	virtual void setAttackType(int i);
	virtual void setAttackSpeed(int i);
	virtual void setshieldType(int i);
	virtual void warcry() = 0;
	virtual void dealDamge(int i);
	virtual void addHP(int i);

	//probably should update to use enums
	int baseDamage;
	int health;
	int attackType;
	int attackSpeed;
	int shieldType;
	bool isOrk;
	Spell* spells[3];
};