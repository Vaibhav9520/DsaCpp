#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++)
        if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        cout<<"Iterration "<<i+1<<": ";
        for(int k=0;k<n-1;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }
    
}
void insetionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j >=0 && key > j){
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1] = key;
        cout<<"Iterration "<<i<<": ";
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }

}

void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int mainpos = i;
        for(int j = 1;j<n;j++){
            if(arr[j] < arr[mainpos]){
                mainpos = j;   
            }
        }
        swap(arr[i],arr[mainpos]);
        cout<<"Iterration "<<i<<": ";
        for(int k=0;k<n;k++){
            cout<<arr[k]<<" ";
        }
        cout<<endl;
    }

}

int main(){
  int n;
  cout<<"Enter the size of Array: ";
  cin>>n;
  cout<<"Enter the Array elements: ";
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<<"Bubble Sort: "<<endl;
    bubblesort(arr,n);
    cout<<endl;
    cout<<"Insetion Sort: "<<endl;
    insetionsort(arr,n);
    cout<<endl;
    cout<<"Selection Sort: "<<endl;
    selectionsort(arr,n);
}