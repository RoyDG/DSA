//Iteration Method
#include <stdio.h>

int binarySearch(int arr[], int n, int x){
    int left = 0, right = n-1, mid;


    while (left < right){
        mid = (left+right)/2;
        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid] < x){
            left = mid + 1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

int main(void){
 int arr[] = { 2, 3, 4, 10, 40 };
 int n = sizeof(arr) / sizeof(arr[0]);
 int x = 2;
 int result = binarySearch(arr, n, x);

 (result == -1) ? printf("Element is not present")
    : printf("Element is present at index %d",result);
 return 0;
}
