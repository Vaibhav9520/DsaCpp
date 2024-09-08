// // All Cases of doubly linked list.......................................................................

// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node *prev;
//     Node *next;
// };

// void insert_at_beg(Node **head,int value){    // Insert Node At starting.
//     Node *newnode = new Node();
//     newnode->data = value;
//     newnode->prev = NULL;
//     newnode->next = *head;
//     *head = newnode;
// }

// void insert_at_idx(Node **head,int value,int idx){     //Insert Node At given Index.
//     Node *newnode = new Node();
//     newnode->data = value;
//     newnode->prev = NULL;
//     newnode->next = NULL;
    
//     Node *temp = *head;
//     for(int i=0;i<idx-1;i++){
//         temp = temp->next;
//     }
//     newnode->next = temp->next;
//     newnode->prev = temp;
//     temp->next = newnode;
// }

// void delete_at_idx(Node **head,int idx){              //Delete Node at given Index.
    
//     Node *temp = *head;
//     for(int i=0;i<idx-1;i++){
//         temp = temp->next;
//     }
//     Node *newnode = temp->next->next;
//     delete(temp->next);
//     temp->next = newnode;
// }



// void display(Node **head){                          //display Linked List.
//     Node *temp = *head;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }cout<<endl;
// }

// int main(){
//     Node *head = NULL;
    
//     insert_at_beg(&head,10);
//     insert_at_beg(&head,20);
//     insert_at_beg(&head,30);
//     insert_at_beg(&head,40);
//     insert_at_beg(&head,50);
    
//     cout<<"Linked List: ";
//     display(&head);
    
//     insert_at_idx(&head,0,3);
    
//     cout<<"Updated Linked List After Insertion: ";
//     display(&head);
    
//     delete_at_idx(&head,3);
//     cout<<"Updated Linked List After Deletion: ";
//     display(&head);
    
//     return 0;
// }

//------------------------------------------------------------------
//Stack all Cases using Array...................

// #include<bits/stdc++.h>
// using namespace std;
// #define SIZE 10

// int arr[SIZE], top = -1;

// void push(int value){
//     if(top == SIZE-1){
//         cout<<"Stack Overflow."<<endl;
//         return;
//     }
//     top++;
//     arr[top] = value;
// }

// void pop(){
//     if(top == -1){
//         cout<<"Stack Underflow."<<endl;
//         return;
//     }
//     cout<<"Deleted Element "<<arr[top]<<endl;
//     top--;
// }
// void display(){
//     for(int i=top;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         push(value);
//     }
//     cout<<"Stack: ";
//     display();
    
//     cout<<"Updated Stack After popping: ";
//     pop();
//     display();
//     return 0;
// }

//----------------------------------------------------------------------------
//Stack using Linked List.............

// #include <bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node *next;
// };

// void push(Node **top,int value){
//     Node *newnode = new Node();
//     newnode->data = value;
//     newnode->next = *top;
//     *top = newnode;
// }
// void pop(Node **top){
//     if(top == NULL){
//         cout<<"Stack Underflow.";
//         return;
//     }
//     Node *temp = *top;
//     *top = temp->next;
//     delete(temp);
// }

// void display(Node **top){
//     Node *temp = *top;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }cout<<endl;
// }
// int main(){
//     Node *top = NULL;
//     int n;
//     cout<<"Enter the size of Array: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cout<<"Enter value "<<i+1<<": ";
//         cin>>value;
//         push(&top,value);
//     }
//     cout<<"Stack: ";
//     display(&top);

//     pop(&top);
//     cout<<"Updated stack: ";
//     display(&top);
//     return 0;
// }


//=-----------------------------------------------------------------------
//Stack Using Inbuild............

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     stack<int> st;
//     int n;
//     cout<<"Enter the Size of Stack: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cout<<"Enter value "<<i+1<<": ";
//         cin>>value;
//         st.push(value);
//     }
//     cout<<"Stack: ";
//     while(st.size()!=0){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
//     return 0;
// }


//------------------------------------------------------------------------
//Queue using array........

// #include<bits/stdc++.h>
// using namespace std;
// #define SIZE 10

// int arr[SIZE],rare = 0,front = 0;

// void enqueue(int value){
//     if(rare == SIZE-1){
//         cout<<"Queue Over flow.";
//         return;
//     }else{
//     arr[rare] = value;
//     rare++;
//     }
// }

// void dequeue(){
//     if(front == rare){
//         cout<<"Queue Underflow.";
//         return;
//     }else{
//     cout<<"Deleted Element"<<arr[front]<<endl;
//     front++;
//     }
// }

// void display(){
//     if(rare == front){
//         cout<<"Queue Empty.";
//         return;
//     }
//     for(int i=front;i<rare;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the Size of Queue: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cout<<"Enter value "<<i+1<<":";
//         cin>>value;
//         enqueue(value);
//     }
//     cout<<"Queue: ";
//     display();
    
//     cout<<"Updated Queue After popping: ";
//     dequeue();
//     display();
//     return 0;
// }


