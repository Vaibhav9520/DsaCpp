// #include<iostream>
// using namespace std;
// #define SIZE 10

// int arr[SIZE],top = -1;

// void push_to_stack(int value){
//     if(top == SIZE - 1){
//         cout<<"Stack Overflow!!"<<endl;
//         return;
//     }
//     top++;
//     arr[top] = value;
    

// }
// void delete_to_stack(){
//     if(top == -1){
//         cout<<"Stack Underflow"<<endl;
//         return;
//     }
//     cout<<"Deleted Element: "<<arr[top]<<endl;
//     top--;
// }
// void display_to_stack(){
//     if(top == -1){
//         cout<<"Stack is Empty"<<endl;
//         return;
//     }
//     for(int i=top;i>=0;i--){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


// int main(){
//     int n;
//     cout<<"How many element you want to enter: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         push_to_stack(value);
//     }
//     display_to_stack();
//     delete_to_stack();
//     display_to_stack();
//     return 0;
// }

// #include<bits\stdc++.h>
// using namespace std;
// int main(){
//     stack<int> st;
//     int n;
//     cout<<"How many element you want to Enter: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         st.push(value);
//     }
//     cout<<"Deleted Element: "<<st.top()<<endl;
//     st.pop();

//     cout<<"Stack: ";
//     while(st.size()!=0){
//         cout<<st.top()<<" ";
//         st.pop();
//     }
// }


// #include<bits\stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     struct Node *next;
// };
// void push_to_stack(struct Node **top,int value){
//     struct Node *newnode = new Node();
//     newnode->data = value;
//     newnode->next = *top;
//     *top = newnode;
// }
// void delete_to_stack(struct Node **top){
//     if(top == NULL){
//         cout<<"Stack Underflow!!";
//         return;
//     }
//     struct Node *temp = *top;
//     cout<<"Deleted Element: "<<temp->data<<endl;
//     *top = temp->next;
//     free(temp);
// }
// void display_to_stack(struct Node **top){
//     if(top == NULL){
//         cout<<"Stack is Empty.";
//         return;
//     }

//     struct Node *temp = *top;
//     while(temp != NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     struct Node *top = NULL;
//     int n;
//     cout<<"How many Element you Want to enter: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         push_to_stack(&top,value);
//     }

//     delete_to_stack(&top);
//     cout<<"Stack: ";
//     display_to_stack(&top);
// }


#include<bits\stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
void push_to_stack(Node *&top,int value){
    Node *newnode = new Node(value);
    newnode->data = value;
    newnode->next = top;
    top = newnode;
}
void delete_to_stack(Node *&top){
    if(top == NULL){
        cout<<"Stack Underflow!!";
        return;
    }
     Node *temp = top;
    cout<<"Deleted Element: "<<temp->data<<endl;
    top = temp->next;
    free(temp);
}
void display_to_stack(Node *top){
    if(top == NULL){
        cout<<"Stack is Empty.";
        return;
    }

     Node *temp = top;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node *top = NULL;
    int n;
    cout<<"How many Element you Want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        push_to_stack(top,value);
    }

    delete_to_stack(top);
    cout<<"Stack: ";
    display_to_stack(top);
}

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int value) {
//         data = value;
//         next = nullptr;
//     }
// };

// void push_to_stack(Node*& top, int value) {
//     Node* newnode = new Node(value);
//     newnode->next = top;
//     top = newnode;
// }

// void delete_from_stack(Node*& top) {
//     if (top == nullptr) {
//         cout << "Stack Underflow!!";
//         return;
//     }

//     Node* temp = top;
//     cout << "Deleted Element: " << temp->data << endl;
//     top = temp->next;
//     delete temp;
// }

// void display_stack(Node* top) {
//     if (top == nullptr) {
//         cout << "Stack is Empty.";
//         return;
//     }

//     Node* temp = top;
//     while (temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main() {
//     Node* top = nullptr;
//     int n;

//     cout << "How many elements do you want to enter: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         int value;
//         cin >> value;
//         push_to_stack(top, value);
//     }

//     delete_from_stack(top);

//     cout << "Stack: ";
//     display_stack(top);

//     return 0;
// }
