// find the size of an array using pointers
#include <stdio.h>

int main() {
    int arr[] = {10,9,8,7,6,5};

    // using sizeof()
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    printf("%d \n", arrSize);
    
    int* start = &arr[0];
    int* end = &arr[5];
    printf("%d \n", sizeof(int));
    printf("%d %d %d \n", start, end, end - start);
    printf("Size = %d \n", (end - start)+1);
}
