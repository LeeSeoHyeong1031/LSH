#pragma once
#include"Unit.h"
class Fish : public Unit
{
private:
	int exp; //°æÇèÄ¡
public:
	Fish(const string& name);
public:
	void takeDamage(int damage)override;
	void SetUP(int level, int health, int damage, int exp);
};

