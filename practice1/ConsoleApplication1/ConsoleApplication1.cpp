// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <list>
#include <string>
#include <sstream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
//namespace Seoul {
//	std::string 지역번호;
//	std::string Randmark;
//}
//
//namespace Busan {
//	std::string 지역번호;
//	std::string Randmark;
//}



//세 개의 수 가장 큰 수 구하기
//int bignumber(int a, int b, int c) {
//	if (a >= b) {
//		if (a >= c) {
//			return a;
//		}
//	}
//	else if (a < b) {
//		if (b >= c) {
//			return b;
//		}
//		else if (b < c) {
//			return c;
//		}
//	}
//}


//짝수 홀수 비교
//std::string odd_even(int a) {
//	if(a % 2 == 0){
//		return "짝수";
//	}
//	else {
//		return "홀수";
//	}
//}


//사칙연산 함수
//int add(int a, int b) {
//	return a + b;
//}
//
//int sub(int a, int b) {
//	if (a > b) {
//		return a - b;
//	}
//	else if (b > a) {
//		return b - a;
//	}
//	else {
//		return 0;
//	}
//}
//
//int mul(int a, int b) {
//	return a * b;
//}
//
//float divide(int a, int b) {
//	float c = (float)a;
//	float d = (float)b;
//	float e = c / d;
//	return e;
//}




