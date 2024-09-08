// // // // // #include<iostream>
// // // // // using namespace std;
// // // // // int main(){
// // // // //     int n;
// // // // //     cin>>n;
// // // // //     int arr[n];
// // // // //     for(int i=0;i<n;i++){
// // // // //         cin>>arr[i];
// // // // //     }

    
// // // // //     for(int i=0;i<2;i++){
// // // // //         cout<<arr[i]<<" ";
// // // // //     }

// // // // //     for(int i=3;i<n;i++){
// // // // //         cout<<arr[i]<<" ";
// // // // //     }
// // // // // }


// // // // #include<bits/stdc++.h>
// // // // using namespace std;

// // // // struct Node{
// // // //     int data;
// // // //     struct Node *prev;
// // // //     struct Node *next;
// // // // };

// // // // void insertion(struct Node **head,int value){
// // // //     struct Node *newnode = new Node();
// // // //     newnode->data = value;
// // // //     newnode->prev = NULL;
// // // //     newnode->next = *head;
// // // //     if((*head) != NULL){
// // // //         (*head)->prev = newnode;
// // // //     }
// // // //     *head = newnode;
// // // // }

// // // // void display(struct Node *head){
// // // //     struct Node *temp = head;
// // // //     while(temp != NULL){
// // // //         cout<<temp->data<<" ";
// // // //         temp = temp->next;
// // // //     }
    
// // // // }

// // // // int main(){
// // // //     struct Node *head = NULL;
// // // //     struct Node *end = NULL;

// // // //     int n;
// // // //     cin>>n;
// // // //     for(int i=0;i<n;i++){
// // // //         int value;
// // // //         cin>>value;
// // // //         insertion(&head,value);
// // // //     }
// // // //     display(head);
// // // // }

// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main(){
// // // //     stack<int> st;
// // // //     st.push(10);
// // // //     st.push(20);
// // // //     st.push(30);
// // // //     st.push(40);
// // // //     st.push(50);
// // // //     st.push(60);

// // // //     while(st.size()!=0){
// // // //         cout<<st.top()<<" ";
// // // //         st.pop();
// // // //     }
// // // // }

// // // // #include<bits/stdc++.h>
// // // // using namespace std;

// // // // int main(){
// // // //     queue<int> qe;
// // // //     qe.push(10);
// // // //     qe.push(20);
// // // //     qe.push(30);
// // // //     qe.push(40);
// // // //     qe.push(50);
// // // //     qe.push(60);
// // // //     qe.push(70);
// // // //     qe.push(80);

// // // //     while(qe.size()!= 0 ){
// // // //         cout<<qe.front()<<" ";
// // // //         qe.pop();
// // // //     }
// // // // }

// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int partition(int arr[],int l,int r){
// // // //     int pivot = arr[r];
// // // //     int i = l-1;
// // // //     for(int j=l;j<r;j++){
// // // //         if(arr[j] < pivot){
// // // //             i++;
// // // //             swap(arr[i],arr[j]);
// // // //         }
// // // //     }
// // // //     swap(arr[i+1],arr[r]);
// // // //     return i+1;
// // // // }

// // // // void quickSort(int arr[],int l,int r){
// // // //     if(l < r){
// // // //         int pi = partition(arr,l,r);
// // // //         quickSort(arr,l,pi-1);
// // // //         quickSort(arr,pi+1,r);
// // // //     }
// // // // }

// // // // void display(int arr[],int n){
// // // //     for(int i=0;i<n;i++){
// // // //         cout<<arr[i]<<" ";
// // // //     }cout<<endl;
// // // // }

// // // // int main(){
// // // //     int n;
// // // //     cin>>n;
// // // //     int arr[n];
// // // //     for(int i=0;i<n;i++){
// // // //         cin>>arr[i];
// // // //     }

// // // //     cout<<"Array befor Sorting: ";
// // // //     display(arr,n);
// // // //     quickSort(arr,0,n-1);
// // // //     cout<<"Array After Sorting: ";
// // // //     display(arr,n);
// // // // }

// // // #include<iostream>
// // // using namespace std;
// // // struct Node{
// // //     int data;
// // //     struct Node *left;
// // //     struct Node *right;  
// // // };

// // // void insertionAtTree(struct Node **root,int value){
// // //     struct Node *newnode = new Node();
// // //     newnode->data = value;
// // //     newnode->left = NULL;
// // //     newnode->right = NULL;

// // //     if(*root == NULL){
// // //         *root = newnode;
// // //         return;
// // //     }
// // //     struct Node *temp = *root;
// // //     while(1){
// // //         if(temp->data > value){
// // //             if(temp->left == NULL){
// // //                 temp->left = newnode;
// // //                 return;
// // //             }
// // //             temp = temp->left;
// // //         }
// // //         else{
// // //             if(temp->right == NULL){
// // //                 temp->right = newnode;
// // //                 return;
// // //             }
// // //             temp = temp->right;
// // //         }
// // //     }
// // //     return;
// // // }


