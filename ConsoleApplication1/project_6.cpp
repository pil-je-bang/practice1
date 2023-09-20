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
		cout << "결과 : " << endl;
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
		else { cout << "num2는 0이 되면 안됩니다.";
		}
	}
};

int main() {
	while (1) {
		cout << "숫자를 입력하세요: ";
		float num1, num2;
		cin >> num1;

		cout << "연산자를 입력하세요 (+, -, *, /): ";
		string oper;
		cin >> oper;

		cout << "숫자를 입력하세요: ";
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
			cout << "제대로 된 연산자를 입력하시오." << endl;
			continue;
		}

		cout << "-----------------------------------------\n";
		cout << "결과 : ";
		calc->calculate();
		cout << "\n";
		cout << "-----------------------------------------\n";
		cout << "\n";
		delete calc;

		cout << "연산을 계속 진행하시겠습니까? (Y: 계속, AC: 초기화, EXIT: 종료): ";

		string how;
		cin >> how;

		if (how == "Y") {
			cout << "연산자를 입력하세요 (+, -, *, /): ";
			cin >> oper;
			cout << "숫자를 입력하세요: ";
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
				cout << "제대로 된 연산자를 입력하시오." << endl;
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
			cout << "종료";
			break;
		}
		else {
			cout << "정확한 알파벳을 입력하세요."<<endl;
		}
	}

	return 0;
}