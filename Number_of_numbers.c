#include<stdio.h>

int main() {
	int A, B, C, result, num = 0, zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;
	scanf("%d%d%d", &A, &B, &C);
	result = A * B * C;
	if (A >= 100 && A <= 1000 && B >= 100 && B <= 1000 && C >= 100 && C <= 1000)
	{
		while (result > 0)
		{
			num = result % 10;
			result /= 10;
			switch (num)
			{
			case 0:
				zero++; break;
			case 1:
				one++; break;
			case 2:
				two++; break;
			case 3:
				three++; break;
			case 4:
				four++; break;
			case 5:
				five++; break;
			case 6:
				six++; break;
			case 7:
				seven++; break;
			case 8:
				eight++; break;
			case 9:
				nine++; break;
			}
		}
		printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", zero, one, two, three, four, five, six, seven, eight, nine);
	}

	return 0;
}
