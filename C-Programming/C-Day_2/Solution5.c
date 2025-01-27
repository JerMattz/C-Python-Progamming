// find the missing no in an array of positive numbers
// int arr[5] = {1, 2, 3, 5, 6}
// missing number is 4 here

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n = arr[size - 1];
    int sum1 = n*(n+1)/2;
    int sum2 = 0;

    // printf("%d \n", n);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        sum2 += arr[i];
    }

    printf("\n");

    printf("Missing number is: %d", sum1 - sum2);

    return 0;
}
