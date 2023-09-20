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
class Person {
public:
	virtual void intro() {
		cout << "����Դϴ�~" << endl;
	}
};

class Student : public Person {
	string name;

public:
	Student(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "�л��Դϴ�." << endl;
	}

	void learn() {
		cout << "���ϴ�." << endl;
	}
};

class Teacher : public Person {
	string name;

public:
	Teacher(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "�����Դϴ�." << endl;
	}

	void teach() {
		cout << "����Ĩ�ϴ�." << endl;
	}
};


int main() {
	Person* pList[3];
	string names[3];


	cout << "3���� �̸��� �Է����ּ���.(������, �л�, �л�)" << endl;
	cin >> names[0] >> names[1] >> names[2];
	Teacher T(names[0]);
	Student std1(names[1]);
	Student std2(names[2]);
	pList[0] = &T;
	pList[1] = &std1;
	pList[2] = &std2;

	for (auto p : pList) {
		p->intro();
	}

	T.teach();
	std1.learn();
	std2.learn();

	//�ٿ�ĳ����
	((Teacher*)pList[0])->teach();
	((Student*)pList[1])->learn();
	((Student*)pList[2])->learn();

}