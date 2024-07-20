#include <iostream>
using namespace std;

int power(int x, int y) {
    if (y == 0) // base case
        return 1;
    else
        return x * power(x, y - 1); // recursive case
}

int main() {
    int base, exponent;
    cout << "Enter base and exponent: ";
    cin >> base >> exponent;
    cout << base << " raised to the power " << exponent << " is " << power(base, exponent) << endl;
    return 0;
}
