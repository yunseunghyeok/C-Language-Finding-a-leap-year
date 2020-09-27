#include<stdio.h>

int main() {
	int input, num1, num2, num3, num4, cnt = 0, result;
	scanf("%d", &input);
	result = input;
	while (1)
	{
		num1 = input / 10;
		num2 = input % 10;
		num3 = (num1 + num2) % 10;
		num4 = (num2 * 10) + num3;
		input = num4;
		cnt++;
		if (num4 == result) break;
	}
	printf("%d", cnt);

	return 0;
}
