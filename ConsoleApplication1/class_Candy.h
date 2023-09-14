#pragma once

#include"class_snack.h"

class Candy : public Snack {
	//protected:
	//	string flavor;
public:
	Candy();
	std::string flavor;
	Candy(std::string flavor);
	void show_info();
};