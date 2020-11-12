#include<stdio.h>

int main() {
	char ch, *cptr;
	scanf_s("%c", &ch);
	cptr = &ch;
	for (int i = 0; i <= 'z' - *cptr; i++)
		printf("%c", *cptr + i);
	return 0;
}
