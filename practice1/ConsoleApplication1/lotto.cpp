#include <iostream>
#include <ctime>
#include <cstdlib>
#include <random>

int main() {
	//srand(time(NULL));
	//
	//int num[6];
	//int temp = 0;
	//int same = 0;
	//while (same != 7) {
	//	for (int i = 0; i < 6; i++) {
	//		int randomNumber = std::rand();
	//		num[i] = randomNumber % 45 + 1;
	//		temp = num[i];
	//		for (int j = 0; j < i; j++) {
	//			if (num[j] == temp) {
	//				i--;
	//				same++;
	//			}
	//		}

	//	}
	// 
	//}for (int i = 0; i < 6; i++) {
	//	std::cout << num[i]<<" ";
	//}
	// //¸®´õ´Ô ÄÚµå

	//	std::srand(time(NULL));

	//	int lotto[6];
	//	int check[46] = { 0, };
	//	int num;
	//	for (int i = 0; i < 6; i++) {
	//		do {
	//			num = std::rand() % 45 + 1;
	//		} while (check[num] == 1);
	//		lotto[i] = num;
	//		check[num] = 1;
	//	}

	//	for (auto n : lotto) {
	//		cout << n << " ";
	//	}


	//std::mt19937 mtRand;

	//for (int i = 0; i < 10; i++)
	//{
	//std::cout << mtRand() << std::endl;
	//}

	std::mt19937_64 rng1(std::time(nullptr));
	std::uniform_int_distribution<__int64> dist1(1, 45);

	std::cout << "dist1 Min : " << dist1.min() << std::endl;
	std::cout << "dist1 Max : " << dist1.max() << std::endl;

	for (int i = 0; i < 10; i++)
	{
		std::cout << dist1(rng1) << std::endl;
	}

}