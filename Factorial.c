#include<stdio.h>

int main() {
	int num, pac = 1;
	scanf("%d", &num);
	for (int i = 1;i < num + 1;i++)
	{
		pac *= i;
	}
	printf("%d", pac);
	return 0;
}
