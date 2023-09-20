#include <iostream>
#include<string>
#include "sword.h"


Sword :: Sword(int damage, int attackCount, string weaponName) : Weapon(damage, attackCount, weaponName) {}

int Sword::attackCount() {
	return 3;
}
void Sword::attack() {
	std::cout << "Âî¸£±â" << endl;
};
