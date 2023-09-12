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


class Shape {
protected:
	int m_line_num{0};
	int m_width{0};
public:
	Shape() {};
	Shape(int linenum, int width):m_line_num(linenum),m_width(width) {};
	//Shape(int line_num, int width) {
	//	this->m_line_num = line_num;
	//	this->m_width = width;
	//}
	void printInfo() {
		cout << "변의 개수 : " << m_line_num << "\n";
		cout << "밑변의 길이 : " << m_width << "\n";
	}
};

class Rectangle : public Shape{
private:
	int verticallength;
public:

	Rectangle(int count, int base, int vertical):Shape(m_line_num,m_width),verticallength(vertical) {
		m_line_num = count;
		m_width = base;
		verticallength = vertical;
	}
	void printInfo() {
		cout << "변의 개수 : " << m_line_num << "\n";
		cout << "밑변의 길이 : " << m_width << "\n";
	}
	int area() { 
		return m_width * verticallength;
	}

};

class Triangle : public Shape {
private:
	int height;
public:

	Triangle(int count, int base, int vertical) :Shape(m_line_num, m_width), height(vertical) {
		m_line_num = count;
		m_width = base;
		height = vertical;
	}
	void printInfo() {
		cout << "변의 개수 : " << m_line_num << "\n";
		cout << "밑변의 길이 : " << m_width << "\n";
	}
	int area() { 
		return (m_width * height) / 2; 
	}
};

int main() {
	Shape S;
	
	Rectangle  R(4,5,10);
	/*R.printInfo();*/
	cout << "사각형의 넓이 : " << R.area() << "\n";
	
	Triangle T(3,5,10);
	/*T.printInfo();*/
	cout << "삼각형의 넓이 : " << T.area();
}