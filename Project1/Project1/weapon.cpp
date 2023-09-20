#include <iostream>
#include<string>
#include "weapon.h"

Weapon::Weapon(int damage, int attackCount, string weaponName) : damage(damage), attackCount(attackCount), weaponName(weaponName) {}

int Weapon :: getDamage() {
	return damage;
}

string Weapon:: getWeaponName() {
	return weaponName;
}

void Weapon :: attack() {
	cout << "АјАн" << endl;
};