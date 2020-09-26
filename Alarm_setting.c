#include<stdio.h>

int main() {
	int hour, min;

	scanf_s("%d%d", &hour, &min);
	if (hour <= 23 && hour >= 0 && min <= 59 && min >= 0)
	{
		if (hour == 0 && min < 45)
		{
			hour = 23;
			min = 60 - (45 - min);
		}
		else
		{
			if (min >= 45)
				min -= 45;
			else
			{
				hour--;
				min = 60 - (45 - min);
			}
		}
		printf("%d %d", hour, min);
	}

	return 0;
}
