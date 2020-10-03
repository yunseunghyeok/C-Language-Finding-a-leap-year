#include<stdio.h>

int main() {
	long int A, B, C;
	scanf_s("%d%d%d", &A, &B, &C);
	if (C <= B)
		printf("-1");
	else
		printf("%d", A / (C - B) + 1);

	return 0;
}
