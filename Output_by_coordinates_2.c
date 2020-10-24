#include<stdio.h>

int main() {
	int input;
	scanf_s("%d", &input);

		if (input % 2 == 0)
			while (input % 2 == 0)
			{
				printf("다시 입력해주세요.\n");
				scanf_s("%d", &input);
			}
			for (int row = 1; row <= input; row++)
			{
				for (int col = 1; col <= input; col++)
				{
					if ((row == 1) || (row == input) || (col == 1) || (col == input) || (row == col) || (row + col == input + 1))
						printf("*");
					else
						printf(" ");
				}
				printf("\n");
			}

	return 0;
}
