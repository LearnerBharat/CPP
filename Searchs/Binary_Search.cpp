#include <iostream>
#include <vector>
#include <algorithm> // for std::sort

using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Return the index of the target element
        } else if (arr[mid] < target) {
            left = mid + 1; // Ignore the left half
        } else {
            right = mid - 1; // Ignore the right half
        }
    }

    return -1; // Return -1 if the target is not found
}

int main() {
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    // Create a vector to store elements
    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target element to search for: ";
    cin >> target;

    // Sort the array before performing binary search
    sort(arr.begin(), arr.end());

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
