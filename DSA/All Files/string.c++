#include <iostream>
using namespace std;

void printLength(const char* str) {
    if (str == NULL) {
        cout << "Length of the string: 0" << endl;
    } else {
        int length = 0;
        while (str[length] != '\0') {
            length++;
        }
        cout << "Length of the string: " << length << endl;
    }
}

int main() {
    const char* nullPointer = NULL;
    printLength(nullPointer);

    char userInput[100]; 
    cin.getline(userInput, sizeof(userInput)); 

    printLength(userInput);

    return 0;
}
