#include<stdio.h>

int main() {
	int inputA, inputB;
	scanf_s("%d%d", &inputA, &inputB);
	printf("%d\n", inputA + inputB);
	while (inputA != 0 && inputB != 0)
	{
		scanf_s("%d%d", &inputA, &inputB);
		if (inputA != 0 && inputB != 0)
		{
			if (inputA > 0 && inputB < 10)
			{
				printf("%d\n", inputA + inputB);
			}
		}
	}

	return 0;
}
