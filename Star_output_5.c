#include<stdio.h>

int main() {
	int input;

	scanf_s("%d", &input);
	for (int i = 1; i <= input; i++)
	{
		for (int k = 1; k <= input - i; k++)
			printf(" ");
		for (int j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	for (int i = 1; i <= input - 1; i++)
	{
		for (int k = 1; k <= i; k++)
			printf(" ");
		for (int j = 1; j <= input * 2 - 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
