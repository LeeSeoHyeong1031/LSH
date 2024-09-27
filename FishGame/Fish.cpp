#include "Fish.h"

Fish::Fish(const string& name) : Unit(20,5,1,name), exp(0){}

void Fish::takeDamage(int damage)
{
	Unit::takeDamage(damage);
	if (health <= 0)
	{
		cout << name << "¸¦ ³¬¾Ò´Ù!!" << endl;
	}
}

void Fish::SetUP(int level, int health, int damage, int exp)
{
	this->level = level;
	this->health = health;
	this->attack = damage;
	this->exp = exp;
}
