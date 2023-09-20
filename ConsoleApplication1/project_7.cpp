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
		cout << "����" << endl;
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
		std::cout << "���" << endl;
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
		std::cout << "�ѽ��" << endl;
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
			cout << weapon->getWeaponName() << "�� ����: ";
			weapon->attack();
			enemy->hp -= weapon->getDamage();
			cout << "����� HP: " << enemy->hp << endl;
		}
	}
};

int main() {
	Character player(100, 1);
	Character enemy(100, 1);

	Sword sword(5,3,"sword");
	Gun gun(10,1,"gun");

	while (1) {
		cout << "���⸦ � ���� �����Ͻǰǰ���?(1�� : Į , 2�� : ��)";
		int a;
		cin >> a;
		if (a == 1) {
			player.pickweapon(&sword);
			cout << "Į�� �����ϼ̽��ϴ�.\n";
		}
		else if (a == 2) {
			player.pickweapon(&gun);
			cout << "���� �����ϼ̽��ϴ�.\n";
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
			cout << "���� �����ƽ��ϴ�!" << endl;
			
		}
	}

	return 0;
}
