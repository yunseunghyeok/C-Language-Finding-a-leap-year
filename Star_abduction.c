#include<stdio.h>
int main() {
	int input;
	scanf_s("%d", &input);
	if ((input % 2) == 0)
	{
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
	}
	else
	{
		for (int i = 1; i <= input / 2 + 1; i++)
		{
			for (int j = 1; j <= input - i - 1; j++)
				printf("*");
			for (int k = 1; k <= 2 * i - 3; k++)
				printf(" ");
			if (i == 1)
			{
				for (int o = 1; o <= input - i - 2; o++)
					printf("*");
			}
			else
			{
				for (int o = 1; o <= input - i - 1; o++)
					printf("*");
			}
			printf("\n");
		}
		for (int i = 1; i <= input / 2; i++)
		{
			for (int j = 0; j <= i + 1; j++)
				printf("*");
			for (int k = 1; k <= input - 2 * i - 2; k++)
				printf(" ");
			if (i == input / 2)
			{
				for (int o = 0; o <= i; o++)
					printf("*");
			}
			else
			{
				for (int o = 0; o <= i + 1; o++)
					printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
