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
		cout << "������ �Է��ϼ���: ";
		cin >> player;
		if (player >= 4) {
			cout << "1~3 ������ ���ڸ� �Է��ϼ���.\n";
			continue;
		}
		cout << "����ڰ� �θ� ����!\n";
		for (int i = 1; i <= player; i++){
			num++;
			if(num<=31){
				cout << num << "\n";
			}
		}
		if (num >= 31) {
			cout << "��������"<<"\n";
			cout << "��ǻ�ͽ¸�";
			break;
		}
		
		computer = rand() % 3 + 1;
		cout << "��ǻ�Ͱ� �θ� ����\n";
		for (int i = 0; i < computer; i++) {
			num++;
			cout << num << "\n";
		}if (num >= 31) {
			cout << "��������"<<"\n";
			cout << "����� �¸�";
			break;
		}
	}

}