#include<stdio.h>

int main() {
	int data, *p1_data, *p2_data;
	p1_data = &data;
	p2_data = &data;
	scanf_s("%d", p1_data);
	printf("%d", *p2_data);
	return 0;
}
