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
		cout << "과자 바구니에 추가할 간식을 고르시오.(1: 사탕, 2: 초콜릿, 0:종료) : ";
		int a;
		cin >> a;

		if (a == 1) {
			cout << "맛을 입력하세요. : ";
			string taste;
			cin >> taste;
			Candy candy(taste);
			snackBasket.push_back(new Candy(taste));
			cout << "\n";
		}
		else if (a == 2) {
			cout << "모양을 입력하세요. : ";
			string k;
			cin >> k;
			Chocolate chocolate(k);
			snackBasket.push_back(new Chocolate(k));
			cout << "\n";
		}
		else if (a == 0) {
			cout << "과자 바구니에 추가할 간식의 개수는 " << Snack::get_count() << "개 입니다." << endl << endl;
			cout << "과자 바구니에 담긴 간식 확인하기!" << endl;

			for (Snack* snack : snackBasket) {
				snack->show_info();
			}
			for (Snack* snack : snackBasket) {
				delete snack;
			}
			break;


		}
		else {
			cout << "0~2 사이의 숫자를 입력하세요.";
			cout << "\n";
		}

	}

}
