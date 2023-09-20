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
		cout << "�����Դϴ�~" << endl;
	}
};

int Snack::count = 0;

class Candy : public Snack {
	
public:
	string flavor;
	Candy(string flavor) {
		this->price = 200;
		this->name = "����";
		this->maker = "���";
		this->flavor = flavor;
	}
	void show_info() {
		cout << flavor << "�� ����" << endl;
	}
};

class Chocolate : public Snack {
public:
	string shape;
	Chocolate(string shape) {
		this->price = 1000;
		this->name = "���ݸ�";
		this->maker = "�Ե�";
		this->shape = shape;
	}


	void show_info() {
		cout << shape << "��� ���ݸ�" << endl;
	}
};

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




