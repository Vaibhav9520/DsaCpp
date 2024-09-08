// // #include <stdio.h>
// // #include <stdlib.h>

// // struct node {
// //     struct node* prev;
// //     int data;
// //     struct node* next;
// // };

// // // Function to create a new node
// // struct node* createNode(int data) {
// //     struct node* newNode = (struct node*)malloc(sizeof(struct node));
// //     if (newNode == NULL) {
// //         printf("Memory allocation failed!\n");
// //         exit(1);
// //     }
// //     newNode->data = data;
// //     newNode->prev = NULL;
// //     newNode->next = NULL;
// //     return newNode;
// // }

// // int main() {
// //     struct node* head = NULL;
// //     int choice = 1;

// //     while (choice) {
// //         int data;
// //         printf("Enter Data: ");
// //         scanf("%d", &data);

// //         struct node* newNode = createNode(data);

// //         if (head == NULL) {
// //             newNode->next = newNode;
// //             newNode->prev = newNode;
// //             head = newNode;
// //         } else {
// //             struct node* lastNode = head->prev;
// //             newNode->next = head;
// //             newNode->prev = lastNode;
// //             lastNode->next = newNode;
// //             head->prev = newNode;
// //             head = newNode; 
// //         }

// //         printf("Do you want to continue (0, 1)? ");
// //         scanf("%d", &choice);
// //     }


// //     // Traverse 
// //     if (head == NULL) {
// //         printf("List is empty.\n");
// //     } else {
// //         printf("Circular Doubly Linked List:\n");
// //         struct node* current = head;
// //         do {
// //             printf("%d ", current->data);
// //             current = current->next;
// //         } while (current != head);
// //         printf("\n");
// //     }

// //     // Free memory
// //     if (head != NULL) {
// //         struct node* current = head;
// //         do {
// //             struct node* temp = current;
// //             current = current->next;
// //             free(temp);
// //         } while (current != head);
// //     }

// //     return 0;
// // }

#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* prev;
    int data;
    struct node* next;
};


struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

int main() {
    struct node* head = NULL;
    int choice = 1;

    while (choice) {
        int data;
        printf("Enter Data: ");
        scanf("%d", &data);

        struct node* newNode = createNode(data);

        if (head == NULL) {
            newNode->next = newNode;
            newNode->prev = newNode;
            head = newNode;
        } else {
            struct node* lastNode = head->prev;
            newNode->next = head;
            newNode->prev = lastNode;
            lastNode->next = newNode;
            head->prev = newNode;
        }

        printf("Do you want to continue (0, 1)? ");
        scanf("%d", &choice);
    }

    // Insert a new node at the end
    int infoEnd;
    printf("Enter info for end: ");
    scanf("%d", &infoEnd);
    struct node* newNodeEnd = createNode(infoEnd);
    if (head == NULL) {
        newNodeEnd->next = newNodeEnd;
        newNodeEnd->prev = newNodeEnd;
        head = newNodeEnd;
    } else {
        newNodeEnd->next = head;
        newNodeEnd->prev = head->prev;
        head->prev->next = newNodeEnd;
        head->prev = newNodeEnd;
    }

    // Traverse and print the circular doubly linked list
    if (head == NULL) {
        printf("List is empty.\n");
    } else {
        printf("Circular Doubly Linked List:\n");
        struct node* current = head;
        do {
            printf("%d ", current->data);
            current = current->next;
        } while (current != head);
        printf("\n");
    }

    // Free memory
    if (head != NULL) {
        struct node* current = head->next;
        while (current != head) {
            struct node* temp = current;
            current = current->next;
            free(temp);
        }
        free(head);
    }

    return 0;
}

// #include<iostream>
// using namespacestd;


// class Node{
// public:
//     int data;
//     Node* next;
//     Node* prev;
//     Node(){
//         this->data=0;
//         this->next=NULL;
//         this->prev=NULL;
//     }
//     Node(int data){
//     this->data=data;
//     this->next=NULL;
//     this->prev=NULL;
// }
// };

// void insertAtTail(Node* &head,Node* &tail,int data){
//     if(head==NULL){
//     Node* newnode = new Node(data);
//     head = newnode;
//     tail = newnode;
//     newnode->next=head;
//     return;
// }
//     Node* newnode = new Node(data);
//     tail->next = newnode;
//     newnode->prev=tail;
//     tail = newnode;
//     newnode->next=head;
// }
// void insertAtHead(Node* &head,Node* &tail,int data){
// if(head==NULL){
// Node* newnode = new Node(data);
// head = newnode;
// tail = newnode;

// return;
// }
// Node* newnode = new Node(data);
// newnode->next = head;
// newnode->prev=head;
// head = newnode;
// tail->next=head;
// }
// void print(Node* &head){
// Node* temp = head;
// if(temp == NULL){
// std::cout<<"LL is empty"<<std::endl;
// }
// do{
// std::cout<<temp->data<<" ";
// temp=temp->next;
// }while(temp != head);

// }
// int main(){
// Node* head = NULL;
// Node* tail = NULL;
// int n;
// std::cin>>n;
// for(int i = 0;i<n; i++){
// int data;
// std::cin>>data;
// insertAtHead(head,tail,data);
// }
// std::cout<<"simple linked list: ";
// print(head);

// }