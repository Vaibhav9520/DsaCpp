// // // //Quick Sort
// // // #include<iostream>
// // // using namespace std;
// // // void swap(int arr[],int i,int j){
// // //     int temp = arr[i];
// // //     arr[i] = arr[j];
// // //     arr[j] = temp;
// // // }
// // // int partition(int arr[],int l,int r){
// // //     int pivot = arr[r];
// // //     int i = l-1;
// // //     for(int j=l;j<r;j++){
// // //         if(arr[j] < pivot){
// // //             i++;
// // //             swap(arr,i,j);
// // //         }
// // //     }
// // //     swap(arr,i+1,r);
// // //     return i+1;

// // // }

// // // void quickSort(int arr[],int l,int r){
// // //     if(l < r){
// // //         int pi = partition(arr,l,r);
// // //         quickSort(arr,l,pi-1);
// // //         quickSort(arr,pi+1,r);
// // //     }
// // // }
// // // int main(){
// // //     int n=5;
// // //     int arr[n] = {5,4,3,2,1};
// // //     cout<<"Array Before Sorting: ";
// // //     for(int i=0;i<n;i++){
// // //         cout<<arr[i]<<" ";
// // //     }cout<<endl;

// // //     quickSort(arr,0,4);

// // //     cout<<"Array After Sorting: ";
// // //     for(int i=0;i<n;i++){
// // //         cout<<arr[i]<<" ";
// // //     }cout<<endl;
// // //     return 0;
// // // }


// // //Merge Sort

// // #include<iostream>
// // using namespace std;
// // void merge(int arr[],int l,int mid,int r){  
// //     int n1 = mid-l+1;
// //     int n2 = r-mid;
// //     int a[n1];
// //     int b[n2];
// //     for(int i=0;i<n1;i++){
// //         a[i] = arr[l+i];
// //     }
// //     for(int i=0;i<n2;i++){
// //         b[i] = arr[mid+1+i];
// //     }

// //     int i=0;
// //     int j=0;
// //     int k=l;
// //     while(i<n1 && j<n2){
// //         if(a[i] < b[j]){
// //             arr[k] = a[i];
// //             k++;i++;
// //         }else{
// //             arr[k] = b[j];
// //             k++;j++;
// //         }
// //     }
// //     while(i<n1){
// //         arr[k] = a[i];
// //         k++;i++;
// //     }
// //     while(j<n2){
// //         arr[k] = b[i];
// //         k++;j++;
// //     }
// // }

// // void mergeSort(int arr[],int l,int r){
// //         if(l<r){
// //         int mid = l+(r-l) /2;
// //         mergeSort(arr,l,mid);
// //         mergeSort(arr,mid+1,r);

// //         merge(arr,l,mid,r);
// //         }
    
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
// //     return 0;
// // }





// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) : data(val), left(nullptr), right(nullptr) {}
// };

// Node* insert(Node* root, int data) {
//     if (root == nullptr) {
//         return new Node(data);
//     } else {
//         Node* cur = new Node(data);

//         if (root->left == nullptr) {
//             root->left = cur;
//         } else if (root->right == nullptr) {
//             root->right = cur;
//         } else {
//             root->left = insert(root->left, data);
//         }

//         return root;
//     }
// }

// void postOrder(Node* root) {
//     if (root != nullptr) {
//         postOrder(root->left);
//         postOrder(root->right);
//         cout << root->data << " ";
//     }
// }

// int main() {
//     Node* root = nullptr;
//     int n;
//     int data;

//     cin >> n;

//     while (n-- > 0) {
//         cin >> data;
//         root = insert(root, data);
//     }
//     postOrder(root);
//     return 0;
// }


#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void insertMaxHeap(priority_queue<int>& maxHeap, const vector<int>& scores) {
    for (int score : scores) {
        maxHeap.push(score);
    }
}

int main() {
    priority_queue<int> maxHeap;
    vector<int> scores;
    
    int score;
    while (cin >> score) {
        scores.push_back(score);
        if (cin.get() == '\n') {
            break;
        }
    }
    if (scores.size() > 100) {
        return 1;
    }
    insertMaxHeap(maxHeap, scores);
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    return 0;
}
