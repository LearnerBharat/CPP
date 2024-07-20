/* Patterns - Nested Loops

1. For the outer loop, count the no. of rows/lines.
2. For the inner loop, focus on the columns and connect them somehow to rows.
3. Print whatever you are printing inside the inner loop.
4. Observe symmetry.*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    for(int row=0; row<n; row++) {
        for(int col=0; col<n; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}