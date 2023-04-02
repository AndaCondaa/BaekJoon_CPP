#include <iostream>

int main()
{
	short check[6] = { 1,1,2,2,2,8 };
	short arr[6];

	for (int i = 0; i < 6; i++) {
		std::cin >> arr[i];
	}
	for (int i = 0; i < 6; i++) {
		std::cout << check[i] - arr[i] << " ";
	}


	return 0;
}