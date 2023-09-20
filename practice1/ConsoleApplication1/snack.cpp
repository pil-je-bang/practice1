#include <iostream>
#include<string>
#include "class_snack.h"

int Snack::count = 0;
//std::string Snack::getLastAdded = "";

Snack::Snack() {
	count++;
}
Snack:: ~Snack() { 
	count--;
}
int Snack::get_count() {
	return count;
}
std::string Snack::get_name() {
	return name;
}
void Snack::show_info() {
	std::cout << "과자입니다~" << std::endl;
}
