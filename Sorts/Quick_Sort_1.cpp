#include <iostream>

using namespace std;

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function to place pivot element at its correct position
int partition(int* arr, int start, int end) {
    int pivot = arr[end];
    int i = (start - 1);

    for (int j = start; j <= end - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[end]);
    return (i + 1);
}

// QuickSort function using recursion
void quickSort(int* arr, int start, int end) {
    if (start < end) {
        int pi = partition(arr, start, end);

        // Recursively sort elements before and after partition
        quickSort(arr, start, pi - 1);
        quickSort(arr, pi + 1, end);
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Perform quicksort
    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Free dynamically allocated memory
    delete[] arr;

    return 0;
}
