#include "Player.h"

Player::Player(const string& name) : Unit(100,10,1,name){}

void Player::takeDamage(int damage)
{
	Unit::takeDamage(damage);
	if (health <= 0)
	{
		cout << "����� �׾����ϴ�." << endl;
	}
}
