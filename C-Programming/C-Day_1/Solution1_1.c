// bubble sort using c
#include <stdbool.h>
#include <stdio.h>

int swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int bubbleSort(int arr[], int n) {
    bool swapped;
    
    for(int i = 0; i <= n-1; i++) {
        swapped = false;

        for(int j = 0; j <= n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {10,9,8,7,6,5};
    int n = sizeof(arr) / sizeof(arr[0]); // 24 / 4 = 6

    for (int i = 0; i <= 6; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

   bubbleSort(arr, n);
    for (int i = 0; i <= 6; i++) {
        printf("%d ", arr[i]);
    }
}
