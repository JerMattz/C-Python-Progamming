#include <stdio.h>

int main() {
    int arr[] = {10, 9, 8, 7, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int* ptr = arr; 

    printf("Array elements using pointer:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }

    printf("\n");

    printf("Array elements using pointer increment:\n");
    for (int* p = arr; p < arr + n; p++) {
        printf("%d ", *p); 
    }

    return 0;
}
