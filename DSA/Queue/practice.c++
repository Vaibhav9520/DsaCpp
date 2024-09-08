// #include<iostream>
// using namespace std;
// #define SIZE 10

// int arr[SIZE],front = -1,rare = -1;

// void insert_to_queue(int value){
//     if(rare == SIZE - 1){
//         cout<<"Queue Overflow"<<endl;
//         return;
//     }
//     arr[rare] = value;
//     rare++;
// }
// void delete_to_queue(){
//     if(front == rare){
//         cout<<"Queue Underflow!"<<endl;
//         return;
//     }
//     cout<<"Deleted Element: "<<arr[front]<<endl;
//     front++;
// }
// void display_to_queue(){
//     cout<<"Queue: ";
//     if(front == rare){
//         cout<<"Queue is Empty!!"<<endl;
//         return;
//     }
//     for(int i=front;i<rare;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"How many Element you want to Enter: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         insert_to_queue(value);
//     }
//     display_to_queue();
//     delete_to_queue();
//     display_to_queue();
//     return 0;
// }

// #include<bits\stdc++.h>
// using namespace std;

// int main(){
//     queue<int> qe;
//     int n;
//     cout<<"How many element you want to enter into Queue: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         qe.push(value);
//     }
//     cout<<"Deleted Element: "<<qe.front()<<endl;
//     qe.pop();
//     cout<<"Queue: ";
//     while(qe.size()!=0){
//         cout<<qe.front()<<" ";
//         qe.pop();
//     }

// }
#include<bits\stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};

void push_to_queue(struct Node **front,struct Node **rare,int value){
    struct Node *newnode = new Node();
    newnode->data = value;
    newnode->next = *rare;
    *rare = newnode;
}

void delete_to_queue(struct Node **front,struct Node **rare){
    if(front == rare){
        cout<<"Queue Underflow!";
        return;
    }
    struct Node *temp = *rare;
    cout<<"Deleted Element "<<temp->data<<endl;
    *rare = temp->next;
    free(temp);
}

void display_to_queue(struct Node **front,struct Node **rare){
    if(front == rare){
        cout<<"Queue is Empty!";
        return;
    }
    struct Node *temp = *rare;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    struct Node *front = NULL;
    struct Node *rare = NULL;
    int n;
    cout<<"How many Element you want to Enter: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        push_to_queue(&front,&rare,value);
    }
    delete_to_queue(&front,&rare);
    cout<<"Queue: ";
    display_to_queue(&front,&rare);
}
