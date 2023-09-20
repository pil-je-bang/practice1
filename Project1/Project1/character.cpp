#include <iostream>
#include<string>
#include "character.h"



Character :: Character(int hp, int level) :hp(hp), level(level) {};

void Character :: pickweapon(Weapon* weapon) {
	cout << weapon->getWeaponName() << "�� ����" << endl;
	weapons.push_back(weapon);
}
void Character::popweapon(Weapon* weapon) {
	weapons.pop_back();
}

void Character :: attack(Character* enemy) {
	for (Weapon* weapon : weapons) {
		cout << weapon->getWeaponName() << "�� ����: ";
		weapon->attack();
		enemy->hp -= weapon->getDamage();
		cout << "����� HP: " << enemy->hp << endl;
	}
}
