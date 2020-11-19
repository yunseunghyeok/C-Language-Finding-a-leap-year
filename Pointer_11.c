#include<stdio.h>

int main() {
	char *first = "GilDong";
	char *second = "Hong";
	char *temp;

	temp = first;
	first = second;
	second = temp;

	printf("%s%s", first, second);

	return 0;
}
