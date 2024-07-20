#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int row=0; row < n; row++) {
        for(int col=0; col<=row; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the no. of rows: ";
    cin >> n;

    printPattern(n);
    return 0;
}