int main()
{	//구구단 출력
	//int i = 1;
	//int j = 1;
	//
	//for (i = 1; i <= 9; i++) {
	//	std::cout << i << "단출력\n";
	//	for (j = 1; j <= 9; j++) {
	//	std::cout << i << "*" << j << "=" << i * j << "\n";
	//	}
	//
	//}

	//while문 구구단
	//int i = 1;
	//int j;

	//while (i < 10) {
	//	std::cout << i << "단출력\n";
	//	j = 1;
	//	while (j < 10); {
	//		std::cout << i << "*" << j << "=" << i * j++ << "\n";
	//		j++;
	//	}
	//	i++;
	//}

	//1부터 n까지의 합 구하기
	//std::cout << "1부터 n까지의 합 구하기\n";
	//int n;
	//std::cin >> n;
	//std::cout << "숫자(양의 정수)를 입력하세요 :" << n << "\n";


	//int a = 1;
	//int b = 1;
	//int sum = 0;

	//for (a = 1; a <= n; a++) {
	//	sum += a;
	//}

	//std::cout << "1부터" << n << "까지의 합은 :" << sum;

	//1부터 n까지의 합 구하기 while 문
	//std::cout << "1부터 n까지의 합 구하기\n";
	//int n;
	//std::cin >> n;
	//std::cout << "숫자(양의 정수)를 입력하세요: " << n << "\n";

	//int a = 1;
	//int b = 1;
	//int sum = 0;

	//while(a<=n){
	//	sum += a;
	//	a++;
	//}
	//std::cout << "1부터" << n << "까지의 합은 :" << sum;

	//사용자가 입력한 숫자 더하기
	//std::cout << "사용자가 입력한 숫자 더하기\n";
	//int a;
	//int sum = 0;
	//while (1) {
	//
	//	std::cout << "숫자를 입력하세요 (0: exit) : ";
	//	std::cin >> a;
	//	sum += a;

	//	
	//	if (a == 0) {
	//		std::cout << "사용자가 입력한 수의 합은 : " << sum;
	//		break;
	//	}
	//	

	//}


	//사칙연산 계산
	//int a;
	//int b;
	//std::cout << "숫자를 입력하세요 :";
	//std::cin >> a; std::cin >> b;

	//std::cout << add(a, b) << "\n";
	//std::cout << sub(a, b) << "\n";
	//std::cout << mul(a, b) << "\n";
	//std::cout << divide(a, b) << "\n";

	//짝수 홀수 실행
	//int a;
	//std::cout << "숫자를 입력하세요 :";
	//std::cin >> a;
	//std::string str = odd_even(a);
	//std::cout << str;


	//제일 큰 수 실행
	//int a;
	//int b;
	//int c;
	//std::cout << "숫자를 입력하세요 :";
	//std::cin >> a;
	//std::cin >> b;
	//std::cin >> c;

	//std::cout << bignumber(a, b, c);

	//배열 for문
	//std::string city[5];
	//std::cout << "나라를 입력하세요:";
	//std::cin >> city[0];
	//std::cin >> city[1];
	//std::cin >> city[2];
	//std::cin >> city[3];
	//std::cin >> city[4];


	//for (int i = 0; i<sizeof(city)/sizeof(city[0]); i++) {
	//	std::cout << city[i] << "\n";
	//}

	//grade 배열
	//int grade[5];
	//float sum = 0;

	//for (int i = 0; i < 5; i++) {
	//	std::cout << i+1 << "번 학생의 성적을 입력하세요:";
	//	std::cin >> grade[i];
	//}
	//for (int score : grade) {
	//	sum += score;
	//}
	//std::cout << "평균"<< sum / 5;

	/*동적 배열 사용하기*/
	
	//int x;
	//int y;
	//while (1) {
	//	std::cout << "x를 입력하세요:";
	//	std::cin >> x;
	//	std::cout << "y를 입력하세요:";
	//	std::cin >> y;

	//	if (x > 0 && y > 0) {
	//		break;
	//	}
	//	else {
	//		std::cout << "x와 y 모두 양수를 입력해주세요\n";
	//	}
	//}

	//std::cout << std::endl;

	//int** arr = new int* [x];
	//for (int i = 0; i < x; i++) {
	//		arr[i] = new int[y];

	//}
	//int num = 1;
	//for (int i = 0; i < x; i++) {
	//	for (int j = 0; j < y; j++) {
	//		arr[i][j] = num;
	//		num++;
	//		std::cout << std::setw(3) << arr[i][j];
	//	}
	//	std::cout << "\n";
	//}

	//for (int i = 0; i < x; i++) {
	//	delete[] arr[i];
	//}
	//delete[] arr;
	
	//포인터 사용해서 성적 산출하기

	//int num;
	//std::cout << "몇 명";
	//std::cin >> num;

	//int* grade = new int[num];
	//for (int i = 0; i < num; i++) {
	//	std::cout << i + 1 << "번 학생의 점수를 입력하세요: ";
	//	std::cin >> grade[i];
	//	std::cout << "\n";
	//}

	//int sum = 0;
	//for (int i = 0; i < num; i++) {
	//	sum += grade[i];
	//}
	//std::cout << "성적 평균: " << (double)sum / num << std::endl;
	//delete[] grade;


	//vector 사용하기
//	int x, y;
//
//	while (1) {
//		std::cout << "x를 입력하세요: ";
//		std::cin >> x;
//		std::cout << "y를 입력하세요: ";
//		std::cin >> y;
//
//	if (x > 0 && y > 0) {
//		break;
//	}
//	else {
//		std::cout << "x와 y모두 양수를 입력해주세요.\n";
//	}
//}
//
//	std::cout << std::endl;
//
//	std::vector<std::vector<int>> arr2;
//	arr2.assign(x, std::vector<int>(y));
//
//	int num = 1;
//	for (int i = 0; i < x; ++i) {
//		for (int j = 0; j < y; ++j) {
//			arr2[i][j] = num;
//			//arr2.at(i).at(j) = num;
//			num++;
//		}
//	}
//	for (int i = 0; i < x; ++i) {
//		std::vector<int>row;
//		for (int j = 0; j < y; ++j) {
//			row.push_back(num);
//			num++;
//		}
//		arr2.push_back(row);
//	}
//
//	for (int i = 0; i < x; ++i) {
//		for (int j = 0; j < y; ++j) {
//			std::cout << arr2[i][j]<<" ";
//
//
//		}
//		std::cout << "\n";
//	}


	//namespace 실습
	//using namespace Seoul;
	//using Busan::지역번호;
	//using Busan::Randmark;

	//std::cin >> Seoul::지역번호;
	//std::cin >> Seoul::Randmark;
	//std::cin >> Busan::지역번호;
	//std::cin >> Busan::Randmark;
	//std::cout << "서울의 지역번호는 "<<Seoul::지역번호<<"\n";
	//std::cout << "서울의 랜드마크는 "<<Seoul::Randmark<<"\n";
	//std::cout << "부산의 지역번호는 "<<Busan::지역번호 << "\n";
	//std::cout << "부산의 랜드마크는 "<<Busan::Randmark << "\n";

	//(2차원 배열의 복습) 행렬 합 구하기
	//int x, y;
	//std::cout << "행과 열의 수를 입력하세요: ";
	//std::cin >> x >> y;
	//std::cout << "\n";

	//int** arr = new int *[x];
	//for (int i = 0; i < x; ++i) {
	//	arr[i] = new int[y];
	//}

	//std::cout << "행렬의 원소를 입력하세요: \n";
	//for (int i = 0; i < x; ++i) {
	//	for (int j = 0; j < y; ++j) {
	//		std::cin >> arr[i][j];

	//	}
	//}
	//std::cout << "\n";


	//for(int i = 0; i<x; i++){
	//	int rowsum = 0;
	//	for (int j = 0; j < y; j++) {
	//		rowsum += arr[i][j];
	//	
	//	}
	//	std::cout << "행" << i+1 << ":" << rowsum << "\n";
	//}

	//std::cout << "\n";


	//for (int j = 0; j < y; j++) {
	//	int colsum = 0;
	//	for (int i = 0; i < y; i++) {
	//		colsum += arr[i][j];

	//	}
	//	std::cout << "열" << j+1 << ":" << colsum << "\n";
	//}



	//for (int i = 0; i < x; ++i) {
	//	delete[] arr[i];
	//}
	//delete[] arr;

	//return 0;

	////(vector 복습)
	////(1) vector를 사용하여 정수를 저장하는 빈 벡터 선언
	//std::vector<int> v;
	////(2) 사용자로부터 5개정수
	//std::cout << "정수 5개를 입력하시오.\n";
	//for (int i = 0; i < 5; ++i) {
	//	int num;
	//	std::cin >> num;
	//	v.push_back(num);
	//}
	////(3) 벡터의 크기
	//std::cout << "벡터의 크기" << v.size();
	//std::cout << "\n";
	////(4) 모든 원소 출력
	//std::cout << "모든 원소: ";
	//for (int i = 0; i < 5; ++i) {
	//	std::cout << v.at(i)<< ' ';
	//}
	//std::cout << "\n";
	////(5) 가장 큰 값 출력
	//int max = v.at(0);
	//for (int i = 0; i < 5; ++i) {
	//
	//	if (v.at(i) > max) {
	//		max = v.at(i);
	//	}
	//}
	//std::cout << "가장 큰 값은 " << max;

	//std::cout << "\n";

	////(6) 벡터의 모든 원소 2배
	//std::cout << "벡터의 모든 원소 2배: ";
	//for (int i = 0; i < 5; ++i) {
	//	std::cout << 2 * v.at(i) << ' ';
	//}
	//std::cout << "\n";

	////(7) 인덱스를 입력받아 해당 인덱스 제거
	//int a;
	//std::cout << "제거 인덱스를 입력하시오: ";
	//std::cin >> a;
	//v.erase(v.begin() + a, v.begin() + a + 1);
	//for (int i = 0; i < 4; ++i) {
	//	std::cout << v.at(i) << ' ';
	//}
	//std::cout << "\n";
	//
	////(8) 인덱스를 입력받아 해당 인덱스에 있는 새로운 원소 삽입
	//int b;
	//int c;
	//std::cout << "삽입 인덱스를 입력하시오: ";
	//std::cin >> b;
	//std::cout << "삽입할 원소를 입력하시오: ";
	//std::cin >> c;
	//v.insert(v.begin() + b, c);
	//for (int i = 0; i < 5; ++i) {
	//	std::cout << v.at(i) << ' ';
	//}
	
	
	//번외 홀수 삭제
	//int num = 0;
	//std::vector<int> v(num);
	//std::cout << "벡터의 크기를 정하세요: ";
	//std::cin >> num;
	//std::cout << "새로운 vector를 입력하세요: ";
	//int vec = 0;
	//for (int i = 0; i < num; ++i) {
	//	std::cin >> vec;
	//	v.push_back(vec);
	//}
	//std::cout << "새로운 vector는 ";
	//for (int i = 0; i < num; ++i) {
	//	std::cout << v.at(i) << ' ';
	//	}
	//std::vector<int>v1;
	//for (int i = 0; i < num; ++i) {
	//	if (v.at(i) % 2 == 0) {
	//		v1.push_back(v.at(1));
	//	}
	//}
	
	//list 예제
	//std::list<int> myList = { 5, 4, 3, 4, 2, 1, 1 };
	//int num = 0;
	//for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
	//	if (*it == 4) {
	//		num += 1;
	//	}
	//}
	//std::cout << "4의 개수는 " << num <<"\n";
	//
	//
	//myList.sort();
	//for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
	//	std::cout << *it << " ";
	//}
	//std::cout << "\n";
	//
	//myList.unique();
	//for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
	//	std::cout << *it << " ";
	//}
	//std::cout << "\n";


	//std::list<int>myList1 = { 6,7 };
	//std::list<int>myList2 = { 0 };
	//
	//myList.merge(myList1);
	//for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
	//	std::cout << *it << " ";
	//}
	//std::cout << "\n";


	//myList.splice(myList.begin(), myList2);
	//for (std::list<int>::iterator it = myList.begin(); it != myList.end(); ++it) {
	//	std::cout << *it << " ";
	//}
	//std::cout << "\n";

	//번외 문제(배열)
	//int a[5] = { 1,2,3,4,5 };
	//std::cout << "처음 배열: ";
	//for (int i = 0; i < 5; ++i) {
	//	std::cout << a[i] << ' ';
	//}
	//std::cout << "\n";

	//for (int i = 3; i >= 0 ; i--) {
	//	a[i + 1] = a[i];
	//}
	//std::cout << "삽입할 숫자를 넣어주세요: ";
	//std::cin >> a[0];
	//for (int i = 0; i < 5; ++i) {
	//	std::cout << a[i] << ' ';
	//}

	//string 실습
	
//	string s = "Police say two people are suspected of trying to create a two shortcut for their construction work.\
//The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
//	cout << s.size() << "\n";
//	cout << s[100] << "\n";
//	cout << s.find("two") << "\n";
//	int n = s.find("two");
//	cout << s.find("two",n+1) << "\n";

	//1. 두 문자열을 입력 받아서 둘 모두 숫자인지 검사, 아니면 다시 입력 받도록
	//string str1;
	//string str2;
	//cout << "문자열을 입력하세요: ";
	//cin >> str1; cout << "\n";
	//cout << "문자열을 입력하세요: ";
	//cin >> str2; cout << "\n";

	//for (int i = 0; i < str1.size(); i++) {
	//	if (isdigit(str1[i]) == 0) {
	//		cout << "No\n";
	//		cout << "문자열을 입력하세요: ";
	//		cin >> str1; cout << "\n";
	//		cout << "문자열을 입력하세요: ";
	//		cin >> str2; cout << "\n";

	//	}
	//}

	//for (int i = 0; i < str2.size(); i++) {
	//	if (isdigit(str2[i]) == 0) {
	//		cout << "No\n: ";
	//		cout << "문자열을 입력하세요: ";
	//		cin >> str1; cout << "\n";
	//		cout << "문자열을 입력하세요: ";
	//		cin >> str2; cout << "\n";

	//	}
	//}
	//
	//cout << str1 + str2<< "\n";
	//
	//int a = stoi(str1);
	//int b = stoi(str2);

	//cout << a + b;

	//string 번외 실습
	//string str1;
	//cout << "문자열을 입력하세요: ";
	//cin >> str1;
	//stringstream ss1(str1);
	//for (int i = 0; i < str1.size(); i++) {
	//	ss1.get();
	//	if (ss1.get() < 48 || ss1.get() > 57) {
	//		cout << "숫자가 아닙니다. 다시 입력하세요: ";
	//		cin >> str1;
	//	}
	//	else {
	//		break;
	//	}
	//}

	//string 3번째 실습
	//string s = "Codingon";
	//cout << s.replace(0, 1, "c")<<"\n";
	//cout << s.substr(2, 4) << "\n";
	//cout << s.replace(2, 4, "oooo") << "\n";
	//cout << s.erase(2, 5);

	//실습 거꾸로 읽기


	//ifstream file_read("hello.txt");

	//vector<string> file_str;
	//string line;
	//while (std::getline(file_read, line)){
	//	file_str.push_back(line);
	//}
	//file_read.close();

	//std::ofstream file("output.txt");
	//if(file.fail()) cout << "파일없음" << endl;
	//
	//for (int i = 2; i >=0; --i) {
	//	file << file_str[i];
	//	file << "\n";
	//}
	
	//실습 1
	//cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력하세요.\n";
	//ofstream file1("members.txt");
	//
	//for (int i = 1; i < 4; i++) {
	//	string a;
	//	int b = 0;
	//	cout << i << "번째 회원 : ";
	//	cin >> a >> b;
	//	file1 << a << ' '<< b << "\n";
	//}
	//file1.close();
	//cout << "\n";
	//cout << "-------회원 명부 파일 읽기-------";
	//cout << "\n";
	//
	//ifstream file("members.txt");
	//string line;
	//while (std::getline(file, line)) {
	//	cout << line;
	//	cout << "\n";
	//}
	//file.close();

	//실습 2
	//std::ifstream member_file;
	//std::string name, pw, str1, str2;
	//member_file.open("members.txt");
	//std::cout << "이름을 입력하세요.";
	//std::cin >> name;
	//int c = 0;
	//std::cout << "비번을 입력하세요.";
	//std::cin >> pw;

	//bool flag = false;
	//while (member_file >> str1 >> str2) {
	//	if (name == str1 && pw == str2) {
	//		flag = true;
	//		break;
	//	}
	//}

	//if (flag) {
	//	cout << "로그인 성공";
	//	c++;
	//	cout << "\n";
	//}
	//else cout << "로그인 실패";

	//member_file.close();

	//번외 실습 3
	//int number;
	//if (c == 1) {
	//	cout << "전화번호를 입력하세요.";
	//	cin >> number;
	//}
	

}






// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
