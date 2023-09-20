#include <iostream>
#include<string>
#include "gun.h"



Gun::Gun(int damage, int attackCount, string weaponName) : Weapon(damage, attackCount, weaponName) {}

int Gun :: attackCount() {
	return 1;
}

void Gun :: attack() {
	std::cout << "ÃÑ½î±â" << endl;
}
