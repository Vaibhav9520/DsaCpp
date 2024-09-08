#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void push(struct Node **top,int value){
    struct Node *newnode = new Node();
    newnode->data = value;
    newnode->next = *top;
    *top = newnode;
}
void pop(struct Node **top){
    if(*top == NULL){
        cout<<"Stack is Empty"<<endl;
    }
    struct Node *temp = *top;
    *top = temp->next ;
    free(temp);
    
}

void display(struct Node *top){
    Node *temp = top;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void reverseDisplay(struct Node *top){
    if(top == NULL){
        return;
    }
    reverseDisplay(top->next);
    cout<<top->data<<" ";
}
int main(){
    struct Node *top = NULL;
    int n;
    cout<<"How many element you want to enter ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cout<<"Enter value "<<i+1<<" ";
        cin>>value;
        push(&top,value);
    }
    cout<<"Stake : ";
    display(top);
    cout<<"Stack after reverse : ";
    reverseDisplay(top);
    pop(&top);
    cout<<"\nStack after deletion : ";
    display(top);
    return 0;
}