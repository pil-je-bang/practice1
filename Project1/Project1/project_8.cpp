#include<iostream>
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
	COORD Pos;  //x, y�� ������ �ִ� ����ü
	Pos.X = x;  //x�� �����̴� ����
	Pos.Y = z + 2 * y;//z=24 �ʱⰪ
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void show(vector<string> k) {
	cout << setw(60) << "|  MENU  |" << endl << endl;
	for (auto i : k) {
		cout << setw(60) << i << endl << endl;
	}
}

int firstmenu(int z, int j) {
	int menu = 0;
	int count = 0;
	int c;
	for (;;) {
		gotoxy(20, count, z);
		if (1) {        //Ű���� �Է� Ȯ�� (true / false)
			c = _getch();      // ����Ű �Է½� 224 00�� ������ �Ǳ⿡ �տ� �ִ� �� 224�� ����
			if (c == 224)
				c = _getch();  // ���� �Է°��� �Ǻ��Ͽ� �����¿� ���
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
				case 13:
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
	//�ʱ� ȭ�� ����
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
	//menu_num�� 0�ΰ��
	while (menu_num == 0)
	{	//manual ȭ�� ����
		system("cls");
		cout << endl << endl << endl << endl << endl << setw(40) << "MANUAL" << endl << endl;
		cout << "                                1.����ڴ� 100���� �ð��� ����ϴ�." << endl;
		cout << "                                2.����� ����� 8�� Ʋ�� ��� �Ҹ�˴ϴ�." << endl;
		cout << "                                3.�ܾ ���� ����ڸ��� ��ŷ�� �̸��� ���� �� �ֽ��ϴ�." << endl;
		cout << "                                4.30�� �̻��� ���ӵ� ���� Ȱ���� �������ֽʽÿ�." << endl;
		cout << endl << endl << setw(50) << "                          �����Ͻðڽ��ϱ�?";
		vector<string> manual_menu = { "1.  YES","2.   NO","3. HOME" };
		cout << endl << endl << endl << endl;
		cout << setw(110) << "___________________________________________________________________________________________" << endl;
		show(manual_menu);
		cout << setw(110) << "___________________________________________________________________________________________" << endl;
		int menu_manual = firstmenu(20, 2);
		if (menu_manual == 2) {
			system("cls");
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
	
	// ��� �׸��� �����ϴ� ����
	vector<string> hangmanArt = {
	"  +---+\n  |   |\n      |\n      |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n      |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n  |   |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|   |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n      |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n /    |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n      |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n��    |\n=========",
	"  +---+\n  |   |\n  O   |\n /|\\  |\n / \\  |\n�� �� |\n========="
	};
	//���� �޾ƿ��� �ܾ� comp ���Ϳ� ����
	ifstream file_r("fruit.txt");
	string str;
	vector<string> comp;
	comp.clear();
	while (file_r >> str) { 
		comp.insert(comp.begin(), str);
	};
	file_r.close();

	//comp ���Ϳ� �� ���� �ܾ� �� ��ŭ �����ϰ� ������, ���� �ܾ� ����
	srand(time(NULL));
	int ran = rand();
	int random = ran % comp.size(); 
	string correct = comp[random];
	int word_size = correct.size();

	int timer = 0; //Ÿ�̸�

	//menu_num�� 1�� ���
	//Ŀ���� start �κп� ��ġ�ϰ� enter������ ���� start
	if (menu_num == 1) {
		system("cls");
		cout << "�ܾ��� ���� ���� " << word_size << "�Դϴ�." << endl << endl;
		
		vector<string> user_word(word_size); // �ܾ� ���ڼ��� �����ֱ�
		vector<string> pastalpha;//���ݱ��� �Է��� ���ĺ�
		vector<int> spot; //���ĺ��� �ߺ����� �ִ� ��ġ�� �����ϱ� ���� ����

		string user; //����� �Է� �ܾ�
		string alpha; //����ڰ� �Է��ϴ� ���ĺ�
		string show; //���� � ���ĺ����� ������� ������

		int count = 0; // ��� ������� count
		int table_num = 1;// ����� ���� ����
		int timeover = 0;
		int have = 0;

		user_word.clear();
		spot.clear();
		show.clear();
		

		for (int i = 0; i < word_size; i++) {
			show.push_back('=');
		}
		cout << "���� �ܾ� : ���� " << endl;		
		
		clock_t startTime = clock(); //���� �ð�

		while (1) {
			if (count >= 8) {
				cout << "-----------------------G A M E O V E R--------------------------";
				Sleep(2000);
				break;
			}
			// �׸� ���� 1.���ĺ� ã��, 2. �ܾ� ���߱�, 3. �ܾ� Ȯ�� �� ����
			cout << "--------------------------------------------------------------\n" << "| 1. ���ĺ� ã�� " << endl << "| 2. �ܾ� ���߱�" << endl << "| 3. �ܾ� Ȯ�� �� ���� ! " << endl << "| ���Ͻô� ��ȣ�� �����ϼ��� . : ";
			
			cin >> table_num;
			cout << endl;

			//table_num�� 1�̸� ���ĺ� ã�� 2�̸� �ܾ� ���߱� 3�̸� �ܾ� Ȯ�� �� ����
			switch (table_num) {
				//table_num�� 1�� ��� - ���ĺ� 1���� �Է�
				case(1): {
					cout << "���ĺ��� �Է��ϼ��� . : ";
					cin >> alpha;
					cout << endl;

					if (alpha == "1" || alpha == "2" || alpha == "3") {
						cout << "���ĺ��� �Է��ϼ��� . : ";
						cin >> alpha;
						cout << endl;
					}

					have = correct.find(alpha);
					clock_t endTime = clock(); //���� �ð�

					int timer = (endTime - startTime) / CLOCKS_PER_SEC; //�ð��� ��
					int left_time = 100 - timer;
					pastalpha.push_back(alpha);

					if (have == string::npos) {
						cout << "�ش� ���ĺ��� �����ϴ�. " << endl;
						cout << "���� �ð� : " << left_time << endl << endl; //���� �ð� ���
					
						if (left_time < 0) {
							cout << "T - I - M - E        O - V - E - R";
							timeover++;
							Sleep(2000);
							break;
						}
						count++;
						cout << "���� ����:\n" << hangmanArt[count] << endl;//���� ��� ���� ���
						cout << "���ݱ��� �Է� ���ĺ� : "; //���ݱ��� �Է��� ���ĺ� ���
						for (int i = 0; i < pastalpha.size(); i++) {
							cout << pastalpha.at(i) + ' ';
						}
						cout << "\n";
						cout << show << endl;//���ݱ�ġ ä�� ���ĺ� ���
					}
					else {
						cout << alpha << "�� �����մϴ�. " << endl;
						cout << "���� �ð� : " << left_time << endl << endl; //���� �ð� ���
						cout << "���� ����:\n" << hangmanArt[count] << endl; //���� ��� ���� ���
						cout << "���ݱ��� �Է� ���ĺ� : "; //���ݱ��� �Է��� ���ĺ� ���
					
						for (int i = 0; i < pastalpha.size(); i++) {
							cout << pastalpha.at(i) + ' ';
						}
						cout << "\n";

						while (have != string::npos) {
							spot.insert(spot.begin(), have);
							have = correct.find(alpha, have + 1);
						}
						for (auto i : spot) {
							show.replace(i, 1, alpha);//�ε��� ��ȣ�� �ٷ� ���;� �Ѵ�.
						}
						cout << show << endl; //���ݱ�ġ ä�� ���ĺ� ���
						spot.clear();
					}
					continue;
				}
				//table_num�� 2�� ��� - ������ �˾Ƽ� ���� �Է�
				case(2): {
					cout << "���� �Է����ּ��� : ";
					cin >> user;
					cout << endl;
					clock_t endTime = clock(); //���� �ð�
					int timer = (endTime - startTime) / CLOCKS_PER_SEC; //�ð��� ��
					int left_time = 100 - timer;
				
					if (left_time < 0) {
						cout << "T - I - M - E        O - V - E - R";
						Sleep(2000);
						timeover++;
						break;
					}
					cout << "���� �ð� : " << left_time << endl << endl; //���� �ð� ���
				
					if (user == correct) {
						string username;
						cout << "## �����մϴ� ! �����Դϴ� ##" << endl;
						cout << "############�̸��� �Է��ϼ���############ : ";
						cin >> username;
						ofstream file("score.txt", ios::app);
						file << timer << "��-" << username << endl;
						Sleep(2000);
						break;
					}
					else {
						cout << "������ �ƴմϴ�." << endl;
						count++;
						cout << "���� ����:\n" << hangmanArt[count] << endl;
						continue;
					}
				}
				//table_num�� 3�� ��� - ������ ���� ���� �˰� ������ ���
				case(3): {
					cout << "�ƽ����� ! ������ " << correct << "�Դϴ�. �̿��� �ּż� �����մϴ�." << endl;
					Sleep(2000);
					break;
				}
			}
			//�ð��� �Ѿ�� ����
			if (timeover > 0) {
				cout << "�ƽ����� ! ������ " << correct << "�Դϴ�. �̿��� �ּż� �����մϴ�." << endl;
				Sleep(2000);
			}
			break;
		}
	}
	//menu_num�� 2�� ��� - ��ŷ Ȯ��
	else if (menu_num == 2) {
		system("cls");
		ifstream file("score.txt");

		// ���� ������ ������ ���͸� �����մϴ�.
		vector<string> lines;
		string line;

		//�� �� �� �о ���� ���� 1����� �����ؼ� ���
		while (getline(file, line)) {
			lines.push_back(line);
		}
		sort(lines.begin(), lines.end());
		for (int i = 0; i < lines.size(); i++) {
			cout << i + 1 << "�� " << lines.at(i) << "\n";
		}
		file.close();
	}
	return 0;
}