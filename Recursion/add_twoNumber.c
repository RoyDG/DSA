#include <stdio.h>

int add(int a, int b) {
    if (b == 0)
        return a;
    else
        return add(a + 1, b - 1);
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int result = add(num1, num2);
    printf("Sum = %d\n", result);
    return 0;
}