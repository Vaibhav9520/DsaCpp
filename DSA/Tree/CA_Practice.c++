// //Recursion--------------------------------------------------------------------------
// //QuickSort

// // #include<bits/stdc++.h>
// // using namespace std;

// // int partition(int arr[],int l,int r){
// //     int pivot = arr[r];
// //     int i = l - 1;
// //     for(int j=l;j<r;j++){
// //         if(arr[j] < pivot){
// //             i++;
// //             swap(arr[j],arr[i]);
// //         }
// //     }
// //     swap(arr[i+1],arr[r]);
// //     return i+1;
// // }

// // void quickSort(int arr[],int l,int r){
// //     if(l < r){
// //         int pi = partition(arr,l,r);
// //         quickSort(arr,l,pi-1);
// //         quickSort(arr,pi+1,r);
// //     }
// // }

// // int main(){
// //     int n = 8;
// //     int arr[n] = {50,45,32,98,74,14,23,10};
// //     cout<<"Array before Sorting: ";
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }cout<<endl;

// //     quickSort(arr,0,n-1);
// //     cout<<"Array before Sorting: ";
// //     for(int i=0;i<n;i++){
// //         cout<<arr[i]<<" ";
// //     }cout<<endl;
// // }


// //BST

// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     struct Node *left;
//     struct Node *right;
// };

// void insertAtTree(struct Node **root,int value){
//     struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
//     newnode->data = value;
//     newnode->left = NULL;
//     newnode->right = NULL;

//     if(*root == NULL){
//         *root = newnode;
//         return;
//     }

//     struct Node *temp = *root;
//     while(1){
//         if(temp->data > value){
//             if(temp->left == NULL){
//                 temp->left = newnode;
//                 return;
//             }
//             temp = temp->left;
//         }
//         else{
//             if(temp->right == NULL){
//                 temp->right = newnode;
//                 return;
//             }
//             temp = temp->right;
//         }
//     }
//     return;
// }

// void preorder(struct Node *root){
//     if(root == NULL){
//         return;
//     }
//     preorder(root->left);
//     cout<<root->data<<" ";
//     preorder(root->right);
// }

// struct Node *findMinimum(struct Node *root){
//     if(root == NULL){
//         return 0;
//     }
//     return findMinimum(root->left);
    
// }
// // struct Node *deletion(struct Node *root,int value){
// //     if(root == NULL){
// //         free(root);
// //         return NULL;
// //     }
// //     if(value > root->data){
// //         root->right = deletion(root->right,value);
// //     }
// //     else if(value < root->data){
// //         root->left = deletion(root->left,value);
// //     }
// //     else{
// //         struct Node *temp;
// //         if(root->left == NULL && root->right == NULL){
// //             free(root);
// //             return NULL;
// //         }
// //         else if(root->left == NULL || root->right == NULL){
// //             if(root->left == NULL){
// //                 temp = root->right;
// //             }else{
// //                 temp = root->left;
// //             }
// //             free(root);
// //             return temp;
// //         }
// //         else{
// //             struct Node *temp = findMinimum(root->right);
// //             root->data = temp->data;
// //             root->right = deletion(root->right,temp->data);
// //         }
// //     }
// //     return root;
// // }

// struct Node *deletion(struct Node *root,int value){
//     if(root == NULL){
//         free(root);
//         return NULL;
//     }
//     else if(value  > root->data){
//         root->right = deletion(root->right,value);
//     }
//     else if(value < root->data){
//         root->left = deletion(root->left, value);
//     }
//     else{
//         if(root->left == NULL && root->right == NULL){
//             root = NULL;
//         }
//         else if(root->left == NULL){
//             root->right = NULL;
//         }
//         else if(root->right == NULL){
//             root->left = NULL;
//         }
//         else{
//             struct Node *temp = findMinimum(root->right);
//             root->data = temp->data;
//             root->right = deletion(root->right,temp->data);
//         }
//     }
//     return root;
// }

// int main(){
//     struct Node *root = NULL;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         insertAtTree(&root,value);
//     }
//     preorder(root);
//     cout<<endl;

//     deletion(root,10);
//     preorder(root);
    
// }


// Heap

#include<iostream>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int value){
        size = size + 1;
        int index = size;
        arr[index] = value;

        while(index > 1){
            int parent  = index / 2;
            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void deletion(){
        if(size == 0){
            cout<<"Noting to delete: ";
            return;
        }
        arr[1] = size;
        size--;

        int i = 1;
        while(i < size){
            int leftindex = 2 * i;
            int rightindex = 2 * i + 1;
            if(leftindex < size && arr[i] < arr[leftindex]){
                swap(arr[i] ,arr[leftindex]);
                i = leftindex;
            }
            else if(rightindex < size && arr[i] < arr[rightindex]){
                swap(arr[i] ,arr[rightindex]);
                i = rightindex;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }


};

int main(){
    heap obj;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        obj.insert(value);
    }
    obj.deletion();
    obj.print();
}   