#include<stdio.h>

main() {
	int num, k = 1;

	printf("1 이상의 숫자를 입력해주세요");
	scanf_s("%d", &num);

	if (num >= 1)
	{
		for (int i = 10; (num / i) > 0; k++)
		{
			num = num / i;
		}
		printf("%d자릿수", k);
	}
	else
		printf("1 이상의 숫자를 입력해주세요.");
}
