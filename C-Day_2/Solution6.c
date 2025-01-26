// transpose of a matrix:
// // inmemory is hard
// // extra
// input:
// int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
// 1 2 3 
// 4 5 6
// 7 8 9
// output:
// 1 4 7
// 2 5 8
// 3 6 9

#include <stdio.h>

int main() {
    int a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int c[3][3];
    int m = 3, n = 3;

    // Printing the original matrix
    printf("\nOriginal matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    // Transposing the matrix
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < n; i++) {  // Note that the transpose switches rows and columns
        for (int j = 0; j < m; j++) {
            c[i][j] = a[j][i];
            printf("\t%d", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
