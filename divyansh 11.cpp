#include <stdio.h>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print array elements with space
    }
    printf("\n");  // Newline after printing the array
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array
    
    printf("Original array: \n");
    printArray(arr, n);
    
    insertionSort(arr, n);  // Sort the array using insertion sort
    
    printf("Sorted array: \n");
    printArray(arr, n);  // Print the sorted array
    
    return 0;
}

