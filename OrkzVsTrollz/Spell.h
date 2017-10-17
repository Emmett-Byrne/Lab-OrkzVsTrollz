#pragma once

class Character;

class Spell {
public:
	virtual bool doesTargetSelf();
	virtual void doEffect(Character* c) = 0;

	bool m_targetSelf;
	int m_cost;
};

#include "Character.h"
