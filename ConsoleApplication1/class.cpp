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


//class Rectangle {
//public:
//	Rectangle() {};
//	Rectangle(int width, int height) : m_width(width), m_height(height) {}
//	Rectangle(const Rectangle& other) : m_width(other.m_width), m_height(other.m_height) {}
//
//	int area() { return m_width * m_height; }
//
//private:
//	int m_width;
//	int m_height;
//};
//class Rectangle {
//
//private:
//	int m_width;
//	int m_height;
//public:
//	
//	Rectangle(int width, int height) : m_width(width), m_height(height) {}
//
//	int area() { return m_width * m_height;}
//
//	//getter �Լ�
//	int getwidth() {
//		return m_width;
//	}
//	int getheight() {
//		return m_height;
//	}
//	//setter �Լ�
//	void setwidth(int width) {
//		this->m_width = width;
//	}
//	void setheight(int height) {
//		this->m_height = height;
//	}
//};
class Character1 {
private:
	string m_name;
	int m_HP{ 100 };
public:
	Character1() {};
	Character1(string name, int HP) {
		this->m_name = name;
		this->m_HP = HP;
	}
	string getName() {
		return m_name;
	}
	void setName(string name) {
		this->m_name = name;
	}
	void blood() {
		m_HP -= 20;
		cout << "20 HP�� ��������" << "\n";
		cout << "���� HP : " << m_HP << "\n";
		if (m_HP == 0) {
			cout << "óġ"<<"\n";
		}
	}
};
class Character {
private:
	string m_name;
	int m_level{ 0 };
	int m_item_num{ 0 };
	int m_attack{ 0 };
public:
	Character() {};
	Character(string name, int level, int item_num, int attack) {
		this->m_name = name;
		this->m_level = level;
		this->m_item_num = item_num;
		this->m_attack = attack;
	}
	string getName() {
		return m_name;
	}
	//int getlevel() {
	//	return m_level;
	//}
	//int getitem_num() {
	//	return m_item_num;
	//}
	void setName(string name) {
		this-> m_name = name;
	}
	//void setlevel(int level) {
	//	this -> m_level = level;
	//}
	//void setitem_num(int level) {
	//	this->m_item_num = level;
	//}
	void newName() {
		string b;
		cout << "�� �̸��� �Է����ּ���: ";
		cin >> b;
		cout << "�̸��� ����Ǿ����ϴ�.\n";
		cout << "New name : " << b << endl;
		m_name = b;
	}

	void levelup() {
		cout << "level up!" << "\n";
		m_level += 1;
		cout << "���� ���� : " << m_level << "\n";
	}

	void itemin() {
		cout << "�������� ������ϴ�." << "\n";
		m_item_num += 1;
		cout << "���� ������ ����" << m_item_num<< "\n";
	}
	void itemdec() {
		cout << "�������� �Ҿ����ϴ�." << "\n";
		m_item_num -= 1;
		cout << "���� ������ ����" << m_item_num << "\n";
	}
	void attack() {
		m_attack += 1;
		cout << "���� Ƚ��" << m_attack<< "\n";
	}
	void final() {
		cout << "�̸� : " << m_name << "\n";
		cout << "���� : " << m_level<< "\n";
		cout << "���� ������ ����" << m_item_num<<"\n";
		cout << "���� Ƚ�� : " << m_attack << "\n";
	}

};
int main(){
//����ü �ǽ�
//struct dimension {
//	float width = 0;
//	float height = 0;
//	};
//
//dimension D;
//
//cout << "����, ���� ���̸� �Է��ϼ���.";
//cin >> D.width;
//cin >> D.height;
//cout << "���̴� : " << D.width * D.height;

//Ŭ���� �ǽ�
//cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���. (����� ����)";
//int a = 0;
//int b = 0;
//cin >> a;
//cin >> b;
//Rectangle r( a,b );
//cout << "���̴� : " << r.area()<<"\n";
//Rectangle r1 = r;
//cout << "���� ������ ���̴� : " << r1.area()<<"\n";
//Rectangle r2 = r; //operator�̴�.
//cout << "�⺻ ������ ���̴� : " << r2.area();

//getter, setter �Լ�
//Rectangle rect(1, 2);
//cout << "���̴� : " << rect.area() << "\n";
//cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���. (����� ����).";
//int a, b = 0;
//cin >> a;
//cin >> b;
//rect.setwidth(a);
//rect.setheight(b);
//cout <<"���̴� " << rect.area()<<"\n";
//cout << "���� ���� ���δ� " << rect.getwidth()<<" ";
//cout << rect.getheight();

Character c;
Character1 c1;
cout << "�̸��� �Է��ϼ���: ";
string a = "";
cin >> a;
c.setName(a);
cout << c.getName()<< " ĳ���Ͱ� �����Ǿ����ϴ�."<<"\n";
cout << "���� �̸��� �Է��ϼ���: ";
string d = "";
cin >> d;
c1.setName(d);
cout << c1.getName() << " ���Ͱ� �����Ǿ����ϴ�." << "\n";

while (1) {
	cout << "� ������ �����Ͻðڽ��ϱ�?(0: ����) ";
	int b;
	cin >> b;
	if (b == 0) {
		break;
	}
	else if (b == 1) {
		c.newName();
	}
	else if (b == 2) {
		c.levelup();
	}
	else if (b == 3) {
		c.itemin();
	}
	else if (b == 4) {
		c.itemdec();
	}
	else if (b == 5) {
		c.final();
	}
	else if (b == 6) {
		c.attack();
		c1.blood();
	}
	
}
}