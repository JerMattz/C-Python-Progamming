// Write a program to merge two sorted arrays into a third sorted array.
// int arr1[5] = {3, 4, 7, 9, 10}
// int arr2[5] = {1, 2, 5, 6, 8}
// output:
// [1,2,3,4,5,6,7,8,9,10]

#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {

    int arr1[5] = {3, 4, 7, 9, 10};
    int arr2[5] = {1, 2, 5, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[10];

    for (int i = 0; i < 5; i++) {
        arr3[i] = arr1[i];
        arr3[i+5] = arr2[i];
    }

    bubbleSort(arr3, 10);

    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }

    return 0;
}


// #include <stdio.h>

// void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
//     int i = 0, j = 0, k = 0;

//     // Merge elements while both arrays have remaining elements
//     while (i < n1 && j < n2) {
//         if (arr1[i] < arr2[j]) {
//             merged[k++] = arr1[i++];  // Add arr1[i] to merged and increment i, k
//         } else {
//             merged[k++] = arr2[j++];  // Add arr2[j] to merged and increment j, k
//         }
//     }

//     // Copy remaining elements from arr1, if any
//     while (i < n1) {
//         merged[k++] = arr1[i++];
//     }

//     // Copy remaining elements from arr2, if any
//     while (j < n2) {
//         merged[k++] = arr2[j++];
//     }
// }

// int main() {
//     int arr1[5] = {3, 4, 7, 9, 10};
//     int arr2[5] = {1, 2, 5, 6, 8};
//     int n1 = sizeof(arr1) / sizeof(arr1[0]);
//     int n2 = sizeof(arr2) / sizeof(arr2[0]);
//     int merged[n1 + n2]; // Array to hold the merged result

//     mergeArrays(arr1, n1, arr2, n2, merged);

//     // Print the merged array
//     printf("Merged Array:\n");
//     for (int i = 0; i < n1 + n2; i++) {
//         printf("%d ", merged[i]);
//     }
//     printf("\n");

//     return 0;
// }
