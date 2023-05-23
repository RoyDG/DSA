#include <stdio.h>

int isPalindrome(int num, int temp) {
    if (num == 0)
        return temp;
    else {
        temp = temp * 10 + num % 10;
        return isPalindrome(num / 10, temp);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int reversed = isPalindrome(number, 0);
    if (number == reversed)
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);
    return 0;
}
