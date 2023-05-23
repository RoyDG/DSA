#include <stdio.h>

int subtract(int a, int b) {
    if (b == 0)
        return a;
    else
        return subtract(a - 1, b - 1);
}

int main() {
    int num1, num2;
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    int result = subtract(num1, num2);
    printf("Difference = %d\n", result);
    return 0;
}
