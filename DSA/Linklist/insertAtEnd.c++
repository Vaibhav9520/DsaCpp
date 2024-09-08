#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtHead(Node* &head,int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void insertAtEnd(Node* &head,int val){
    Node* newnode = new Node(val);
    if(head==NULL){
        head = newnode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}
void insertAtIdx(Node* &head,int val,int idx){
    Node* newnode = new Node(val);
    Node* temp = head;
    
    for(int i=1;i<idx;i++){
        temp = temp->next;
    }
    // int i=0;
    // while(i!=idx-1){
    //     temp=temp->next;
    //     i++;
    // }
    newnode->data = val;
    newnode->next = temp->next;
    temp->next = newnode;
}


void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main(){
    Node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    display(head);
    insertAtHead(head,0);
    display(head);
    
    insertAtIdx(head,9,3);
    display(head);
    return 0;

}