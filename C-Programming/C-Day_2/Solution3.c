// Shift All Zeros to the End of the Array
// int arr[5] = {0,1,0,1,0}
// // after moving the zeros
// arr[5] = {0,0,0,1,1}

#include <stdio.h>

int main() {
    int arr[5] = {0,1,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] != 0) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}
