#include<iostream>
using namespace std;

void printPattern(int n) {
    for(int row = 1; row <= n; row++) {
        for(int col = 1; col <= row; col++) {
            cout << col << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    printPattern(n);
    return 0;
}
