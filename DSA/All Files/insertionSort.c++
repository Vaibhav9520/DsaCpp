
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the Number of elements: ";
    cin >> size;
    int arr[size];

    int n = size; // Number of elements in the array
    int temp, j;
    cout << "-------------------------------Enter Array-----------------" << endl;

    // Input from user;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //------------------Insertion--------------------------------------

    int pos, num;
    cout << "Enter position: ";
    cin >> pos;
    cout << "Enter element: ";
    cin >> num;
    for (int i = n - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = num;

    // Printing the array before sorting

    cout << "\n---------------------Array before Sorting------------------" << endl;

    for (int i = 0; i < n + 1; i++) {
        cout << arr[i] << " ";
    }

    for (int i = 1; i < n + 1; i++) {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }

    cout << "\n------------------------Array after Sorting------------------" << endl;
    
    // Printing the sorted array
    for (int i = 0; i < n + 1; i++) {
        cout << arr[i] << " ";
    }


    return 0;
}

