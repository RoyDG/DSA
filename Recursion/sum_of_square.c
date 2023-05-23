#include <stdio.h>

int sumOfSquares(int n) {
    if (n == 1)
        return 1;
    else
        return (n * n) + sumOfSquares(n - 1);
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int result = sumOfSquares(N);
    printf("Sum of squares: %d\n", result);
    return 0;
}
