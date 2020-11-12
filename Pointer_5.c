#include<stdio.h>

int main() {
	int num, *iptr;
	scanf_s("%d", &num);
	iptr = &num;
	printf("%d", *iptr + 1);
	return 0;
}
