#include <iostream>

int main() {
	std::cout << "1부터 n까지의 합 구하기\n";
	int n;
	std::cin >> n;
	std::cout << "숫자(양의 정수)를 입력하세요 :" << n << "\n";
	
	
	int a = 1;
	int b = 1;
	int sum = 0;
	
	for (a = 1; a <= n; a++) {
		sum += a;
	}

	std::cout << "1부터" << n << "까지의 합은 :" << sum;
}