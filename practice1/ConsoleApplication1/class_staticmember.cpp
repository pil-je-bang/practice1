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
using std::getline;
using std::string;


class Snack {
protected:
	int price;
	string name;
	string maker;
	static int count;
public:
	Snack() {count++;}
	virtual ~Snack() {count--;}
	static int get_count() {
		return count;
	}
	string get_name() {
		return name;
	}
	virtual void show_info() {
		cout << "과자입니다~" << endl;
	}
};

int Snack::count = 0;

class Candy : public Snack {
	
public:
	string flavor;
	Candy(string flavor) {
		this->price = 200;
		this->name = "사탕";
		this->maker = "농심";
		this->flavor = flavor;
	}
	void show_info() {
		cout << flavor << "맛 사탕" << endl;
	}
};

class Chocolate : public Snack {
public:
	string shape;
	Chocolate(string shape) {
		this->price = 1000;
		this->name = "초콜릿";
		this->maker = "롯데";
		this->shape = shape;
	}


	void show_info() {
		cout << shape << "모양 초콜릿" << endl;
	}
};

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




