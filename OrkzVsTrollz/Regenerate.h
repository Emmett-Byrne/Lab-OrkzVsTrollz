#pragma once
#include "Spell.h"

class Regenerate : public Spell
{
public:
	Regenerate();
};

Regenerate::Regenerate()
{
	m_targetSelf = true;
	m_cost = 35;
}