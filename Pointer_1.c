#include<stdio.h>

int main() {
	int num, *iptr;
	scanf_s("%d", &num);
	iptr = &num;
	printf("%d\n", *iptr);
	return 0;
}
