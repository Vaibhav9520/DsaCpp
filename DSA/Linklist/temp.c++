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
    int n,element;
    cout<<"How many Element you want to insert on tail: ";
    cin>>n;
    cout<<"Enter the Elements : ";
    for(int i=1;i<=n;i++){
        cin>>element;
        insertAtEnd(head,element);
    }
    cout<<"Linked List: ";
    display(head);
    int m,element1;
    cout<<"How many Element you insert at Head: ";
    cin>>m;
    cout<<"Enter insert Element: ";
    for(int i=1;i<=m;i++){
        cin>>element1;
        insertAtHead(head,element1);
    }
    cout<<"Updated Linked List: ";
    display(head);

    int ele, pos;
    cout<<"Enter the value Which you want to insert at specific Index: ";
    cin>>ele;
    cout<<"Enter specific Index: ";
    cin>>pos;
    insertAtIdx(head,ele,pos);
    cout<<"Updated Linked List: ";
    display(head);
    return 0;

}