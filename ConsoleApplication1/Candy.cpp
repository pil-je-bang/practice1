#include <iostream>
#include<string>
#include "class_Candy.h"

	Candy::Candy(std::string flavor) {
		this->price = 200;
		this->name = "����";
		this->maker = "���";
		this->flavor = flavor;
	}
	void Candy::show_info() {
		cout << flavor << "�� ����" << endl;
	}