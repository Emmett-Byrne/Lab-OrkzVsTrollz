#pragma once

class Regenerate : public Spell
{
public:
	Regenerate();
	virtual void doEffect(Character* c)
	{
		c->addHP(25);
	};
};

Regenerate::Regenerate()
{
	targetSelf = true;
	cost = 35;
}