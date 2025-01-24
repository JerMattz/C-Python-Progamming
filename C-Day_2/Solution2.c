// Write a program to find the frequency of each element in an array.
// int arr1[5] = {1, 4, 7, 9, 10}
// all numbers are always lesser than 10 
// arr[i] in range[0,9] for any arr[i] for any 0 <= i < n
// Tip: use an array as frequency counter

#include <stdio.h>

void findFrequencies(int arr[], int n) {
    int visited[n];

    for (int i = 0; i < n; i++) {
        visited[i] = 0; // Initialize all elements as unvisited
    }

    printf("Element | Frequency\n");
    printf("-------------------\n");

    for (int i = 0; i < n; i++) {
        if (visited[i] == 1) {
            // Skip already counted elements
            continue;
        }

        int count = 1; 
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicate as visited
            }
        }

        printf("%7d | %9d\n", arr[i], count);
    }
}

int main() {
    int arr[] = {1, 4, 7, 4, 10, 7, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    findFrequencies(arr, n); 

    return 0;
}


// #include <stdio.h>

// void findFrequencies(int arr[], int n) {
//     int freq[10] = {0}; // Frequency counter array initialized to 0

//     // Count frequencies
//     for (int i = 0; i < n; i++) {
//         freq[arr[i]]++; // Increment the count for each element
//     }

//     // Print frequencies
//     printf("Element | Frequency\n");
//     printf("-------------------\n");
//     for (int i = 0; i < 10; i++) {
//         if (freq[i] > 0) { // Print only if the element appears in the array
//             printf("%7d | %9d\n", i, freq[i]);
//         }
//     }
// }

// int main() {
//     int arr1[5] = {1, 4, 7, 9, 10};
//     int n = sizeof(arr1) / sizeof(arr1[0]);

//     findFrequencies(arr1, n); // Call the function

//     return 0;
// }
