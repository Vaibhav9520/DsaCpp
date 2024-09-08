#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reverseSentence(const string& sentence) {
    string reversed;
    size_t start = 0;
    for (size_t i = sentence.length() - 1; i > 0; i--) {
        if (sentence[i] == ' ') {
            reversed += sentence.substr(i + 1, start - i) + ' ';
            start = i + 1;
        }
    }
    reversed += sentence.substr(0, start);
    return reversed;
}

void extractVowelsAndConsonants(const string& sentence, string& vowels, string& consonants) {
    for (char c : sentence) {
        if (isalpha(c)) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                vowels += c;
            } else {
                consonants += c;
            }
        }
    }
}

int main() {
    string sentence, reversed, vowels, consonants;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    reversed = reverseSentence(sentence);

    extractVowelsAndConsonants(sentence, vowels, consonants);

 
    cout << "Reversed sentence: " << reversed << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}