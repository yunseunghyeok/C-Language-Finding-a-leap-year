#include<stdio.h>

main() {
	int num, result = 0;
	printf("4자릿수 이하의 숫자를 입력해주세요.");
	scanf_s("%d", &num);
	if (num < 10000)
	{
		for (int i = 1000; i > 0; i /= 10)
		{
			result += num / i;
			num = num % i;
		}
	}
	else
		printf("4자릿수 이하의 숫자를 입력해주세요.");
	printf("%d", result);
}
