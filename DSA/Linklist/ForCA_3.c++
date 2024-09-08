// // // #include<bits/stdc++.h>
// // // using namespace std;

// // // struct Node{
// // //     int data;
// // //     struct Node *prev;
// // //     struct Node *next;
// // // };

// // // void insert_at_End(struct Node **head,struct Node **end, int value){
// // //     struct Node *newnode = new Node();
// // //     newnode->data = value;
// // //     //newnode->next = NULL;
    
// // //     if (*head == NULL){
// // //         newnode->prev = NULL;
// // //         newnode->next=NULL;
// // //         *head = newnode;
// // //         *end=newnode;
// // //     }
// // //     else{
// // //         // struct Node *temp = *head;
// // //         // while(temp->next != NULL){
// // //         //     temp = temp->next;
// // //         // }
// // //         // temp->next = newnode;
// // //         // newnode->prev = temp;
// // //         newnode->prev=(*end);
// // //         (*end)->next=newnode;
// // //         newnode->next=NULL;
// // //         //(*end)->next=newnode;
// // //         *end=newnode;
// // //     }
// // // }

// // // void display(struct Node *head){
// // //     struct Node *temp = head;
// // //     while(temp != NULL){
// // //         cout<<temp->data<<" ";
// // //         temp = temp->next;
// // //     }
// // // }

// // // int main(){
// // //     struct Node *head = NULL;
// // //     struct Node *end = NULL;
// // //     int n;
// // //     cout<<"Enter the Number of Elements: ";
// // //     cin>>n;
    
// // //     for(int i=0; i<n; i++){
// // //         int value;
// // //         cin>>value;
// // //         insert_at_End(&head, &end,value);
// // //     }
    
// // //     cout<<"Linked List: ";
// // //     display(head);
    
// // //     return 0;
// // // }






// // // #include<stdio.h>
// // // #include<stdlib.h>
// // // struct node{
// // //     int data;
// // //     struct node *prev;
// // //     struct node *next;
// // // };

// // //insert at beginning
// // // void insert_beg(struct node **start,struct node **end,int value){
// // //     struct node newnode=(struct node)malloc(sizeof(struct node));
// // //     newnode->data=value;
// // //     if(*start==NULL){
// // //         newnode->next=NULL;
// // //         newnode->prev=NULL;
// // //         *start=newnode;
// // //         *end=newnode;
// // //     }else{
// // //         newnode->next = (*start);
// // //         (*start)->prev=newnode;
// // //         newnode->prev=NULL;
// // //         *start=newnode;
// // //     }
// // // }

// // //insert at ending
// // // void insert_end(struct node** start ,struct node** end ,int value){
// // //     struct node newnode=(struct node)malloc(sizeof(struct node));
// // //     newnode->data=value;
// // //     if(*start==NULL){
// // //         newnode->next=NULL;
// // //         newnode->prev=NULL;
// // //         *start=newnode;
// // //         *end=newnode;
// // //     }
// // //     newnode->prev=*end;
// // //     (*end)->next=newnode;
// // //     newnode->next=NULL;
// // //     *end=newnode;
// // // }

// // // insert at the position
// // // void insert_pos(struct node **start,struct node **end,int pos,int value){
// // //     struct node newnode=(struct node)malloc(sizeof(struct node));
// // //     newnode->data=value;
// // //     int i=1;
// // //     struct node *p=(*start);
// // //     while(i!=pos-1){
// // //         p=p->next;
// // //         i++;
// // //     }
// // //     newnode->next=p->next;
// // //     newnode->next->prev=newnode;
// // //     newnode->prev=p;
// // //     p->next=newnode;
// // // }

// // // for display the linked list
// // // void display(struct node *start){
// // //     struct node *current=start;
// // //     while(current!=NULL){
// // //         printf("%d ", current -> data);
// // //         current=current->next;
// // //     }
// // // }
// // // int main(){
// // //     struct node *start,*end;
// // //     start=NULL,end=NULL;
// // //     int n,value,pos;
// // //     scanf("%d",&n);
// // //     for(int i = 0 ;i < n;++i){
// // //         scanf("%d",&value);
// // //         //insert_beg(&start,&end,value);
// // //         insert_end(&start,&end,value);
// // //     }
// // //     printf("Enter the position for inserting element: ");
// // //     scanf("%d",&pos);
// // //     printf("Enter the element: ");
// // //     scanf("%d", &value );
// // //     insert_pos(&start,&end,pos,value);
// // //     printf("\nThe Linked list: ");
// // //     display(start);
// // // }







// // // deletion in doubly linked list

// // #include<stdio.h>
// // #include<stdlib.h>
// // #include<string.h>
// // struct node{
// //     char data[100];
// //     struct node* next;
// //     struct node *prev;
// // };
// // void insert_node(struct node *start,struct node **end,char value){
// //     struct node newnode=(struct node)malloc(sizeof(struct node));
// //     strcpy(newnode->data,value);
// //     if(*start==NULL){
// //         newnode->prev=NULL;
// //         newnode->next=NULL;
// //         *start=newnode;
// //         *end=newnode;
// //     }
// //     newnode->prev=(*end);
// //     (*end)->next=newnode;
// //     newnode->next=NULL;
// //     *end=newnode;
// // }

// // // deletion from beginning
// // // void delete_beg(struct node **start,struct node **end){
// // //     struct node *temp=(*start);
// // //     *start=temp->next;
// // //     (*start)->prev=NULL;
// // //     free(temp);
// // // }

