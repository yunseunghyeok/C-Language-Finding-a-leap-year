#include<stdio.h>

int main() {
	int input;

	scanf("%d", &input);
	for (int i = 1; i <= input; i++)
	{
		for (int k = 1; k <= i; k++)
			printf("*");
		for (int j = 1; j <= 2 * (input - i); j++)
			printf(" ");
		for (int o = 1; o <= i; o++)
			printf("*");
		printf("\n");
	}
	for (int i = 1; i <= input - 1; i++)
	{
		for (int k = 1; k <= input - i; k++)
			printf("*");
		for (int j = 1; j <= 2 * i; j++)
			printf(" ");
		for (int o = 1; o <= input - i; o++)
			printf("*");
		printf("\n");
	}

	return 0;
}
