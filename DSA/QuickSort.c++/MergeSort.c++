#include<iostream>
using namespace std;

void merge(int arr[],int si,int mid,int ei){
    int n1 = mid - si + 1;
    int n2 = ei -mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i] = arr[si + i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[mid + 1 + i];
    }

    int i=0;
    int j=0;
    int k=si;
    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            k++;i++;
        }else{
            arr[k] = b[j];
            k++;j++;
        }
    }
    while(i < n1){
        arr[k] = a[i];
        k++;i++;
    }
    while(j < n2){
        arr[k] = b[j];
        k++;j++;
    }
}

void mergeSort(int arr[],int si,int ei){
    if(si >= ei){
        return;
    }
    int mid  = si +(ei - si)/2;
    mergeSort(arr,si,mid);
    mergeSort(arr,mid+1,ei);

    merge(arr,si,mid,ei);
}
int main(){
    int n = 5;
    int arr[n] = {5,4,3,2,1};
    cout<<"Aray before sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    mergeSort(arr,0,4);
    cout<<"Array After Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}