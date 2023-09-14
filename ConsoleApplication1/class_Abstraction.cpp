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
	virtual void draw() = 0;
};
class Circle : public Shape {
public:
	void draw() { cout << "원\n"; }
};
class Rect : public Shape {
public:
	void draw() { cout << "사각형\n"; }
};

class Triangle : public Shape {
public:
	void draw() { cout << "삼각형\n"; }
};

int main(){
	Circle c;
	c.draw();
	Rect r;
	r.draw();
	Triangle t;
	t.draw();
}