#include <stdio.h>

void printName() {
    printf("Your Name\n");
}

void printNameRecursively(int n) {
    if (n > 0) {
        printNameRecursively(n - 1);
        printName();
    }
}

int main() {
    int repetitions;
    printf("Enter the number of times to print the name: ");
    scanf("%d", &repetitions);
    printNameRecursively(repetitions);
    return 0;
}
