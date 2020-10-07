#include<stdio.h>

int main() {
	char score[3] = " ";
	double sum = 0.0;

	gets(score);
	if (score[0] == 'A')
		sum = 4.0;
	else if (score[0] == 'B')
		sum = 3.0;
	else if (score[0] == 'C')
		sum = 2.0;
	else if (score[0] == 'D')
		sum = 1.0;
	else if (score[0] == 'F')
	{
		printf("0.0");
		return 0;
	}
	if (score[1] == '+')
		sum += 0.3;
	else if (score[1] == '-')
		sum -= 0.3;

	printf("%.1lf", sum);

	return 0;
}
