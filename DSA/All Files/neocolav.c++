// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int size1, size2;
//     cin >> size1;
//     string arr1[size1];
//     for (int i = 0; i < size1; ++i) {
//         cin >> arr1[i];
//     }

//     cin >> size2;
//     string arr2[size2];
//     for (int i = 0; i < size2; ++i) {
//         cin >> arr2[i];
//     }

//     // Generate and print unique combinations
//     for (int i = 0; i < size1; ++i) {
//         for (int j = 0; j < size2; ++j) {
//             cout << arr1[i] << arr2[j] << " ";
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int size;
    cin >> size;

    double closingPrices[100];
    for (int i = 0; i < size; ++i) {
        cin >> closingPrices[i];
    }

    // Filter out negative closing prices
    int newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (closingPrices[i] >= 0) {
            closingPrices[newSize++] = closingPrices[i];
        }
    }

    // Display the updated array of positive closing prices
    for (int i = 0; i < newSize; ++i) {
        cout << fixed << setprecision(2) << closingPrices[i] << " ";
    }

    return 0;
}