#include "Character.h"

int Character::getDamage()
{
	return m_baseDamage;
}

int Character::getHealth()
{
	return m_health;
}

int Character::getAttackType()
{
	return m_attackType;
}

int Character::getAttackSpeed()
{
	return m_attackSpeed;
}

int Character::getShieldType()
{
	return m_shieldType;
}

bool Character::getType()
{
	return m_isOrk;
}

void Character::setAttackType(int i)
{
	m_attackType = i;
}

void Character::setAttackSpeed(int i)
{
	m_attackSpeed = i;
}

void Character::setshieldType(int i)
{
	m_shieldType = i;
}

void Character::dealDamge(int i)
{
	m_health -= i;
}

void Character::addHP(int i)
{
	m_health += i;
}
