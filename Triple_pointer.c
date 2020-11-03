#include<stdio.h>

int main() {
	int a = 10;
	int* ap;
	int** app;
	int*** appp;


	appp = &app;
	app = &ap;
	ap = &a;
	***appp = 15;
	printf("%d\n", a);

	return 0;
}