// // // void preorderTraversal(struct Node *root){
// // //     if(root == NULL){
// // //         return;
// // //     }
// // //     preorderTraversal(root->left);
// // //     cout<<root->data<<" ";
// // //     preorderTraversal(root->right);
// // // }

// // // int main(){
// // //     struct Node *root = NULL;
// // //     int n;
// // //     cin>>n;
// // //     int value;
// // //     for(int i=0;i<n;i++){
// // //         cin>>value;
// // //         insertionAtTree(&root,value);
// // //     }

// // //     preorderTraversal(root);
// // // }

// // // You are using GCC
// // #include <iostream>
// // using namespace std;

// // void swap(int arr[], int a, int b) {
// //     int temp = arr[a];
// //     arr[a] = arr[b];
// //     arr[b] = temp;
// // }

// // void maxHeapify(int arr[], int n, int i) {
// //     int largest = i;
// //     int left = 2 * i + 1;
// //     int right = 2 * i + 2;

// //     if (left < n && arr[left] > arr[largest])
// //         largest = left;
// //     if (right < n && arr[right] > arr[largest])
// //         largest = right;

// //     if (largest != i) {
// //         swap(arr, i, largest);
// //         maxHeapify(arr, n, largest);
// //     }
// // }

// // void buildMaxHeap(int arr[], int n) {
// //     for (int i = (n / 2) - 1; i >= 0; i--) {
// //         maxHeapify(arr, n, i);
// //     }
// // }

// // void insertIntoMaxHeap(int arr[], int& n, int value) {
// //     //Type your code here
// //     if(n > 100){
// //         cout<<"Heap is full"<<endl;
// //         return;
// //     }
    
// //     n++;
// //     int i = n - 1;
// //     arr[i] = value;
    
// //     while(i != 0 && arr[(i-1)/2] < arr[i]){
// //         swap(arr,i,(i-1)/2);
// //         i = (i-1)/2;
// //     }
// // }

// // void printMaxHeap(int arr[], int n) {
// //     //Type your code here
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
    
// // }

// // int main() {
// //     int arr[100];
// //     int n = 0;

// //     int num_elements;
    
// //     cin >> num_elements;
// //     for (int i = 0; i < num_elements; i++) {
// //         int value;
// //         cin >> value;
// //         insertIntoMaxHeap(arr, n, value);
// //     }
    
// //     buildMaxHeap(arr, n);

// //     printMaxHeap(arr, n);

// //     return 0;
// // }

// #include <stdio.h>

void mergeArrays(int arr1[], int size1, int arr2[], int size2, int merged[], int *k) {
    int i = 0, j = 0;

    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            merged[*k] = arr1[i];
            i++;
        } else {
            merged[*k] = arr2[j];
            j++;
        }
        (*k)++;
    }

    // Copy remaining elements from arr1
    while (i < size1) {
        merged[*k] = arr1[i];
        i++;
        (*k)++;
    }

    // Copy remaining elements from arr2
    while (j < size2) {
        merged[*k] = arr2[j];
        j++;
        (*k)++;
    }
}

// int main() {
//     int size1, size2;

//     scanf("%d", &size1);
//     int arr1[size1];

//     for (int i = 0; i < size1; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     scanf("%d", &size2);
//     int arr2[size2];

//     for (int i = 0; i < size2; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     int merged[size1 + size2];
//     int k = 0;

//     mergeArrays(arr1, size1, arr2, size2, merged, &k);

//     printf("Merged Array: ");
//     for (int i = 0; i < (size1 + size2); i++) {
//         printf("%d ", merged[i]);
//     }

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aircraft {
    char flight_number[20];
    int fuel_level;
    struct Aircraft* next;
};

struct Aircraft* front = NULL;

void insertAircraft(char flight_number[], int fuel_level) {
    struct Aircraft* newAircraft = (struct Aircraft*)malloc(sizeof(struct Aircraft));
    if (newAircraft == NULL) {
        return;
    }

    strcpy(newAircraft->flight_number, flight_number);
    newAircraft->fuel_level = fuel_level;
    newAircraft->next = NULL;

    if (front == NULL || newAircraft->fuel_level < front->fuel_level) {
        newAircraft->next = front;
        front = newAircraft;
    } 
    else {
        struct Aircraft* current = front;
        while (current->next != NULL && current->next->fuel_level <= newAircraft->fuel_level) {
            current = current->next;
        }
        newAircraft->next = current->next;
        current->next = newAircraft;
    }
}

void scheduleAircraft() {
    struct Aircraft* current = front;

    while (current != NULL) {
        printf("%s %d\n", current->flight_number, current->fuel_level);
        current = current->next;
    }
}

int main() {
    int numAircraft;
    scanf("%d", &numAircraft);

    char flight_number[20];
    int fuel_level;

    for (int i = 0; i < numAircraft; i++) {
        scanf("%s", flight_number);
        scanf("%d", &fuel_level);

        insertAircraft(flight_number, fuel_level);
    }

    scheduleAircraft();

    return 0;
}