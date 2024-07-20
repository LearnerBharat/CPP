#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    if (n == 0) // base case
        return 0;
    else
        return n % 10 + sumOfDigits(n / 10); // recursive case
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << "Sum of digits of " << number << " is " << sumOfDigits(number) << endl;
    return 0;
}
