// right rotate an array 
// int arr1[5] = {1, 4, 7, 9, 10}
// // Examples:
// rotate 1 time to right
// int arr1[5] = {10, 1, 4, 7, 9}
// rotate 2 time to right
// int arr1[5] = {9, 10, 1, 4, 7}

#include <stdio.h>

void rightRotate(int arr[], int n, int k) {
    // Normalize rotations in case k > n
    k = k % n;

    int temp[k];

    // Step 1: Copy the last k elements into the temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Shift the rest of the array to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Copy back the last k elements from temp to the beginning
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[5] = {1, 4, 7, 9, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    printf("Original array: ");
    printArray(arr1, n);

    int k = 1;
    rightRotate(arr1, n, k);

    printf("Array after %d right rotations: ", k);
    printArray(arr1, n);

    return 0;
}
