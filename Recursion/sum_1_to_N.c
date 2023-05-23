#include <stdio.h>

int sumNumbers(int n) {
    if (n == 1)
        return 1;
    else
        return n + sumNumbers(n - 1);
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int result = sumNumbers(N);
    printf("Sum of numbers from 1 to %d: %d\n", N, result);
    return 0;
}
