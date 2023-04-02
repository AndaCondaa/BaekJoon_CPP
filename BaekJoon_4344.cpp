#include <iostream>
#include <iomanip>

//using namespace std;

int main() {
	int C, sum, count, op = 0;
	float avg;
	int score[1000];

	std::cin >> C;
	int* num = new int[C];
	float* arr = new float[C];

	while (C > op) {
		sum = 0;
		count = 0;

		std::cin >> num[op];
		for (int i = 0; i < num[op]; i++) {
			std::cin >> score[i];
			sum += score[i];
		}

		avg = sum / (float)num[op];
		
		for (int i = 0; i < num[op]; i++) {
			if (score[i] > avg) count++;
		}

		arr[op] = (count / (float)num[op]) * 100.0;

		op++;
	}

	for (int i = 0; i < C; i++) {
		std::cout << std::fixed;
		std::cout.precision(3);
		std::cout << arr[i] << "%" << std::endl;
	}

	delete[] num;
	delete[] arr;
	return 0;
}