#include<iostream>
using namespace std;

#define SIZE 100

int arr[SIZE],nge[SIZE] ,top = -1;

void fng(){
    if(top == -1){
        cout<<"Stack is Empty!"<<endl;
        return;
    }

    for(int i=0;i<=top;i++){
        nge[i] = -1;
      
    }
    
    for(int i=0;i<=top;i++){
        for(int j=i+1;j<=top;j++){
            if(arr[j] > arr[i]){
                nge[i] = arr[j];
                break;
            }
        }
    }

    for(int i=0;i<=top;i++){
        cout<<arr[i]<<" "<<nge[i]<<endl;
    }
    
    
}

int main(){
    int n;
    cin>>n;
    int value;
    for(int i=0;i<n;i++){
        cin>>value;
        arr[++top] = value;
    }
    fng();
    return 0;
}