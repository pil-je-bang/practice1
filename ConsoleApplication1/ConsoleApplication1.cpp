// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

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
	int grade[5];
	float sum = 0;

	for (int i = 0; i < 5; i++) {
		std::cout << i+1 << "번 학생의 성적을 입력하세요:";
		std::cin >> grade[i];
	}
	for (int score : grade) {
		sum += score;
	}
	std::cout << "평균"<< sum / 5;





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
