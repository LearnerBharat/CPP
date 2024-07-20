#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) // base case
        return 1;
    else
        return n * factorial(n - 1); // recursive case
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
