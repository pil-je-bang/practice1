#pragma once
#include"weapon.h"

class Sword : public Weapon {
public:
	Sword();
	Sword(int damage, int attackCount, string weaponName); /*: Weapon(damage, attackCount, weaponName) {}*/

	int attackCount();
	void attack();
};