#include<stdio.h>

int main() {
	int num1 = 10, num2 = 20, *ptr1, *ptr2;
	ptr1 = &num2;
	ptr2 = &num1;
	printf("%d\n%d", *ptr1 + 10, *ptr2 - 10);
	return 0;
}