//----------------------------------------------------------------------------

// Queue using Linked List..

// #include <bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node *next;
// };

// void enqueue(Node **rare,Node **front,int value){
//     Node *newnode = new Node();
//     newnode->data = value;
//     newnode->next = *rare;
//     *rare = newnode;
// }
// void dequeue(Node **rare,Node **front){
//     if(*rare == NULL){
//         cout<<"Queue Underflow.";
//         return;
//     }
//     Node *temp = *rare;
//     *rare = temp->next;
//     delete(temp);
// }

// void display(Node **rare,Node **front){
//     Node *temp = *rare;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }cout<<endl;
// }
// int main(){
//     Node *rare = NULL;
//     Node *front = NULL;
//     int n;
//     cout<<"Enter the size of Queue: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cout<<"Enter value "<<i+1<<": ";
//         cin>>value;
//         enqueue(&rare,&front,value);
//     }
//     cout<<"Queue: ";
//     display(&rare,&front);

//     dequeue(&rare,&front);
//     cout<<"Updated Queue: ";
//     display(&rare,&front);
//     return 0;
// }

//-----------------------------------------------------------------------
//queue using Inbuild....

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     queue<int> qe;
    
//     int n;
//     cout<<"Enter the size: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         qe.push(value);
//     }

//     while(qe.size()!=0){
//         cout<<qe.front()<<" ";
//         qe.pop();
//     }
//     return 0;
// }

//--------------------------------------------------------------
//Tower of Hanoi.........................


// #include <iostream>
// using namespace std;
// void towerOfHanoi(int n,char a,char b,char c) {
//     if (n == 0) {
//         return;
//     }
//     towerOfHanoi(n-1,a,c,b);
//     cout << "Move disk " << n << " from " << a << " to " << c << std::endl;
//     towerOfHanoi(n-1,b,a,c);
// }
// int main() {
//     int n;
//     cout << "Enter the number of disks: ";
//     cin >> n;
//     towerOfHanoi(n, 'A', 'B', 'C');
//     return 0;
// }

//Quick Sort----------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;

// int partition(int arr[],int l,int r){
//     int pivot = arr[r];
//     int i = l - 1;
//     for(int j=l;j<r;j++){
//         if(arr[j] < pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[r]);
//     return i+1;
// }

// void quickSort(int arr[],int l,int r){
//     if(l < r){
//         int pi = partition(arr,l,r);
//         quickSort(arr,l,pi-1);
//         quickSort(arr,pi+1,r);
//     }
// }
// int main(){
//     int arr[5] = {5,2,3,4,1};
//     cout<<"Array before Sorting: ";
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     quickSort(arr,0,4);
//     cout<<"Array After Sorting: ";
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }


//Merge Sort----------------------------------------------------------

// #include<bits/stdc++.h>
// using namespace std;

// void merge(int arr[],int si,int mid,int ei){
//     int n1 = mid - si +1;
//     int n2 = ei - mid;
//     int a[n1];
//     int b[n2];
//     for(int i=0;i<n1;i++){
//         a[i] = arr[si + i];
//     }
//     for(int i=0;i<n2;i++){
//         b[i] = arr[mid +i + 1];
//     }
//     int i=0;
//     int j=0;
//     int k=si;
//     while(i < n1 && j < n2){
//         if(a[i] < b[j]){
//             arr[k] = a[i];
//             k++;i++;
//         }else{
//             arr[k] = b[j];
//             k++;j++;
//         }
//     }
//     while(i < n1){
//         arr[k] = a[i];
//         k++;i++;
//     }
//     while(j < n2){
//         arr[k] = b[j];
//         k++;j++;
//     }
// }

// void mergeSort(int arr[],int si,int ei){
//     if(si < ei){
//         int mid = si +(ei - si)/2;
//         mergeSort(arr,si,mid);
//         mergeSort(arr,mid+1,ei);

//         merge(arr,si,mid,ei);
        
//     }
// }
// int main(){
//     int arr[5] = {5,2,3,4,1};
//     cout<<"Array before Sorting: ";
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     mergeSort(arr,0,4);
//     cout<<"Array After Sorting: ";
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }


//---------------------------------------------------------------
// Tree Basic code.......................


#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

node* create_node(int ele) {
    node* root = new node;
    root->data = ele;
    root->left = nullptr;
    root->right = nullptr;
    return root;
}

// Preorder Traversal
void preorder(node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder Traversal
void postorder(node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

// Inorder Traversal
void inorder(node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    node* p = create_node(4);
    node* p1 = create_node(3);
    node* p2 = create_node(1);
    node* p3 = create_node(5);
    node* p4 = create_node(7);
    node* p5 = create_node(2);
    node* p6 = create_node(9);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    
    cout << "Preorder: ";
    preorder(p);
    cout << endl;
    
    cout << "Postorder: ";
    postorder(p);
    cout << endl;
    
    cout << "Inorder: ";
    inorder(p);
    cout << endl;
    
    return 0;
}




















