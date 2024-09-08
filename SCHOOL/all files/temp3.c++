// // #include<iostream>
// // using namespace std;

// // void merge(int arr[],int l,int mid,int r){
// //     int n1 = mid-l+1;
// //     int n2 = r - mid;
// //     int a[n1];
// //     int b[n2];
// //     for(int i=0;i<n1;i++){
// //         a[i] = arr[l+i];
// //     }
// //     for(int i=0;i<n2;i++){
// //         b[i] = arr[mid+i+1];
// //     }
// //     int i=0;
// //     int j=0;
// //     int k=l;
// //     while(i<n1 && j<n2){
// //         if(a[i] < b[j]){
// //             arr[k] = a[i];
// //             k++;i++;
// //         }
// //         else{
// //             arr[k] = b[j];
// //             k++;j++;
// //         }
// //     }
// //     while(i < n1){
// //         arr[k] = a[i];
// //         k++;i++;
// //     }
// //     while(j < n2){
// //         arr[k] = b[j];
// //         k++;j++;
// //     }
// // }

// // void mergeSort(int arr[],int l,int r){
// //     if(l<r){
// //         int mid = l + (r-l)/2;
// //         mergeSort(arr,l,mid);
// //         mergeSort(arr,mid+1,r);
// //         merge(arr,l,mid,r);
// //     }
// // }

// // int main(){
// //     int n=5;
// //     int arr[n] = {5,4,3,2,1};
// //     cout<<"Array Before Sorting: ";
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }cout<<endl;

// //     mergeSort(arr,0,4);
// //     cout<<"Array After Sorting: ";
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }cout<<endl;
// // }

// // #include<iostream>
// // using namespace std;
// // void swap(int arr[],int i,int j){
// //     int temp = arr[i];
// //     arr[i] = arr[j];
// //     arr[j] = temp;
// // }
// // int partation(int arr[],int l,int r){
// //     int pivot = arr[r];
// //     int i = l-1;
// //     for(int j=l;j<r;j++){
// //         if(arr[j] < pivot){
// //             i++;
// //             swap(arr,i,j);
// //         }
// //     }
// //     swap(arr,i+1,r);
// //     return i+1;
// // }
// // void quickSort(int arr[],int l,int r){
// //     if(l<r){
// //         int pi = partation(arr,l,r);
// //         quickSort(arr,l,pi-1);
// //         quickSort(arr,pi+1,r);
// //     }
// // }

// // int main(){
// //     int n=5;
// //     int arr[n] = {5,4,3,2,1};
// //     cout<<"Array Before Sorting: ";
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }cout<<endl;

// //     quickSort(arr,0,4);
// //     cout<<"Array After Sorting: ";
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }cout<<endl;
// // }

// // #include<iostream>
// // using namespace std;
// // void swap(int arr[],int i,int j){
// //     int temp = arr[i];
// //     arr[i] = arr[j];
// //     arr[j] = temp;
// // }
// // int partitation(int arr[],int l,int r){
// //     int pivot = arr[r];
// //     int i=l-1;
// //     for(int j=l;j<r;j++){
// //         if(arr[j] < pivot){
// //             i++;
// //             swap(arr,i,j);
// //         }
// //     }
// //     swap(arr,i+1,r);
// //     return i+1;
// // }
// // void quickSort(int arr[],int l,int r){
// //     if(l<r){
// //         int pi = partitation(arr,l,r);
// //         quickSort(arr,l,pi-1);
// //         quickSort(arr,pi+1,r);
// //     }
// // }

// // int main(){
// //     int n=5;
// //     int arr[n] = {5,4,3,2,1};
// //     cout<<"Array Before Sorting: ";
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }cout<<endl;

// //     quickSort(arr,0,4);
// //     cout<<"Array After Sorting: ";
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }cout<<endl;
// // }

// #include<iostream>
// using namespace std;

// void merge(int arr[],int l,int mid,int r){
//     int n1 = mid-l+1;
//     int n2 = r-mid;
//     int a[n1];
//     int b[n2];
//     for(int i=0;i<n1;i++){
//         a[i] = arr[l+i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i] = arr[mid+i+1];
//     }
//     int i=0;
//     int j=0;
//     int k=l;
//     while(i<n1 && j<n2){
//         if(a[i] < b[j]){
//             arr[k] = a[i];
//             k++;i++;
//         }else{
//             arr[k] = b[j];
//             k++;j++;
//         }
//     }
//     while(i<n1){
//         arr[k] = a[i];
//         k++;i++;
//     }
//     while(j<n2){
//         arr[k] = b[j];
//         k++;j++;
//     }
// }
// void mergeSort(int arr[],int n,int l,int r){
//     if(n % 2 != 0){
//         int mid = l+(r-l)/2;
//         mergeSort(arr,n,l,mid);
//         mergeSort(arr,n,mid+1,r);

//         merge(arr,l,mid,r);
//     }
// }

// int main(){
//     int n=5;
//     int arr[n] = {5,4,3,2,1};
//     cout<<"Array Before Sorting: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;

//     mergeSort(arr,n,0,4);
//     cout<<"Array After Sorting: ";
//     for(int i=0;i<n;i++){
//         if(arr[i] % 2 != 0){
//         cout<<arr[i]<<" ";
//         }
//     }cout<<endl;
// }


// // #include <iostream>
// // using namespace std;

// // void merge(int arr[], int left[], int left_size, int right[], int right_size) {
// //     int i = 0, j = 0, k = 0;

// //     while (i < left_size && j < right_size) {
// //         if (left[i] < right[j]) {
// //             arr[k++] = left[i++];
// //         } else {
// //             arr[k++] = right[j++];
// //         }
// //     }

// //     while (i < left_size) {
// //         arr[k++] = left[i++];
// //     }

// //     while (j < right_size) {
// //         arr[k++] = right[j++];
// //     }
// // }

// // void mergeSortOdd(int arr[], int n) {
// //     if (n > 1) {
// //         int mid = n / 2;
// //         int left[mid];
// //         int right[n - mid];

// //         for (int i = 0; i < mid; i++) {
// //             left[i] = arr[i];
// //         }
// //         for (int i = mid; i < n; i++) {
// //             right[i - mid] = arr[i];
// //         }

// //         mergeSortOdd(left, mid);
// //         mergeSortOdd(right, n - mid);

// //         merge(arr, left, mid, right, n - mid);
// //     }
// // }

// // int main() {
// //     int n;
// //     cin>>n;

    
// //     int arr[n];
// //     for (int i = 0; i < n; i++) {
// //         cin>>arr[i];
// //     }

// //     int oddCount = 0;
// //     for (int i = 0; i < n; i++) {
// //         if (arr[i] % 2 != 0) {
// //             oddCount++;
// //         }
// //     }

// //     if (oddCount == 0) {
// //         printf("None");
// //     } else {
// //         mergeSortOdd(arr, n);
// //         for (int i = 0; i < n; i++) {
// //             if (arr[i] % 2 != 0) {
// //                cout<<arr[i]<<" ";
// //             }
// //         }
// //     }

// //     return 0;
// // }


#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

void printArray(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << fixed << setprecision(1) << arr[i] << " ";
    }
}

int partition(float arr[], int low, int high) {
    float pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] > pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(float arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int N;
    cin >> N;
    float marks[N];
    for (int i = 0; i < N; i++) {
        cin >> marks[i];
    }

    quickSort(marks, 0, N - 1);

    printArray(marks, N);

    return 0;
}