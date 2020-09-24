#include<stdio.h>

main() {
	int year;

	printf("연도를 입력하세요.");
	scanf_s("%d", &year);

	if ((year % 4) == 0)
	{
		if ((year % 100) != 0)
		{
			if ((year % 400) == 0)
				printf("윤년이다.");
		}
	}
	else
		printf("윤년이 아니다");
}
