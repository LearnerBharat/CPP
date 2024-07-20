#include <iostream>
#include <string>
using namespace std;

int countSubstringOccurrences(string s, string substr) {
    int count = 0;
    size_t pos = s.find(substr);
    while (pos != string::npos) {
        count++;
        pos = s.find(substr, pos + 1);
    }
    return count;
}

int main() {
    string s = "abababab";
    string substr = "aba";
    
    int occurrences = countSubstringOccurrences(s, substr);
    cout << "Number of occurrences of '" << substr << "' in '" << s << "': " << occurrences << endl;
    
    return 0;
}
