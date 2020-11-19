#include<stdio.h>

int main() {
	int data[10] = { 1, 2, 5, 6, 8, 6, 5, 9, 4, 7 };
	int *iptr = data;

	for (int i = 0; i < 10; i++) {
		printf("%d ", iptr[i]);
	}

	return 0;
}
