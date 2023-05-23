#include <stdio.h>

void printNumbers(int n) {
    if (n > 0) {
        printf("%d ", n);
        printNumbers(n - 1);
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("Numbers from N to 1: ");
    printNumbers(N);
    printf("\n");
    return 0;
}
