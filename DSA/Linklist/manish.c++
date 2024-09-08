// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };
// void insertAtBeg(Node* &head,int value){
//     Node *newnode = new Node(value);
//     if(head == NULL){
//         head = newnode;
//         return;
//     }

//     newnode->data = value;
//     newnode->next = head;
//     head = newnode;
// }

// // void insertAtEnd(Node* &head,int val){
// //     Node* newnode = new Node(val);
// //     if(head==NULL){
// //         head = newnode;
// //         return;
// //     }

// //     Node* temp = head;
// //     while(temp->next != NULL){
// //         temp = temp->next;
// //     }
// //     temp->next = newnode;
// //

// int searchTarget(Node* &head,int target){
//     Node* temp = head;
//     while(temp->data != NULL){
//         if(temp->data == target){
//             int index  = temp->data;
//             return index;
//         }
//         else{
//             return 0;
//         }
//         temp = temp->next;
//     }
// }
// void deleteAtEnd(Node* &head){
//     Node* temp = head;
//     while(temp->next->next != NULL){
//         temp = temp->next;
//     }
//     temp->next = NULL;
// }
// void deletionAtPos(Node* &head,int pos){
//     //Node* temp = head;
//     Node* p=head;
//     for(int i = 1;i<pos-1;i++){
//         // if(temp->next != NULL){
//         //     temp = temp->next;
//         // } 
//         p=p->next;
//     }
//     Node *temp;
//     temp=p->next;
//     p->next=temp->next;
//      //temp->next = temp->next->next;
//      free(temp);
// }

// void display(Node* &head){
//     Node *temp = head;
//     while(temp !=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// int main(){
//     Node *head = NULL;
//     int n;
//     cout<<"How many element you want to enter :";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cout<<"Enter value "<<i+1<<" : ";
//         cin>>value;
//         insertAtBeg(head,value);
//     }
//     cout<<"Elements in LinkedList: ";
//     display(head);
//     // cout<<"Enter target: ";
//     // int target;
//     // cin>>target;
//     // int item = searchTarget(head,target);
//     // if(item == 1){
//     //     cout<<"found"<<endl;
//     // }else{
//     //     cout<<"Not found";
//     //}
//     // deleteAtEnd(head);
//     // cout<<"After deleting: ";
//     int postion;
//     cout<<"Enter position for deletion : ";
//     cin>>postion;
//     deletionAtPos(head,postion);
//     display(head);
     
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"num: ";
    cin>>num;

    int even = 0;
    while(num >= 1){
        if(num % 2 == 0){
            even = even + num;
        }
        num = num - 1;
    }
    cout<<"Sum: "<<even;


    return 0;

}