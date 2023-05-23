#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

unsigned long long nPr(int n, int r) {
    if (r > n)
        return 0;
    else
        return factorial(n) / factorial(n - r);
}

int main() {
    int N, R;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Enter the value of R: ");
    scanf("%d", &R);
    unsigned long long result = nPr(N, R);
    printf("nPr value: %llu\n", result);
    return 0;
}
