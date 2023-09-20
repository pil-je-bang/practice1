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
public:
	Snack() { };
	string getName() {
		return name;
	}
	virtual void showInfo() {
		cout << name << " 과자입니다~" << endl;
	}
};

class Candy : public Snack{
//protected:
//	string flavor;
public:
	Candy() {};
	string flavor;
	Candy(string name, string flavor) {
		this->name = name;
		this->flavor = flavor;

	}
	void showInfo(){
		cout << name << "는 사탕입니다.\n";
	}
};
class Chocolate : public Snack {
//private:
//	string shape;

public:
	Chocolate() {};
	string shape;
	Chocolate(string name, string shape) {
		this->name = name;
		this->shape = shape;

	}
	void showInfo() {
		cout << name << "는 초콜릿입니다.\n";
	}
};

int main() {
	Candy c1("자두", "자두맛");
	Candy c2("청포도", "청포도맛");
	Chocolate Choco1("가나", "사각형");
	Chocolate Choco2("크런키", "삼각형");
	
	Snack *snackBasket[] = {&c1,&c2,&Choco1,&Choco2};

	
	for (Snack *snack : snackBasket) {
		cout << snack->getName() << endl;
		snack->showInfo();
	}

	cout << ((Candy*)snackBasket[0])-> flavor << endl;
	cout << ((Candy*)snackBasket[1])->flavor << endl;
	cout << ((Chocolate*)snackBasket[2])->shape << endl;
	cout << ((Chocolate*)snackBasket[3])->shape << endl;

//	for (Snack* snack : snackBasket) {
//		Chocolate* pch = dynamic_cast<Chocolate*>(snack);
//		if (pch) {
//			cout << pch->shape << endl;
//		}
//		else {
//			Candy* pc = dynamic_cast<Candy*>(snack);
//			if (pc) {
//				cout << pc->flavor << endl;
//			}
//
//		}
//	}
}