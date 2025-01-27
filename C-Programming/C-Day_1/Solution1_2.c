// reverse an array using swap concept
#include <stdio.h>

int swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int reverse(int arr[], int n) {
    for(int i = 0; i <= n/2; i++) {
        swap(&arr[i], &arr[n-i-1]);
    }
}

int main() {
    int arr[] = {10,9,8,7,6,5};
    int n = sizeof(arr) / sizeof(arr[0]); 

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    reverse(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
