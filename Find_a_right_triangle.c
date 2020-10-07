#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c, n;
	double long_num;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int check = 0;
		scanf_s("%d%d%d", &a, &b, &c);
		long_num = pow(a, 2);
		if (long_num == pow(b, 2) + pow(c, 2))
			check = 1;
		else
		{
			long_num = pow(b, 2);
			if (long_num == pow(a, 2) + pow(c, 2))
				check = 1;
			else
			{
				long_num = pow(c, 2);
				if (long_num == pow(a, 2) + pow(b, 2))
					check = 1;
				else
					check = 2;
			}
		}
		switch (check)
		{
		case 1:
			printf("Scenario #%d:\nyes", i);
			break;
		case 2:
			printf("Scenario #%d:\nno", i);
			break;
		}
		printf("\n\n");
	}

	return 0;
}
