// #include<iostream>
// using namespace std;

// int main(){
//     int m;
//     cout<<"How many Array you want: "<<endl;
//     cin>>m;
//     for(int j=0;j<=m;j++){

//         int n;
//         cout<<"Number element you want in Array: "<<m<<endl;
//         cin>>n;
//         int arr[n];
//         cout<<"***********Enter the Array element***********"<<endl;
//         for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
// }

// cout<<"--------------Array---------------"<<endl;
// //OUTPUT
// for(int j=0;j<=m;j++){
//         int arr[m];
        
//         for(int i=0;i<=m;i++){
//         cout<<arr[i]<<" ";
//     }
// }





// }
#include<iostream>
using namespace std;

int main() {
    int m;
    cout << "How many Arrays you want: " << endl;
    cin >> m;

    for (int j = 0; j < m; j++) {  // Changed <= to < to iterate m times

        int n;
        cout << "Number of elements you want in Array " << j + 1 << ": " << endl; // Added j + 1 to show array number
        cin >> n;
        int arr[n];
        cout << "*********** Enter the Array elements ***********" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "-------------- Array " << j + 1 << " ---------------" << endl;
        // OUTPUT
        for (int i = 0; i < n; i++) {  // Changed m to n
            cout << arr[i] << " ";
        }
        cout << endl;  // Added a new line for formatting
    }

    return 0;
}
