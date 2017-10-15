#include "Character.h"

int Character::getDamage()
{
	return baseDamage;
}

int Character::getHealth()
{
	return health;
}

int Character::getAttackType()
{
	return attackType;
}

int Character::getAttackSpeed()
{
	return attackSpeed;
}

int Character::getShieldType()
{
	return shieldType;
}

bool Character::getType()
{
	return isOrk;
}

void Character::setAttackType(int i)
{
	attackType = i;
}

void Character::setAttackSpeed(int i)
{
	attackSpeed = i;
}

void Character::setshieldType(int i)
{
	shieldType = i;
}

void Character::dealDamge(int i)
{
	health -= i;
}

void Character::addHP(int i)
{
	health += i;
}
