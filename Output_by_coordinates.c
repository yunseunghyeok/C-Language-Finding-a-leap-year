#include<stdio.h>

int main() {
	int N;
	scanf_s("%d", &N);
	int row = N, col = N;

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			if (i == j || i + j == N + 1)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}
