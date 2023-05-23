#include <stdio.h>

int sumOfCubes(int n) {
    if (n == 1)
        return 1;
    else
        return (n * n * n) + sumOfCubes(n - 1);
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    int result = sumOfCubes(N);
    printf("Sum of cubes: %d\n", result);
    return 0;
}
