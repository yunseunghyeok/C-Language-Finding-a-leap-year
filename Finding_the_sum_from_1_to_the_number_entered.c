#include<stdio.h>

int main() {
	int inputnum, result = 0;
	scanf_s("%d", &inputnum);

	if (inputnum >= 1 && inputnum <= 10000)
	{
		for (int cnt = 1;cnt <= inputnum;cnt++)
		{
			result += cnt;
		}
	}
	printf("%d", result);

	return 0;
}
