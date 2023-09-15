#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	int player = 0;
	int computer = 0;
	int num = 0;
	srand(time(NULL));
	while (1) {
		cout << "개수를 입력하세요: ";
		cin >> player;
		if (player >= 4) {
			cout << "1~3 사이의 숫자를 입력하세요.\n";
			continue;
		}
		cout << "사용자가 부른 숫자!\n";
		for (int i = 1; i <= player; i++){
			num++;
			if(num<=31){
				cout << num << "\n";
			}
		}
		if (num >= 31) {
			cout << "게임종료"<<"\n";
			cout << "컴퓨터승리";
			break;
		}
		
		computer = rand() % 3 + 1;
		cout << "컴퓨터가 부른 숫자\n";
		for (int i = 0; i < computer; i++) {
			num++;
			cout << num << "\n";
		}if (num >= 31) {
			cout << "게임종료"<<"\n";
			cout << "사용자 승리";
			break;
		}
	}

}