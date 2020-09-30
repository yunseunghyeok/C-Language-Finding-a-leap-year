#include<stdio.h>

int main() {
	int input;

	scanf_s("%d", &input);
	for (int i = 1; i <= input / 2; i++)
	{
		for (int k = 1; k <= input / 2 - i + 1; k++)
			printf("*");
		for (int j = 1; j <= 2 * i - 2; j++)
			printf(" ");
		for (int o = 1; o <= input / 2 - i + 1; o++)
			printf("*");
		printf("\n");
	}
	for (int i = 1; i <= input / 2; i++)
	{
		for (int k = 1; k <= i; k++)
			printf("*");
		for (int j = 1; j <= input - (2 * i); j++)
			printf(" ");
		for (int o = 1; o <= i; o++)
			printf("*");
		printf("\n");
	}

	return 0;
}
