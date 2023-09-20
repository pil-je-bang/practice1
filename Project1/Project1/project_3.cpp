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
	int count = 0;
	
	std::vector <int> v(6);
	for (int i = 1; i < 7; i++) {
		int c = 0;
		cout << i << "번째 번호를 입력하세요 : ";
		cin >> b;

		for (int j = 0; j < 6; j++) {
			if (v[j] == b) {
				cout << "이미 입력된 숫자입니다.\n";
				c++;
				i--;
			}
		}
		if (b>=26) {
			cout << "잘못된 숫자입니다. 다시 입력해주세요."<<"\n";
			c++;
			i--;

		}
		if (c == 0) {
			v.insert(v.begin() + i, b);
		}
	}
	std::srand(time(NULL));

	int arr[6];
	int check[26] = { 0, };
	int num;
	for (int i = 0; i < 6; i++) {
		do {
			num = std::rand() % 25 + 1;
		} while (check[num] == 1);
		arr[i] = num;
		check[num] = 1;
	}
	cout << "당첨번호 공개\n";
	for (auto n : arr) {
		cout << n << " ";
	}
	cout << "\n";

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (arr[i] == v[j]) {
				count++;
			}
		}
	}
	if (count == 0) {
		cout << "7등입니다.";
	}
	else if (count == 1) {
		cout << "6등입니다.";
	}
	else if (count == 2) {
		cout << "5등입니다.";
	}
	else if (count == 3) {
		cout << "4등입니다.";
	}
	else if (count ==4 ) {
		cout << "3등입니다.";
	}
	else if (count == 5) {
		cout << "2등입니다.";
	}
	else if (count == 6) {
		cout << "1등입니다.";
	}
}