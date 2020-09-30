#include<stdio.h>

int main() {
	int input;

	scanf("%d", &input);
	for (int i = 1; i <= input; i++)
	{
		for (int k = 1; k <= input - i; k++)
			printf(" ");
		for (int j = 1; j <= 1; j++)
			printf("*");
		for (int o = 1; o <= 2 * i - 3; o++)
			printf(" ");
		if(i > 1)
			printf("*");
		printf("\n");
	}

	return 0;
}
