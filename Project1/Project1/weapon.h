#pragma once
#include<string>
using namespace std;

class Weapon {
protected:
	int damage;
	int attackCount;
	std::string weaponName;

public:
	Weapon();
	Weapon(int damage, int attackCount, string weaponName); /*: damage(damage), attackCount(attackCount), weaponName(weaponName) {};*/

	int getDamage();

	string getWeaponName();

	virtual void attack();
};