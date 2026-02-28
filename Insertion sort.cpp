#include <iostream>

using namespace std;

// Function to perform insertion sort on an array
void insertionSort(int arr[], int n) {
    // i starts from 1 ? second element
    // The part from 0 to i-1 is considered already sorted
    for (int i = 1; i < n; i++) {
        
        // The element we want to insert into the sorted portion
        int key = arr[i];
        
        // Start comparing from the element just before our current one
        int j = i - 1;

        // Move larger elements one position to the right
        // Continue while we haven't gone past index 0 AND current element > key
        while (j >= 0 && arr[j] > key) {
            // Shift the larger element right
            arr[j + 1] = arr[j];
            // Move one position left
            j--;
        }
        
        // Place key in its correct sorted position
        arr[j + 1] = key;
    }
}

//  function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    //  array being sorted
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    
    // Calculate size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    // Sort the array
    insertionSort(arr, n);

    cout << "Sorted array:   ";
    printArray(arr, n);

    return 0;
}