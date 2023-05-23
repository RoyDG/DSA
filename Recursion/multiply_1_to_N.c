#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    unsigned long long result = factorial(N);
    printf("Factorial of %d: %llu\n", N, result);
    return 0;
}
