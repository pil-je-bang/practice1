#include <iostream>
#include <ctime>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	cout << "���ڴ� 1 ~ 25������ ���ڸ� �Է��� �� �ֽ��ϴ�.\n";
	int b = 0;
	int count = 0;
	
	std::vector <int> v(6);
	for (int i = 1; i < 7; i++) {
		int c = 0;
		cout << i << "��° ��ȣ�� �Է��ϼ��� : ";
		cin >> b;

		for (int j = 0; j < 6; j++) {
			if (v[j] == b) {
				cout << "�̹� �Էµ� �����Դϴ�.\n";
				c++;
				i--;
			}
		}
		if (b>=26) {
			cout << "�߸��� �����Դϴ�. �ٽ� �Է����ּ���."<<"\n";
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
	cout << "��÷��ȣ ����\n";
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
		cout << "7���Դϴ�.";
	}
	else if (count == 1) {
		cout << "6���Դϴ�.";
	}
	else if (count == 2) {
		cout << "5���Դϴ�.";
	}
	else if (count == 3) {
		cout << "4���Դϴ�.";
	}
	else if (count ==4 ) {
		cout << "3���Դϴ�.";
	}
	else if (count == 5) {
		cout << "2���Դϴ�.";
	}
	else if (count == 6) {
		cout << "1���Դϴ�.";
	}
}