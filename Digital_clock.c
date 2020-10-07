#include<stdio.h>

int main() {
	int A, B, C, D;
	scanf_s("%d%d%d%d", &A, &B, &C, &D);

	if (A >= 0 && A <= 23 && 
		B >= 0 && B <= 59 && 
		C >= 0 && C <= 59 && 
		D >= 0 && D <= 500000)
	{
		A += D / 3600;
		B += D % 3600 / 60;
		C += D % 3600 % 60;
		if (C > 59)
		{
			C -= 60;
			B += 1;
		}
		if (B > 59)
		{
			B -= 60;
			A += 1;
		}
		if (A > 23)
			A %= 24;
		printf("%d %d %d",A, B, C);
	}

	return 0;
}
