#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	cout << "�߱� ����\n";
	int count = 0;
	int baseball[3];
	int check[4] = { 0, };
	int num;
	std::srand(time(NULL));
	for (int i = 0; i < 3; i++) {
		do {
			num = std::rand() % 9 + 1;
		} while (check[num] == 1);
		baseball[i] = num;
		check[num] = 1;
	}
	//for (auto n : baseball) {
	//	cout << n << " ";
	//}
	while (1) {
		int strike = 0;
		int ball = 0;
		cout << "1 ~ 9 ������ ���� 3���� �Է� �Ͻÿ�.(�̿��� ����: ����)\n";
		int a, b, c = 0;
		cin >> a >> b >> c;
		count++;
		int arr[3] = { a,b,c };
		
		if (a > 9 || b > 9 || c > 9 || a < 1 || b<1 || c<1) {
			cout << "������ �����Ͽ����ϴ�.";
			break;
		}

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (baseball[i] == arr[j]) {
					if (i == j) {
						strike++;
					}
					else {
						ball++;
					}
				}
			}
		}
		if (strike == 3) {
			cout << count << " ������ �����Ͽ����ϴ�.";
			break;
		}
		else {
			cout << "strike : " << strike << "	" << "ball : " << ball<<endl;
		}
	}
}