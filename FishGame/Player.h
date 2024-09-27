#pragma once
#include"Unit.h"
class Player : public Unit
{
private:

public:
	Player(const string& name);
public:
	void takeDamage(int damage)override;
};

