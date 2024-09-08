// // #include <iostream>
// // #include <stack>
// // #include <sstream>
// // using namespace std;

// // int main() {
// //     string input;
// //     getline(cin, input); // Read the input line with spaces

// //     stringstream ss(input);
// //     string token;
// //     stack<int> s;

// //     while (ss >> token) { // Split the input into tokens
// //         if (isdigit(token[0])) { // Check if the token is a digit
// //             int num = stoi(token);
// //             s.push(num);
// //         } else {
// //             if (s.size() < 2) {
// //                 cout << "Error: Malformed input" << endl;
// //                 return 1; // Exit with an error code
// //             }
// //             int b = s.top();
// //             s.pop();
// //             int a = s.top();
// //             s.pop();
// //             switch (token[0]) {
// //                 case '+': {
// //                     int c = a + b;
// //                     s.push(c);
// //                     break;
// //                 }
// //                 case '-': {
// //                     int c = a - b;
// //                     s.push(c);
// //                     break;
// //                 }
// //                 case '*': {
// //                     int c = a * b;
// //                     s.push(c);
// //                     break;
// //                 }
// //                 case '/': {
// //                     if (b != 0) {
// //                         int c = a / b;
// //                         s.push(c);
// //                     } else {
// //                         cout << "Error: Division by zero" << endl;
// //                         return 1; // Exit with an error code
// //                     }
// //                     break;
// //                 }
// //                 default: {
// //                     cout << "Error: Invalid operator" << endl;
// //                     return 1; // Exit with an error code
// //                 }
// //             }
// //         }
// //     }

// //     if (s.size() == 1) {
// //         cout << "The result is: " << s.top() << endl;
// //     } else {
// //         cout << "Error: Malformed input" << endl;
// //         return 1; // Exit with an error code
// //     }

// //     return 0;
// // }
// #include <iostream>
// #include <stack>
// #include <sstream>
// using namespace std;

// int applyOperation(int a, int b, char op) {
//     switch (op) {
//         case '+':
//             return a + b;
//         case '-':
//             return a - b;
//         case '*':
//             return a * b;
//         case '/':
//             if (b != 0) {
//                 return a / b;
//             } else {
//                 cout << "Error: Division by zero" << endl;
//                 exit(1);
//             }
//         default:
//             cout << "Error: Invalid operator" << endl;
//             exit(1);
//     }
// }

// int main() {
//     string input;
//     getline(cin, input); // Read the input line with spaces

//     stringstream ss(input);
//     string token;
//     stack<int> operandStack;
//     stack<char> operatorStack;

//     while (ss >> token) { // Split the input into tokens
//         if (isdigit(token[0])) { // Check if the token is a digit
//             int num = stoi(token);
//             operandStack.push(num);
//         } else if (token == "+" || token == "-") {
//             while (!operatorStack.empty() && (operatorStack.top() == '+' || operatorStack.top() == '-' ||
//                    operatorStack.top() == '*' || operatorStack.top() == '/')) {
//                 char op = operatorStack.top();
//                 operatorStack.pop();
//                 int b = operandStack.top();
//                 operandStack.pop();
//                 int a = operandStack.top();
//                 operandStack.pop();
//                 operandStack.push(applyOperation(a, b, op));
//             }
//             operatorStack.push(token[0]);
//         } else if (token == "*" || token == "/") {
//             while (!operatorStack.empty() && (operatorStack.top() == '*' || operatorStack.top() == '/')) {
//                 char op = operatorStack.top();
//                 operatorStack.pop();
//                 int b = operandStack.top();
//                 operandStack.pop();
//                 int a = operandStack.top();
//                 operandStack.pop();
//                 operandStack.push(applyOperation(a, b, op));
//             }
//             operatorStack.push(token[0]);
//         }
//     }

//     while (!operatorStack.empty()) {
//         char op = operatorStack.top();
//         operatorStack.pop();
//         int b = operandStack.top();
//         operandStack.pop();
//         int a = operandStack.top();
//         operandStack.pop();
//         operandStack.push(applyOperation(a, b, op));
//     }

//     if (!operandStack.empty()) {
//         cout << "The result is: " << operandStack.top() << endl;
//     } else {
//         cout << "Error: Malformed input" << endl;
//         return 1; // Exit with an error code
//     }

//     return 0;
// }

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

// Function to generate a random player name
string generateRandomName() {
    static const char charset[] =
        "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const int maxNameLength = 32;
    string name;
    int length = rand() % maxNameLength + 1;
    for (int i = 0; i < length; ++i) {
        name += charset[rand() % (sizeof(charset) - 1)];
    }
    return name;
}

int main() {
    srand(static_cast<unsigned>(time(nullptr)));

    ofstream outFile;
    ifstream inFile;
    const char* fileName = "players.txt";

    int choice;
    cout << "Enter your choice (1: Create, 2: Append, 3: Delete, 4: Read): ";
    cin >> choice;

    try {
        switch (choice) {
            case 1: {
            
                outFile.open(fileName);
                if (!outFile) {
                    throw "Unable to open file for creating";
                }

                cout << "Creating a new players list" << endl;
                int numPlayers;
                cout << "Enter the number of players to add: ";
                cin >> numPlayers;
                for (int i = 0; i < numPlayers; ++i) {
                    outFile << generateRandomName() << endl;
                }
                outFile.close();
                break;
            }
            case 2: {
            
                outFile.open(fileName, ios::app);
                if (!outFile) {
                    throw "Unable to open file for appending";
                }

                cout << "Adding more players to the list" << endl;
                int numPlayers;
                cout << "Enter the number of players to add: ";
                cin >> numPlayers;
                for (int i = 0; i < numPlayers; ++i) {
                    outFile << generateRandomName() << endl;
                }
                outFile.close();
                break;
            }
            case 3: {
                // Delete Players
                if (remove(fileName) != 0) {
                    throw "Error deleting the players list which has been setup";
                }
                cout << "Deleting the player list which has been setup" << endl;
                break;
            }
            case 4: {
                // Read Players
                inFile.open(fileName);
                if (!inFile) {
                    throw "Unable to open file for reading";
                }

                cout << "Printing the players list" << endl;
                string player;
                while (getline(inFile, player)) {
                    cout << player << endl;
                }
                inFile.close();
                break;
            }
            default:
                cout << "Invalid choice" << endl;
        }
    } catch (const char* errorMessage) {
        cerr << errorMessage << " " << fileName << endl;
    }

    return 0;
}