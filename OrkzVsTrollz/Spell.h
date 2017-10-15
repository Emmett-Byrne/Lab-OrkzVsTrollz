#pragma once

class Spell {
public:
	virtual bool doesTargetSelf();
	virtual void doEffect(Character* c) = 0;

	bool targetSelf;
	int cost;
};


bool Spell::doesTargetSelf()
{
	return targetSelf;
}
