#include<stdio.h>
#include<math.h>

int main() {
	int input, length = -1, frontnum, backnum;
	scanf_s("%d", &input);
	while (input != 0)
	{
		int a = 1;
		if (input >= 1 && input <= 99999)
		{
			int num = input;
			int num2 = input;
			int num3 = input;
			while (num > 0)
			{
				num /= 10;
				length++;
			}
				while (num2 > 0)
				{
					frontnum = num2 % 10;
					num2 /= 10;
					backnum = num3;
					backnum /= (int)pow(10, length);
					num3 %= (int)pow(10, length);
					length--;
					if (a == 1)
					{
						if (frontnum == backnum)
							a = 1;
						else
							a = 0;
					}
				}
			switch (a)
			{
			case 0:
				printf("no\n");
				break;
			case 1:
				printf("yes\n");
				break;
			}
		}
		scanf_s("%d", &input);
	}

	return 0;
}
