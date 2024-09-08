// // by c

// #include<iostream>
// using namespace std;

// struct Node{
//     int data;
//     struct Node *next;
// };

// void insertBegning(struct Node **head , int element){
//     struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
//     newnode->data = element;
//     newnode->next = *head;
//     *head = newnode;
// }

// void printLinkedlist(struct Node *head){
//     struct Node *temp = head;
//     while(temp !=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
// }

// int main(){
//     struct Node *head = NULL;
//     int n , element;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         cin>>element;
//         insertBegning(&head,element);
//     }
//     printLinkedlist(head);
// }

//by c++
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = nullptr;
    }
    void insertBeg(int value){
        Node* newnode = new Node(value);
        newnode->next = head;
        head = newnode;
    }

    void display(){
        Node* temp = head;
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};

int main(){
    LinkedList list;
    list.insertBeg(10);
    list.insertBeg(20);
    list.insertBeg(30);
    cout<<"LinkedList: ";
    list.display();
    return 0;
}