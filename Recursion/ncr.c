#include <stdio.h>

int combination(int n, int r) {
    if (r == 0 || r == n)
        return 1;
    else
        return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main() {
    int n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    int result = combination(n, r);
    printf("Combination (nCr) = %d\n", result);
    return 0;
}