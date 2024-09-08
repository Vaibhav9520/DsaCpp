#include<iostream>
using namespace std;

int main() {
    int n;
    int element;
    cout<<"Enter the Number of element"<<endl;
    cin>>element;
    int arr[element];
    cout<<"--------------- Enter the element----------------"<<endl;
    // Input
    for(int i=0;i<element;i++){
        cin>>arr[i];
    }
    
    //------------- for index--------------------------
    cout << "Enter the key: ";
    cin >> n;
    int LOC = -1;
    int start = 0;
    int end = sizeof(arr) - 1; 
     
     // ---------------for binary search---------------
    while (start <= end) {
        int mid = (start + end) / 2;
        if (n == arr[mid]) {
            LOC = mid;
            break;  
        } else if (n > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    // Printing
    if (LOC == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Index of element is: " << LOC << endl;
    }

    return 0; 
}
