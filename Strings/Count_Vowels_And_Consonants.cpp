#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c); // Convert to lowercase to handle both cases
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void countVowelsAndConsonants(string str, int& vowels, int& consonants) {
    vowels = 0;
    consonants = 0;
    
    for (char c : str) {
        if (isalpha(c)) {
            if (isVowel(c))
                vowels++;
            else
                consonants++;
        }
    }
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    int vowels, consonants;
    countVowelsAndConsonants(input, vowels, consonants);
    
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    
    return 0;
}
