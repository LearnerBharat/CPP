#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int countWords(string str) {
    stringstream ss(str);
    string word;
    int count = 0;
    
    while (ss >> word)
        count++;
    
    return count;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    int numWords = countWords(input);
    cout << "Number of words in the string: " << numWords << endl;
    
    return 0;
}
