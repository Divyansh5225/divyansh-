#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int swapped;

    // Traverse through all elements in the array
    for (i = 0; i < n-1; i++) {
        swapped = 0; // Reset swapped flag for each pass

        // Last i elements are already sorted, no need to check them
        for (j = 0; j < n-i-1; j++) {
            // Swap if the element is greater than the next element
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1; // Mark that a swap has occurred
            }
        }
        
        // If no elements were swapped, the array is sorted
        if (swapped == 0) {
            break;
        }
    }
}

// Function to print the array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    

    // Perform Bubble Sort
    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}

