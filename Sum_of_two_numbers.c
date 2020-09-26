#include<stdio.h>

int main() {
    int input1, input2;

    scanf_s("%d%d", &input1, &input2);
    if (input1 > 0 && input2 < 10)
        printf("%d", input1 + input2);

    return 0;
}
