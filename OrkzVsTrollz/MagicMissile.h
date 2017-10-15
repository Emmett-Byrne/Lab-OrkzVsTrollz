#pragma once

class MagicMissile : public Spell
{
public:
	MagicMissile();
	virtual void doEffect(Character* c)
	{
		c->addHP(-40);
	};
};

MagicMissile::MagicMissile()
{
	targetSelf = false;
	cost = 35;
}