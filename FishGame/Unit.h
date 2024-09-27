#pragma once
#include "util.h"

class Unit
{
protected:
	int level;
	int health;
	int attack;
	bool dead;
	string name;
public:
	Unit(const int health, const int attack, const int level, const string& name);
public:
	void setHealth(int helath);
	void setAttack(int attack);
	void setLevel(int level);

	int getHealth();
	int getAttack();
	int getLevel();
	string getName();
	virtual void takeDamage(int damage);
	void ShowStat(int x, int y);
};

