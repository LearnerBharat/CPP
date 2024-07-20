#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool areAnagrams(string str1, string str2) {
    // Sort both strings
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    
    // Compare sorted strings
    return (str1 == str2);
}

int main() {
    string str1, str2;
    cout << "Enter two strings: ";
    cin >> str1 >> str2;
    
    if (areAnagrams(str1, str2))
        cout << str1 << " and " << str2 << " are anagrams." << endl;
    else
        cout << str1 << " and " << str2 << " are not anagrams." << endl;
    
    return 0;
}
