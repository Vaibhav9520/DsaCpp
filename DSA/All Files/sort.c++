#include <iostream>
using namespace std;

int main() {
    int k;
    cout<<"Enter the Number of element : ";
    cin>>k;
    int arr[k];
    int n = sizeof(arr) / sizeof(arr[0]); 
    int temp, j;
    cout<<"******************Enter Array****************************"<<endl;
    
    // Input from user;
    for (int i = 0; i < n; i++) {
        cin >> arr[i] ;
    }
    

    

    for (int i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = temp;
    }

    
    cout<<"********************Array after Sorting***********************"<<endl;
    // Printing the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

