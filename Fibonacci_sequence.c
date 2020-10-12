#include<stdio.h>

int main() {
	int input, num1 = 0, num2 = 1;
	scanf_s("%d", &input);

	printf("***피보나치 수열***\n");
	printf("%d, %d, ", num1, num2);
	for (int i = 1; i <= input - 2; i++)
	{
		if (i == input - 2)
		{
			if (num1 <= num2)
			{
				num1 += num2;
				printf("%d", num1);
			}
			else if (num1 >= num2)
			{
				num2 += num1;
				printf("%d", num2);
			}
		}
		else
		{
			if (num1 <= num2)
			{
				num1 += num2;
				printf("%d", num1);
			}
			else if (num1 >= num2)
			{
				num2 += num1;
				printf("%d", num2);
			}
			printf(", ");
		}
	}
	return 0;
}
