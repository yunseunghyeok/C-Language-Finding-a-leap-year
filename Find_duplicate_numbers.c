#include<stdio.h>

int main() {
	int N, R, M;
	long long sum = 0;

	scanf_s("%d", &N);
	for (int j = 0; j < N; j++)
	{
		scanf_s("%d", &R);
		sum += R;
	}
	M = sum - (long long)N * (N - 1) / 2;
	printf("%d", M);

	return 0;
}
