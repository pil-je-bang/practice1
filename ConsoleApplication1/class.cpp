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
//	//getter 함수
//	int getwidth() {
//		return m_width;
//	}
//	int getheight() {
//		return m_height;
//	}
//	//setter 함수
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
		cout << "20 HP가 떨어진다" << "\n";
		cout << "현재 HP : " << m_HP << "\n";
		if (m_HP == 0) {
			cout << "처치"<<"\n";
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
		cout << "새 이름을 입력해주세요: ";
		cin >> b;
		cout << "이름이 변경되었습니다.\n";
		cout << "New name : " << b << endl;
		m_name = b;
	}

	void levelup() {
		cout << "level up!" << "\n";
		m_level += 1;
		cout << "현재 레벨 : " << m_level << "\n";
	}

	void itemin() {
		cout << "아이템을 얻었습니다." << "\n";
		m_item_num += 1;
		cout << "현재 아이템 개수" << m_item_num<< "\n";
	}
	void itemdec() {
		cout << "아이템을 잃었습니다." << "\n";
		m_item_num -= 1;
		cout << "현재 아이템 개수" << m_item_num << "\n";
	}
	void attack() {
		m_attack += 1;
		cout << "공격 횟수" << m_attack<< "\n";
	}
	void final() {
		cout << "이름 : " << m_name << "\n";
		cout << "레벨 : " << m_level<< "\n";
		cout << "현재 아이템 개수" << m_item_num<<"\n";
		cout << "공격 횟수 : " << m_attack << "\n";
	}

};
int main(){
//구조체 실습
//struct dimension {
//	float width = 0;
//	float height = 0;
//	};
//
//dimension D;
//
//cout << "가로, 세로 길이를 입력하세요.";
//cin >> D.width;
//cin >> D.height;
//cout << "넓이는 : " << D.width * D.height;

//클래스 실습
//cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분)";
//int a = 0;
//int b = 0;
//cin >> a;
//cin >> b;
//Rectangle r( a,b );
//cout << "넓이는 : " << r.area()<<"\n";
//Rectangle r1 = r;
//cout << "복사 생성자 넓이는 : " << r1.area()<<"\n";
//Rectangle r2 = r; //operator이다.
//cout << "기본 생성자 넓이는 : " << r2.area();

//getter, setter 함수
//Rectangle rect(1, 2);
//cout << "넓이는 : " << rect.area() << "\n";
//cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분).";
//int a, b = 0;
//cin >> a;
//cin >> b;
//rect.setwidth(a);
//rect.setheight(b);
//cout <<"넓이는 " << rect.area()<<"\n";
//cout << "가로 길이 세로는 " << rect.getwidth()<<" ";
//cout << rect.getheight();

Character c;
Character1 c1;
cout << "이름을 입력하세요: ";
string a = "";
cin >> a;
c.setName(a);
cout << c.getName()<< " 캐릭터가 생성되었습니다."<<"\n";
cout << "몬스터 이름을 입력하세요: ";
string d = "";
cin >> d;
c1.setName(d);
cout << c1.getName() << " 몬스터가 생성되었습니다." << "\n";

while (1) {
	cout << "어떤 동작을 실행하시겠습니까?(0: 종료) ";
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