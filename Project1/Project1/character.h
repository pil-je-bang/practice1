#pragma once
#include <vector>
#include<iostream>
#include "weapon.h"
using namespace std;


class Character {
public:
	int hp;
	int level;
	vector<Weapon*> weapons;
	Character();
	Character(int hp, int level) /*:hp(hp), level(level) {}*/;

	void pickweapon(Weapon* weapon);
	void popweapon(Weapon* weapon);

	void attack(Character* enemy);
};
