#include<stdio.h>
#include<math.h>
main() {
	int input, length = -1, frontnum, backnum, a;
	scanf_s("%d", &input);
	int num = input;
	int num2 = input;
	int num3 = input;
	while (num > 0)
	{
		num /= 10;
		length++;
	}
	while (num2 > 0)
	{
		frontnum = num2 % 10;
		num2 /= 10;
		printf("%d\n", frontnum);
		backnum = num3;
		backnum /= (int)pow(10, length);
		num3 %= (int)pow(10, length);
		length--;
		printf("%d\n", backnum);
		if (frontnum == backnum)
			a = 1;
		else
			a = 0;
	}
	switch (a)
	{
		case 0:
			printf("no");
			break;
		case 1:
			printf("yes");
			break;
	}
}
