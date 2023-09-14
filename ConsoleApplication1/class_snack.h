#pragma once
#include <string>
using namespace std;

class Snack {
protected:
	int price;
	std::string name;
	std::string maker;
	static int count;
	static std::string lastAdded;
public:
	Snack();
	virtual ~Snack();

	static int get_count();

	std::string get_name();
	virtual void show_info();

};