// // // deletion from the ending
// // // void delete_end(struct node** start , struct node** end ){
// // //     struct node *temp=(*end);
// // //     *end=temp->prev;
// // //     (*end)->next=NULL;
// // //     free(temp);
// // // }

// // // deletion from the specific position
// // void delete_pos(struct node **start,struct node **end,int pos){
// //     struct node *p=(*start);
// //     int i=1;
// //     while(i!=pos-1){
// //         p=p->next;
// //         i++;
// //     }
// //     struct node *temp;
// //     temp=p->next;
// //     p->next=temp->next;
// //     temp->next->prev=p;
// //     free(temp);
// // }

// // // display the linked list
// // void display(struct node *start){
// //     struct node *current=start;
// //     while(current!=NULL){
// //         printf("%s ", current -> data);
// //         current=current->next;
// //     }
// // }
// // int main(){
// //     struct node *start,*end;
// //     start=NULL,end=NULL;
// //     int n;
// //     char value[100];
// //     printf ("enter number of nodes :");
// //     scanf("%d",&n);
// //     for (int i = 1; i <= n; ++i){
// //         scanf("%s",value);
// //         insert_node(&start,&end,value);
// //     }
// //     printf("The linked list are: ");
// //     display(start);
// //     //delete_beg(&start,&end);
// //     //delete_end(&start,&end);
// //     int pos;
// //     printf("\nEnter a postion to be deleted:");
// //     scanf("%d",&pos);
// //     delete_pos(&start,&end,pos);
// //     printf("\nThe linked list after deletion: ");
// //     display(start);

// // }


// // #include<iostream>
// // using namespace std;

// // struct Node{
// //     int data;
// //     Node *prev;
// //     Node *next;
// // };

// // void insert_at_beg(Node **head,int value){
// //     Node *newnode = new Node();
// //     newnode->data = value;
// //     newnode->prev = NULL;
// //     newnode->next = *head;
// //     // if(*head != NULL){
// //     //     (*head)->prev = newnode;
// //     // }
// //     *head = newnode;
// // }

// // void insert_at_indx(Node **head,int value,int idx){
// //     Node *newnode = new Node();
// //     newnode->data = value;
// //     newnode->prev = NULL;
// //     newnode->next = NULL;
// //     if(head == NULL){
// //         insert_at_beg(head,value);
// //         return;
// //     }
// //     Node *temp = *head;
// //     for(int i=0;i<idx-1;i++){
// //         temp = temp->next;
// //     }
// //     newnode->next = temp->next;
// //     newnode->prev = temp;
// //     // if(temp->next != NULL){
// //     //     temp->next->prev = newnode;
// //     // }
// //     temp->next = newnode;
// // }
// // void delete_Index(Node **head,int idx){
// //     if(*head == NULL){
// //         return;
// //     }
// //     Node *temp = *head;
// //     for(int i=0;i<idx-1;i++){
// //         temp = temp->next;
// //     }
// //     Node *newnode = temp->next->next;
// //     delete(temp->next);
// //     temp->next = newnode;
// // }


// // void display(Node *head){
// //     Node *temp = head;
// //     while(temp != NULL){
// //         cout<<temp->data<<" ";
// //         temp = temp->next;
// //     }
// //     cout<<endl;
// // }

// // int main(){
// //     Node *head = NULL;

// //     insert_at_beg(&head,10);
// //     insert_at_beg(&head,20);
// //     insert_at_beg(&head,30);
// //     insert_at_beg(&head,40);
// //     insert_at_beg(&head,50);
// //     insert_at_beg(&head,60);
// //     insert_at_indx(&head,5,3);

// //     cout<<"LinkedList: ";
// //     display(head);

// //     delete_Index(&head,3);
// //     cout<<"Updated Linked List: ";
// //     display(head);

// // }




// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node *next;
// };

// void enqueue(Node **rare,Node **front,int value){
//     Node *newnode = new Node();
//     newnode->data = value;
//     newnode->next = *rare;
//     *rare = newnode;
// }

// // void display(Node **rare,Node **front){
// //     Node *temp = *rare;
// //     Node *temp1 = *front;
// //     cout<<"Rare: "<<temp->data<<" "<<endl;
// //     cout<<"Front: "<<temp1->data<<" "<<endl;
    
// //     // while(temp != NULL){
// //     //     cout<<temp->data<<" ";
// //     //     temp = temp->next;
// //     // }
// //     cout<<endl;
    
// // }

// void display(Node *rear, Node *front) {
//     if (front != nullptr) {
//         cout << "Front: " << front->data << " ";
//     } else {
//         cout << "Front: Queue is empty ";
//     }

//     if (rear != nullptr) {
//         cout << "Rear: " << rear->data << endl;
//     } else {
//         cout << "Rear: Queue is empty" << endl;
//     }
// }

// int main(){
//     Node *rare = NULL;
//     Node *front = NULL;
//     int n;
//     cout<<"Enter the number of element: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         enqueue(&rare,&front,value);
//     }
//     display(rare,front);
// }



#include<bits\stdc++.h>
using namespace std;

int main(){
    queue<int> qe;
    int n;
    cout<<"How many element you want to enter into Queue: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        qe.push(value);
    }
    cout<<"Front Element: "<<qe.front()<<endl;
    cout<<"Rare Element: "<<qe.back()<<endl;

    // cout<<"Queue: ";
    // while(qe.size()!=0){
    //     cout<<qe.front()<<" ";
    //     qe.pop();
    // }

}























