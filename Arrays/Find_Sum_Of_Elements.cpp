#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i)
        sum += arr[i];
    return sum;
}

int main() {
    int n;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int totalSum = sumArray(arr, n);
    
    cout << "Sum of elements in the array: " << totalSum << endl;
    
    return 0;
}
