#include <stdio.h>

void printDigits(int n) {
    if (n < 10) {
        printf("%d ", n);
        return;
    }
    printDigits(n / 10);
    printf("%d ", n % 10);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Digits of the number: ");
    printDigits(number);
    printf("\n");
    return 0;
}
