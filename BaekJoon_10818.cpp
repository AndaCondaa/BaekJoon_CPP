#include <iostream>

int main()
{
	int N, max, min;

	max = -1000000;
	min = 1000000;

	std::cin >> N;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		std::cin >> arr[i];
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] > max) {
			max = arr[i];
		} 
		if (arr[i] < min) {
			min = arr[i];
		}
	}


	std::cout << min << " " << max << std::endl;


	delete[] arr;
	return 0;
}