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

class Calculator {
protected:
	float num1;
	float num2;
public:
	Calculator() {};
	Calculator(float num1, float num2) :num1(num1), num2(num2) {};
	virtual void calculate() {
		cout << "-----------------------------------------\n";
		cout << "��� : " << endl;
		cout << "-----------------------------------------\n";
	}

};
class Plus : public Calculator {
private:

public:

	Plus() {};
	Plus(float num1, float num2) :Calculator(num1,num2) {
		num1 = num1;
		num2 = num2;
	}

	void calculate() {
		cout << num1 + num2;
	}
};
class Minus : public Calculator {
private:

public:
	
	Minus(float num1, float num2) :Calculator(num1, num2) {
		num1 = num1;
		num2 = num2;
	}
	void calculate() {
		cout << num1 - num2;
	}
};
class Multiply : public Calculator {
private:

public:
	Multiply(float num1, float num2) :Calculator(num1, num2) {
		num1 = num1;
		num2 = num2;
	}
	void calculate() {
		cout << num1 * num2;
	}
};
class Divide : public Calculator {
private:
	
public:
	Divide(float num1, float num2) :Calculator(num1, num2) {
		num1 = num1;
		num2 = num2;
	}
	void calculate() {
		if (num2 != 0) {
				cout << num1 / num2;
		}
		else { cout << "num2�� 0�� �Ǹ� �ȵ˴ϴ�.";
		}
	}
};

int main() {
	while (1) {
		cout << "���ڸ� �Է��ϼ���: ";
		float num1, num2;
		cin >> num1;

		cout << "�����ڸ� �Է��ϼ��� (+, -, *, /): ";
		string oper;
		cin >> oper;

		cout << "���ڸ� �Է��ϼ���: ";
		cin >> num2;

		Calculator* calc;

		if (oper == "+") {
			calc = new Plus(num1, num2);

		}
		else if (oper == "-") {
			calc = new Minus(num1, num2);

		}
		else if (oper == "*") {
			calc = new Multiply(num1, num2);
		}
		else if (oper == "/") {
			calc = new Divide(num1, num2);
		}
		else {
			cout << "����� �� �����ڸ� �Է��Ͻÿ�." << endl;
			continue;
		}

		cout << "-----------------------------------------\n";
		cout << "��� : ";
		calc->calculate();
		cout << "\n";
		cout << "-----------------------------------------\n";
		cout << "\n";
		delete calc;

		cout << "������ ��� �����Ͻðڽ��ϱ�? (Y: ���, AC: �ʱ�ȭ, EXIT: ����): ";

		string how;
		cin >> how;

		if (how == "Y") {
			cout << "�����ڸ� �Է��ϼ��� (+, -, *, /): ";
			cin >> oper;
			cout << "���ڸ� �Է��ϼ���: ";
			cin >> num2;
			
			Calculator* calc;

			if (oper == "+") {
				calc = new Plus(num1, num2);
			}
			else if (oper == "-") {
				calc = new Minus(num1, num2);
			}
			else if (oper == "*") {
				calc = new Multiply(num1, num2);
			}
			else if (oper == "/") {
				calc = new Divide(num1, num2);
			}
			else {
				cout << "����� �� �����ڸ� �Է��Ͻÿ�." << endl;
				continue;
			}
			calc->calculate();
			cout << "\n";
			delete calc;
		}
		else if (how == "AC") {
			continue;
		}
		else if (how == "EXIT") {
			cout << "����";
			break;
		}
		else {
			cout << "��Ȯ�� ���ĺ��� �Է��ϼ���."<<endl;
		}
	}

	return 0;
}