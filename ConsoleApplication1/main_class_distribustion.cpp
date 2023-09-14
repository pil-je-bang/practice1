#include <iostream>
#include <vector>
#include "class_Candy.h"
#include "class_snack.h"
#include "class_Chocolate.h"

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;


int main() {
	std::vector<Snack*> snackBasket;
	while (1) {
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�.(1: ����, 2: ���ݸ�, 0:����) : ";
		int a;
		cin >> a;

		if (a == 1) {
			cout << "���� �Է��ϼ���. : ";
			string taste;
			cin >> taste;
			Candy candy(taste);
			snackBasket.push_back(new Candy(taste));
			cout << "\n";
		}
		else if (a == 2) {
			cout << "����� �Է��ϼ���. : ";
			string k;
			cin >> k;
			Chocolate chocolate(k);
			snackBasket.push_back(new Chocolate(k));
			cout << "\n";
		}
		else if (a == 0) {
			cout << "���� �ٱ��Ͽ� �߰��� ������ ������ " << Snack::get_count() << "�� �Դϴ�." << endl << endl;
			cout << "���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ�!" << endl;

			for (Snack* snack : snackBasket) {
				snack->show_info();
			}
			for (Snack* snack : snackBasket) {
				delete snack;
			}
			break;


		}
		else {
			cout << "0~2 ������ ���ڸ� �Է��ϼ���.";
			cout << "\n";
		}

	}

}
