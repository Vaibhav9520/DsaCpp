#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void Qinsert(struct Node **front,struct Node **rare,int value){
    struct Node *newnode = new Node();
    newnode->data = value;
    newnode->next = *rare;
    *rare = newnode;
}

void display(struct Node *front,struct Node *rare){
    Node *temp = rare;
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
    cout<<"How many element you want to enter ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cout<<"Enter value "<<i+1<<" : ";
        cin>>value;
        Qinsert(&front,&rare,value);
    }
    cout<<"Queue : ";
    display(front,rare);
    
    return 0;
}