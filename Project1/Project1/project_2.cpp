#include <iostream>
#include <ctime>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	clock_t startTime = clock();
	/*cout << "�ɸ��ð� : " << (endTime - startTime)CLOCKS_PER_SEC << endl;*/
	string a;
	string b;
	string result;

	int count = 0;
	std::vector<string> v{ 40 };
	cout << "ó�� �ܾ �Է��ϼ��� : ";
	cin >> a;
	while (1) {
		cout << "���� �ܾ �Է��ϼ��� : ";
		cin >> b;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == b) {
				cout << "��ġ�� �ܾ��Դϴ�." << endl;
			}
		}

		clock_t endTime = clock();
		int Timer = (endTime - startTime)/CLOCKS_PER_SEC;

		if (Timer > 30) {
			cout << "�ð��ʰ�"<<endl;
			cout << "�Է��� �ܾ� ���� : " << count;
			break;
		}
		else if (a.at(a.size()-1) == b.front()) {
			result = a += "->" + b;
			count++;
			cout << result << endl;
			v.push_back(b);
		}
		else {
			cout << "�߸��� �Է��Դϴ�."<<endl;
		}
	}
}