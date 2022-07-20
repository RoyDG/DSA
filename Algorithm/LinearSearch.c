#include <stdio.h>
// Linear search

int main()
{

    int a[] = {-4, 2, -22, 9, 10, 18};
    int n, i;
    printf("Enter number to find: ");
    scanf("%d", &n);
    int size = sizeof a / sizeof a[0];

    for (i = 0; i < size; i++)
    {
        if (a[i] == n)
        {
            printf("Item Found at index: %d\n", i);
            return 0;
        }
    }
    printf("Item not found.\n");
    return 0;
}
