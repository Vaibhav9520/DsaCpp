#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
  int data;
  Node* next;
};

int main(){
    Node* head = NULL;
    Node* newnode;
    int n,choice;
    while(true){
        cin>>n;
        cin>>choice;
        if(choice==0){
            newnode = (Node*)malloc(sizeof(Node));
            newnode->data=n;
            newnode->next=head;
            head=newnode;
            cout<<"Node inserted"<<endl;
        }else{
            break;
        }
    }
    //display
    cout<<"Linked List:";
    Node* temp = head;
    while(temp !=NULL){
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout<<endl;
    //free memory
    while(head !=NULL){
        Node* temp1 = head;
        head = head->next;
        free(temp1);
    }
    cout<<"Node ended"<<endl;
    return 0;    
}

