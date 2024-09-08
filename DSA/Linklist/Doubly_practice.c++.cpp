#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *prev;
    Node *next;
};

void insert_at_beg(Node **head ,int value){
    Node *newnode = new Node();
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = *head;
    *head = newnode;
}
void insert_at_idx(Node **head,int value,int idx){
    Node *newnode = new Node();
    newnode->data = value;
    newnode->prev = NULL;
    newnode->next = NULL;
    Node *temp = *head;
    for(int i=0;i<idx-1;i++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next = newnode;
}
void delete_at_idx(Node **head,int idx){
    Node *temp = *head;
    for(int i=0;i<idx-1;i++){
        temp = temp->next;
    }
    Node *newnode = temp->next->next;
    delete(temp->next);
    temp->next = newnode;
}

void display(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }cout<<endl;
}
int main(){
    Node *head = NULL;
    insert_at_beg(&head,11);
    insert_at_beg(&head,12);
    insert_at_beg(&head,13);
    insert_at_beg(&head,14);
    insert_at_beg(&head,15);
    cout<<"Linked List: ";
    display(head);
    
    insert_at_idx(&head,0,3);
    cout<<"Updated List: ";
    display(head);
    
    delete_at_idx(&head,3);
    cout<<"Updated List: ";
    display(head);
    return 0;
}