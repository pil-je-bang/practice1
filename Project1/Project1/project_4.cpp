#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	int a = 0;
	cout << "마방진의 행 혹은 열의 수를 자연수로 입력해주세요.";
	while (1) {
		cin >> a;
		if (a % 2 == 1) { break; }
		else { cout << "홀수를 입력하세요: "; }
	}
	int row = 0;
	int col = a / 2;
	int **arr = new int*[a];
	for (int i = 0; i < a; i++) {
		arr[i] = new int[a];
	}
	for (int i = 1; i <= a * a; i++) {
		arr[row][col] = i;
		if (i % a == 0) {
			row++;
		}
		else {
			row--;
			col++;
		}
		if (row < 0) {
			row = a - 1;
		}
		if (col >= a) {
			col = 0;
		}
	}
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cout << arr[i][j]<<" ";
		}
		cout << "\n";
	}
	for (int i = 0; i < a; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}