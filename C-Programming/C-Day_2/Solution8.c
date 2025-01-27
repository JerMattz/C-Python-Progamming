// create a 2D array find the maximum element
// total sum, rowwise and column wise sum
// int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

#include <stdio.h>

int main() {
    
    int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
         
    // Maximum element
    int max = arr[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    
    // Total sum
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }
    
    printf("Maximum element of the matrix is: %d \n", max);
    printf("Total sum of the matrix is: %d \n", sum);
    
     printf("\n");
    
    // Row sum
    printf("Row wise sum \n");
    int rowSum = 0;
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum += arr[i][j];
        }
        printf("%d \n", rowSum);
    }
    
    printf("\n");
    
    // Column sum
    printf("Column wise sum \n");
    int colSum = 0;
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            colSum += arr[j][i];
        }
        printf("%d \n", colSum);
    }

    return 0;
}
