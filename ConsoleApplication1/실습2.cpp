#include <iostream>

int main() {
	std::cout << "1���� n������ �� ���ϱ�\n";
	int n;
	std::cin >> n;
	std::cout << "����(���� ����)�� �Է��ϼ��� :" << n << "\n";
	
	
	int a = 1;
	int b = 1;
	int sum = 0;
	
	for (a = 1; a <= n; a++) {
		sum += a;
	}

	std::cout << "1����" << n << "������ ���� :" << sum;
}