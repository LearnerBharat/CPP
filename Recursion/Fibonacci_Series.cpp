#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) // base cases
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); // recursive case
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << "Fibonacci number at position " << number << " is " << fibonacci(number) << endl;
    return 0;
}
