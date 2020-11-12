#include<stdio.h>

int main() {
	int input1, input2, sum, *inputp;
	scanf_s("%d%d", &input1, &input2);
	sum = input1 + input2;
	inputp = &sum;
	printf("%d", *inputp);
	return 0;
}
