#include <stdio.h>

int tribonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1 || n == 2)
        return 1;
    else
        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    printf("Tribonacci Sequence: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", tribonacci(i));
    }
    printf("\n");
    return 0;
}
