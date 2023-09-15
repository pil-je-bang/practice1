#include <iostream>
#include <ctime>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	cout << "숫자는 1 ~ 25까지의 숫자만 입력할 수 있습니다.\n";
	int b = 0;
	std::vector <int> v(6);
	for (int i = 1; i < 7; i++){
		cout << i << "번째 번호를 입력하세요 : ";
		cin >> b;
		v.push_back(b);
		if (v[i] == b) {
			cout << "이미 입력된 숫자입니다.\n";
			cout << i << "번째 번호를 입력하세요 : ";
		}
	}
}