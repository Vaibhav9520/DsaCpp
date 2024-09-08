// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     char data;
//     Node* next;

//     Node(char val){
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtEnd(Node* &head,char val){
//     Node* newnode = new Node(val);
//     Node* temp = head;

//     if(head==NULL){
//         head = newnode;
//         return;
//     }

//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = newnode;
// }

// void insertAtIdx(Node* &head,char val,int idx,int n){
//     if (idx < 0 || idx > n) {
//         cout << "Invalid index" << endl;
//         return;
//     }
//     Node* newnode = new Node(val);
//     Node* temp = head;

//     for(int i=0;i<n;i++){
//         temp = temp->next;
//     }
//     newnode->data = val;
//     newnode->next = temp->next;
//     temp->next = newnode;

// }
// void display(Node* &head){
//     Node* temp = head;
//     while(temp !=NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* head = NULL;
//     int n;
    
//     cin>>n;
//     for(int i=0;i<n;i++){
//         char element;;
//         cin>>element;
//         insertAtEnd(head,element);
//     }
//     cout<<"Linked List: ";
//     display(head);
//     int idx;
//     cin>>idx;
//     char char1;
//     cin>>char1;
//     insertAtIdx(head,char1,idx,n);
//     cout<<"updated LinkedList: ";
//     display(head);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtEnd(Node* &head,int val){
//     Node* newnode = new Node(val);
//     Node* temp = head;

//     if(head==NULL){
//         head = newnode;
//         return;
//     }

//     while(temp->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = newnode;
// }

// void insertSorted(Node* &head, int val) {
//     Node* newnode = new Node(val);

//     if (head == nullptr || val < head->data) {
//         newnode->next = head;
//         head = newnode;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != nullptr && temp->next->data < val) {
//         temp = temp->next;
//     }

//     newnode->next = temp->next;
//     temp->next = newnode;
// }

// void display(Node* &head){
//     Node* temp = head;
//     while(temp !=NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node* head = NULL;
//     int n;
    
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int element;;
//         cin>>element;
//         insertAtEnd(head,element);
//     }
//     cout<<"Linked List: ";
//     display(head);
//     int val1;
//     cin>>val1;
    
//     insertSorted(head,val1);
//     cout<<"updated LinkedList: ";
//     display(head);

//     return 0;
// }


#include<iostream>
using namespace std;

class Node{
    public:
    string data;
    Node* next;

    Node(string val){
        data = val;
        next = NULL;
    }
};

void insertAtEnd(Node* &head,string val){
    Node* newnode = new Node(val);
    Node* temp = head;

    if(head==NULL){
        head = newnode;
        return;
    }

    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newnode;
}

void deleteAtSecondLast(Node *&head) {
    Node *temp = head;
    while (temp->next->next->next != NULL) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    
}

void display(Node* &head){
    Node* temp = head;
    while(temp !=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++){
        string element;;
        cin>>element;
        insertAtEnd(head,element);
    }
    cout<<"Linked List: ";
    display(head);

    cout<<"After deleting: ";
    deleteAtSecondLast(head);
    display(head);
    
    
    

    return 0;
}

