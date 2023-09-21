#include<iostream>
#include <stdio.h>
#include <conio.h>
#include<vector>
#include <string>
#include<ctime>
#include<fstream>
#include<Windows.h>
#include<iomanip>
#include<algorithm>
using namespace std;
void gotoxy(int x, int y, int z) {
	COORD Pos;        //x, y를 가지고 있는 구조체
	Pos.X = x;  //x의 움직이는 범위
	Pos.Y = z + 2 * y;//z=24 초기값
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void show(vector<string> k) {
	cout << setw(60) << "|  MENU  |" << endl << endl;
	for (auto i : k) {
		cout << setw(60) << i << endl << endl;
	}
}
// 상하좌우 상수값 설정
#define UP 72
#define DOWN 80
#define ENTER 13
int firstmenu(int z, int j) {
	int menu = 0;
	int count = 0;
	int c;
	for (;;) {
		gotoxy(20, count, z);
		if (1) {        //키보드 입력 확인 (true / false)
			c = _getch();      // 방향키 입력시 224 00이 들어오게 되기에 앞에 있는 값 224를 없앰
			if (c == 224)
				c = _getch();  // 새로 입력값을 판별하여 상하좌우 출력
			if (count >= 0 && count <= j) {
				switch (c) {
				case 72:
					if (count > 0)
						count--;
					continue;
				case 80:
					if (count < j)
						count++;
					continue;
				case ENTER:
					menu = count;
					break;
				}
			}
		}
		break;
	}
	return menu;
}
int first() {
	vector<string> menu = { "1.  MANUAL","2.   START","3. RANKING" };
	cout << endl << endl << endl << endl;
	cout << setw(110) << "___________________________________________________________________________________________" << endl;
	cout << setw(110) << "#      #        #         #     #       #######      #           #        #         #     #" << endl;
	cout << setw(110) << "#      #       # #        ##    #      #             ##         ##       # #        ##    #" << endl;
	cout << setw(110) << "#      #      #   #       # #   #     #              # #       # #      #   #       # #   #" << endl;
	cout << setw(110) << "########     #######      #  #  #     #    ######    #  #     #  #     #######      #  #  #" << endl;
	cout << setw(110) << "#      #    #       #     #   # #      #        #    #   #   #   #    #       #     #   # #" << endl;
	cout << setw(110) << "#      #   #         #    #    ##       #      #     #    # #    #   #         #    #    ##" << endl;
	cout << setw(110) << "#      #  #           #   #     #        #####       #     #     #  #           #   #     #" << endl;
	cout << setw(110) << "___________________________________________________________________________________________" << endl;
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	show(menu);
	int menu_num = firstmenu(23, 2);
	return menu_num;
}
int main() {
	int menu_num = first();
	while (menu_num == 0)
	{
		system("cls");
		cout << endl << endl << endl << endl << endl << setw(40) << "MANUAL" << endl << endl;
		cout << "                                1.사용자는 100초의 시간을 얻습니다." << endl;
		cout << "                                2.행맨의 목숨은 9번 틀릴 경우 소멸됩니다." << endl;
		cout << "                                3.단어를 맞춘 사용자만이 랭킹에 이름을 남길 수 있습니다." << endl;
		cout << "                                4.30분 이상의 연속된 게임 활동을 지양해주십시오." << endl;
		cout << endl << endl << setw(50) << "                          진행하시겠습니까?";
		vector<string> manual_menu = { "1.  YES","2.   NO","3. HOME" };
		cout << endl << endl << endl << endl;
		cout << setw(110) << "___________________________________________________________________________________________" << endl;
		show(manual_menu);
		cout << setw(110) << "___________________________________________________________________________________________" << endl;
		int menu_manual = firstmenu(20, 2);
		if (menu_manual == 2) {
			menu_num = first();
			continue;
		}
		else if (menu_manual == 0)
			menu_num = 1;
		else
		{
			system("cls");
			cout << endl << endl << endl << setw(50) << "T H A N K  Y O U !   B Y E ! ";
			break;
		}
	}
	// 행맨 그림을 저장하는 벡터
	vector<string> hangmanArt = {
	"  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\nㅁ    |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\nㅁ ㅁ |\n========="
	};
	ifstream file_r("fruit.txt");
	string str;
	vector<string> comp;
	comp.clear();
	int timer = 0; //타이머
	while (file_r >> str) { //파일 받아오기 단어 comp 벡터에 저장시켜
		comp.insert(comp.begin(), str);
	};
	file_r.close();
	srand(time(NULL));// srand가 앞에 와야한다.
	int ran = rand();
	int random = ran % comp.size(); //comp 벡터에 들어간 과일 단어 수 만큼 랜덤하게 돌려주기
	string correct = comp[random]; //정답 단어 선택하기
	int word_size = correct.size();
	if (menu_num == 1) {
		system("cls");
		cout << "단어의 글자 수는 " << word_size << "입니다." << endl << endl;
		vector<string> user_word(word_size); // 단어 글자수는 맞춰주기
		user_word.clear();
		string user; //사용자 입력 단어
		string alpha; //사용자가 입력하는 알파벳
		vector<string> pastalpha;//지금까지 입력한 알파벳
		int count = 0; // 행맨 사라지는 count
		int table_num = 1;// 사용자 목차 선택
		string show;
		show.clear();
		for (int i = 0; i < word_size; i++) {
			show.push_back('=');
		}
		cout << "영어 단어 : 과일 " << endl;
		//cout << show<<endl;
		//for (int i = 0; i < word_size; i++) {
		//	cout << " " << "_" << " "; //알파벳을 맞췄다면 _자리에 알파벳이 들어간다.
		//};
		int have = 0;
		vector<int> spot; //알파벳이 중복으로 있는 위치를 저장하기 위한 벡터
		spot.clear();
		clock_t startTime = clock(); //시작 시간
		int timeover = 0;
		while (1) {
			if (count >= 8) {
				cout << "-----------------------G A M E O V E R--------------------------";
				Sleep(2000);
				break;
			}
			cout << "--------------------------------------------------------------\n" << "| 1. 알파벳 찾기 " << endl << "| 2. 단어 맞추기" << endl << "| 3. 단어 확인 및 종료 ! " << endl << "| 원하시는 번호를 선택하세요 . : ";
			// 항목 선택 가능
			cin >> table_num;
			cout << endl;
			switch (table_num) {
			case(1): {
				cout << "알파벳을 입력하세요 . : ";
				cin >> alpha;
				cout << endl;
				if (alpha == "1" || alpha == "2" || alpha == "3") {
					cout << "알파벳을 입력하세요 . : ";
					cin >> alpha;
					cout << endl;
				}
				have = correct.find(alpha);
				clock_t endTime = clock(); //종료 시간
				int timer = (endTime - startTime) / CLOCKS_PER_SEC; //시간의 차
				int left_time = 100 - timer;
				pastalpha.push_back(alpha);
				if (have == string::npos) {
					cout << "해당 알파벳은 없습니다. " << endl;
					cout << "남은 시간 : " << left_time << endl << endl; //남은 시간 출력
					if (left_time < 0) {
						cout << "T - I - M - E        O - V - E - R";
						timeover++;
						Sleep(2000);
						break;
					}
					count++;
					cout << "현재 상태:\n" << hangmanArt[count] << endl;
					cout << "지금까지 입력 알파벳 : ";
					for (int i = 0; i < pastalpha.size(); i++) {
						cout << pastalpha.at(i) + ' ';
					}
					cout << "\n";
					cout << show << endl;
				}
				else {
					cout << alpha << "가 존재합니다. " << endl;
					cout << "남은 시간 : " << left_time << endl << endl; //남은 시간 출력
					cout << "현재 상태:\n" << hangmanArt[count] << endl;
					cout << "지금까지 입력 알파벳 : ";
					for (int i = 0; i < pastalpha.size(); i++) {
						cout << pastalpha.at(i) + ' ';
					}
					cout << "\n";
					while (have != string::npos) {
						spot.insert(spot.begin(), have);
						have = correct.find(alpha, have + 1);
					}
					for (auto i : spot) {
						show.replace(i, 1, alpha);//인덱스 번호가 바로 들어와야 한다.}
					}
					cout << show << endl;
					spot.clear();
				}
				continue;
			}
			case(2): {
				cout << "답을 입력해주세요 : ";
				cin >> user;
				cout << endl;
				clock_t endTime = clock(); //종료 시간
				int timer = (endTime - startTime) / CLOCKS_PER_SEC; //시간의 차
				int left_time = 100 - timer;
				if (left_time < 0) {
					cout << "T - I - M - E        O - V - E - R";
					Sleep(2000);
					timeover++;
					break;
				}
				cout << "남은 시간 : " << left_time << endl << endl; //남은 시간 출력
				if (user == correct) {
					string username;
					cout << "## 축하합니다 ! 정답입니다 ##" << endl;
					cout << "############이름을 입력하세요############ : ";
					cin >> username;
					ofstream file("score.txt", ios::app);
					file << timer << "초-" << username << endl;
					Sleep(2000);
					break;
				}
				else {
					cout << "정답이 아닙니다." << endl;
					count++;
					cout << "현재 상태:\n" << hangmanArt[count] << endl;
					continue;
				}
			}
			case(3): {
				cout << "아쉽군요 ! 정답은 " << correct << "입니다. 이용해 주셔서 감사합니다." << endl;
				Sleep(2000);
				break;
			}
			}
			if (timeover > 0) {
				cout << "아쉽군요 ! 정답은 " << correct << "입니다. 이용해 주셔서 감사합니다." << endl;
				Sleep(2000);
			}
			break;
		}
	}
	else if (menu_num == 2) {
		system("cls");
		ifstream file("score.txt");
		// 파일 내용을 저장할 벡터를 생성합니다.
		vector<std::string> lines;
		std::string line;
		while (getline(file, line)) {
			lines.push_back(line);
		}
		sort(lines.begin(), lines.end());
		for (int i = 0; i < lines.size(); i++) {
			cout << i + 1 << "등 " << lines.at(i) << "\n";
		}
		file.close();
	}
	//else if (menu_num == 0) {
	//	system("cls");
	//	cout << endl << endl << endl << endl << setw(50) << "WELCOME TO HERE ! \n\n\n\n\n" << "1. 사용자는 100초의 시간을 얻습니다. " << endl << "2. 행맨의 목숨은 9번 틀릴 경우 소멸됩니다. " << endl << "3. 단어를 맞춘 사용자만이 랭킹에 이름을 남길 수 있습니다." << endl << "4. 30분 이상의 연속된 게임 활동을 지양해주십시오. ";
	//	cout << endl << endl << "진행하시겠습니까?";
	//}
	return 0;
}