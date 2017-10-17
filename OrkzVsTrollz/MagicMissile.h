#pragma once
#include "Spell.h"

class MagicMissile : public Spell
{
public:
	MagicMissile();
};

MagicMissile::MagicMissile()
{
	m_targetSelf = false;
	m_cost = 35;
}