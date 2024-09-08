#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter Row: ";
    cin>>row;
    int col;
    cout<<"Enter Coloum: ";
    cin>>col;
    int heig;
    cout<<"Enter Height: ";
    cin>>heig;
    int arr[row][col][heig];
    cout<<"Enter the elements: ";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            for(int k=0;k<heig;k++){
                cin>>arr[i][j][k];
            }

        }
    }

    //print
    cout<<"Matrix : "<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            for(int k=0;k<heig;k++){
                cout<<arr[i][j][k]<<" ";
            }
        }
        cout<<endl;
    }
}