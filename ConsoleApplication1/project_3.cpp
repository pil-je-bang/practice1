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
	std::vector <int> v(6);
	for (int i = 1; i < 7; i++){
		cout << i << "��° ��ȣ�� �Է��ϼ��� : ";
		cin >> b;
		v.push_back(b);
		if (v[i] == b) {
			cout << "�̹� �Էµ� �����Դϴ�.\n";
			cout << i << "��° ��ȣ�� �Է��ϼ��� : ";
		}
	}
}