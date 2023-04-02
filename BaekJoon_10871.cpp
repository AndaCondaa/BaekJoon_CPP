#include <iostream>

int main()
{
	int N, A, X;
	int* arr;

	std::cin >> N >> X;
	arr = new int[N];

	for (int i = 0; i < N; i++) {
		std::cin >> arr[i];
	}
	
	for (int i = 0; i < N; i++) {
		if (X > arr[i]) std::cout << arr[i] << " ";
	}


	delete[] arr;
	return 0;
}