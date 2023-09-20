#pragma once
#include"weapon.h"

class Gun : public Weapon {
public:
	Gun();
	Gun(int damage, int attackCount, string weaponName); /*: Weapon(damage, attackCount, weaponName) {}*/

	int attackCount();

	void attack();
};
