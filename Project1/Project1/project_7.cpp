#include <iostream>
#include <vector>
#include <string>
#include "weapon.h"
#include "gun.h"
#include "character.h"
#include "sword.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

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
		}
		else if (a == 2) {
			player.pickweapon(&gun);
		}

		if (a == 1) {
			for (int i = 1; i <= sword.attackCount(); i++) {
				player.attack(&enemy);
				if (enemy.hp <= 0) {
					cout << "적을 물리쳤습니다!" << endl;
					break;
				}
			}
			player.popweapon(&sword);
		}

		if (a == 2) {
			for (int i = 1; i <= gun.attackCount(); i++) {
				player.attack(&enemy);
				if (enemy.hp <= 0) {
					cout << "적을 물리쳤습니다!" << endl;
					break;
				}
			}
			player.popweapon(&gun);
		}
		if (enemy.hp <= 0) {
			break;
		}
	}
	return 0;
}
