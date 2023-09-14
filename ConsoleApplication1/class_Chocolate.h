#pragma once
#include"class_snack.h"

class Chocolate : public Snack {
	//private:
	//	string shape;

public:
	Chocolate();
	std::string shape;
	Chocolate(std::string shape);
	void show_info();
};