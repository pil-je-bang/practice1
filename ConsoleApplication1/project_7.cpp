#include <iostream>
#include <vector>
#include <iomanip>
#include <list>
#include <string>
#include <sstream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

class Weapon {
protected:
	int damage;
	int attackCount;
	string weaponName;

public:
	Weapon() {};
	Weapon(int damage, int attackCount, string weaponName): damage(damage), attackCount(attackCount), weaponName(weaponName) {}

	int getDamage() {
		return damage;
	}

	string getWeaponName(){
		return weaponName;
	}

	virtual void attack() {
		cout << "공격" << endl;
	};
};
class Sword : public Weapon {
public:
	Sword() {};
	Sword(int damage, int attackCount, string weaponName) : Weapon(damage, attackCount, weaponName) {}
	
	int attackCount() {
		return 3;
	}
	void attack(){
		std::cout << "찌르기" << endl;
	}
};

class Gun : public Weapon {
public:
	Gun() {};
	Gun(int damage, int attackCount, string weaponName) : Weapon(damage, attackCount, weaponName) {}

	int attackCount() {
		return 1;
	}

	void attack(){
		std::cout << "총쏘기" << endl;
	}
};


class Character {
public:
	int hp;
	int level;
	vector<Weapon*> weapons;
	Character() {};
	Character(int hp, int level) :hp(hp), level(level) {};

	void pickweapon(Weapon* weapon) {
		weapons.push_back(weapon);
	}
	void popweapon(Weapon* weapon) {
		weapons.pop_back();
	}

	void attack(Character* enemy) {
	for (Weapon* weapon : weapons) {
			cout << weapon->getWeaponName() << "로 공격: ";
			weapon->attack();
			enemy->hp -= weapon->getDamage();
			cout << "상대의 HP: " << enemy->hp << endl;
		}
	}
};

int main() {
	Character player(100, 1);
	Character enemy(100, 1);

	Sword sword(5,3,"sword");
	Gun gun(10,1,"gun");

	while (1) {
		cout << "무기를 어떤 것을 선택하실건가요?(1번 : 칼 , 2번 : 총)";
		int a;
		cin >> a;
		if (a == 1) {
			player.pickweapon(&sword);
			cout << "칼을 선택하셨습니다.\n";
		}
		else if (a == 2) {
			player.pickweapon(&gun);
			cout << "총을 선택하셨습니다.\n";
		}

		if (a == 1) {
			for (int i = 1; i <= sword.attackCount(); i++) {
				player.attack(&enemy);
			}
			player.popweapon(&sword);
		}

		if (a == 2) {
			for (int i = 1; i <= gun.attackCount(); i++) {
				player.attack(&enemy);
			}
			player.popweapon(&gun);
		}

		if (enemy.hp <= 0) {
			cout << "적을 물리쳤습니다!" << endl;
			
		}
	}

	return 0;
}
