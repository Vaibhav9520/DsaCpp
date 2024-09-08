// #include<bits\stdc++.h>
// using namespace std;
// void quicSort(int arr[]){
//     int n = sizeof(arr);
//     for(int i=0;i<n;i++){
//         int pivot = arr[0];
//         int start = arr[0];
//         int end = arr[n-1];
//         while(start <= pivot){
//             start++;
//         }
//         while(end > pivot){
//             end--;
//         }
//         swap(start,end);
//         swap(pivot,end);
//     }
// }

// int main(){
//     int arr[8] = {36,51,16,26,81,21,91,46};
//     quicSort(arr);
//     for(int i=0;i<sizeof(arr);i++){
//         cout<<arr[i]<<" ";
//     }
// }


#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int lb, int ub) {
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start < end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end) {
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[lb],arr[end]);
    return end;  
}

void quickSort(int arr[],int lb,int ub) {
    if(lb<ub){
        int loc = partition(arr,lb,ub);
        quickSort(arr,lb,loc-1);
        quickSort(arr,loc+1,ub);
    }
}

int main() {
    int arr[8]={36,51,16,26,81,21,91,46};
    int n=sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    cout<<"Array after Quick Sort: ";
    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
