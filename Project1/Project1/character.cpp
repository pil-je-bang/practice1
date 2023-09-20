#include <iostream>
#include<string>
#include "character.h"



Character :: Character(int hp, int level) :hp(hp), level(level) {};

void Character :: pickweapon(Weapon* weapon) {
	cout << weapon->getWeaponName() << "을 선택" << endl;
	weapons.push_back(weapon);
}
void Character::popweapon(Weapon* weapon) {
	weapons.pop_back();
}

void Character :: attack(Character* enemy) {
	for (Weapon* weapon : weapons) {
		cout << weapon->getWeaponName() << "로 공격: ";
		weapon->attack();
		enemy->hp -= weapon->getDamage();
		cout << "상대의 HP: " << enemy->hp << endl;
	}
}
