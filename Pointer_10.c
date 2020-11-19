#include<stdio.h>

int main() {
	int data[10];
	int *iptr = data;
	
	for (int i = 0; i < 10; i++) 
		scanf_s("%d", &iptr[i]);
	for (int i = 0; i < 10; i++) 
		printf("%d", data[i]);

	return 0;
}
