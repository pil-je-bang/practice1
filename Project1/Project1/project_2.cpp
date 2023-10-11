#include <iostream>
#include <ctime>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	clock_t startTime = clock();
	/*cout << "걸린시간 : " << (endTime - startTime)CLOCKS_PER_SEC << endl;*/
	string a;
	string b;
	string result;

	int count = 0;
	std::vector<string> v{ 40 };
	cout << "처음 단어를 입력하세요 : ";
	cin >> a;
	while (1) {
		cout << "다음 단어를 입력하세요 : ";
		cin >> b;
		for (int i = 0; i < v.size(); i++) {
			if (v[i] == b) {
				cout << "겹치는 단어입니다." << endl;
			}
		}

		clock_t endTime = clock();
		int Timer = (endTime - startTime)/CLOCKS_PER_SEC;

		if (Timer > 30) {
			cout << "시간초과"<<endl;
			cout << "입력한 단어 개수 : " << count;
			break;
		}
		else if (a.at(a.size()-1) == b.front()) {
			result = a += "->" + b;
			count++;
			cout << result << endl;
			v.push_back(b);
		}
		else {
			cout << "잘못된 입력입니다."<<endl;
		}
	}
}