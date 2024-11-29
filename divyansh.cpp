#include<stdio.h>

// Function to swap two elements without using pointers
void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Pivot element
    int i = low - 1;        // Index of the smaller element
    
    // Traverse through all elements, compare each with pivot
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr, i, j);  // Swap elements
        }
    }
    
    // Swap the pivot element with the element at i+1 position
    swap(arr, i + 1, high);
    return i + 1;  // Return the partition index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Partition index
        
        quickSort(arr, low, pi - 1);  // Recursively sort the left subarray
        quickSort(arr, pi + 1, high); // Recursively sort the right subarray
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // Print array element
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements in the array
    
    printf("Original array: \n");
    printArray(arr, n);
    
    quickSort(arr, 0, n - 1);  // Sort the array using quicksort
    
    printf("Sorted array: \n");
    printArray(arr, n);  // Print the sorted array
    
    return 0;
}

