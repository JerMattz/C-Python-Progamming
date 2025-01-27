// rotate a matrix by 90 degree
// // inmemory
// int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
// 1 2 3 
// 4 5 6
// 7 8 9
// output:
// 7 4 1
// 8 5 2
// 9 6 3

#include <stdio.h>
#define N 3

void printMatrix(int matrix[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[N][N] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int c[N][N];

    // Printing the original matrix
    printf("\nOriginal matrix:\n");
    printMatrix(a);

    // Transposing the matrix
    for (int i = 0; i < N; i++) {  // Note that the transpose switches rows and columns
        for (int j = 0; j < N; j++) {
            c[i][j] = a[j][i];
        }
    }

    // Reverse the matrix
    printf("\n90Deg of the matrix:\n");
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N /2; j++) {
            int temp = c[i][j];
            c[i][j] = c[i][ N-j-1];
            c[i][ N-j-1] = temp;
        }
    }
    printMatrix(c);

    return 0;
}
