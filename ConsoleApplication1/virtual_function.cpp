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
		cout << "사람입니다~" << endl;
	}
};

class Student : public Person {
	string name;

public:
	Student(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "학생입니다." << endl;
	}

	void learn() {
		cout << "배웁니다." << endl;
	}
};

class Teacher : public Person {
	string name;

public:
	Teacher(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "선생입니다." << endl;
	}

	void teach() {
		cout << "가르칩니다." << endl;
	}
};


int main() {
	Person* pList[3];
	string names[3];


	cout << "3명의 이름을 입력해주세요.(선생님, 학생, 학생)" << endl;
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

	//다운캐스팅
	((Teacher*)pList[0])->teach();
	((Student*)pList[1])->learn();
	((Student*)pList[2])->learn();

}