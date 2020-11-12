#include<stdio.h>

int main() {
	double input1, input2, sum, *inputp;
	scanf_s("%lf%lf", &input1, &input2);
	sum = input1 + input2;
	inputp = &sum;
	printf("%.1lf", *inputp);
	return 0;
}
