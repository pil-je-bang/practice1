#include <iostream>
#include "class_Chocolate.h"


	Chocolate::Chocolate(std::string shape) {
		this->price = 1000;
		this->name = "���ݸ�";
		this->maker = "�Ե�";
		this->shape = shape;
	}


	void Chocolate::show_info() {
		cout << shape << "��� ���ݸ�" << endl;
	}
