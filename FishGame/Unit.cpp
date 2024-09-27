#include "Unit.h"

Unit::Unit(const int health, const int attack, const int level, const string& name) : health(health), attack(attack), level(level), dead(false), name(name){}

void Unit::setHealth(int helath) {health = health;}

void Unit::setAttack(int attack) {attack = attack;}

void Unit::setLevel(int level) { level = level; }

int Unit::getHealth() {return health;}

int Unit::getAttack() {return attack;}

int Unit::getLevel() {return level;}

string Unit::getName()
{
	return name;
}

void Unit::takeDamage(int damage)
{
	health -= damage;
	if (health <= 0)
	{
		dead = true;
		health = 0;
	}
}

void Unit::ShowStat(int x, int y)
{
	gotoxy(x, y);
	cout << "Lv." << level << " " << name;
	gotoxy(x, y+1);
	cout << "체력 : " << health;
	gotoxy(x, y+2);
	cout << "공격력 : " << attack;
}
