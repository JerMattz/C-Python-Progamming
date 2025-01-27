// write a swap function using pointer
#include <stdio.h>

int swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {10,9,8,7,6,5};

    for (int i = 0; i <= 6; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    swap(&arr[0], &arr[4]);
    for (int i = 0; i <= 6; i++) {
        printf("%d ", arr[i]);
    }
}
