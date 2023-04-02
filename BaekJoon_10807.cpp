#include <stdio.h>

int main()
{
	int N, v, count = 0;
	int* arr = new int[100];

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d ", &arr[i]);
	}
	scanf("%d", &v);

	for (int i = 0; i < N; i++) {
		if (v == arr[i]) {
			count++;
		}
	}
	printf("%d", count);

	delete[] arr;
	return 0;
}