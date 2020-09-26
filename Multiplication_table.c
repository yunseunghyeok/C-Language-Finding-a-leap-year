#include<stdio.h>

int main() {
	int input;
	scanf("%d", &input);
	if (input >= 1 && input <= 9)
	{
		for (int num = 1;num < 10;num++)
			printf("%d * %d = %d\n", input, num, input * num);
	}

	return 0;
}
