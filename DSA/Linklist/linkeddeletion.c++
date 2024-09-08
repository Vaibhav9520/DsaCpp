// /*
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
// struct node *prev;
// int data;
// struct node *next;
// };


// int main()
// {
// struct node *head,*newnode,*temp;
// head=0;
// int choice=1;
// while(choice)
// {
// newnode=(struct node*)malloc(sizeof(struct node));
// printf("Enter data : ");
// scanf("%d",&newnode->data);

// newnode->prev=0;
// newnode->next=0;
// if(head==0)
// {
// head=temp=newnode;
// head->next=newnode;
// head->prev=newnode;
// }
// else
// {
// temp->next=newnode;
// newnode->prev=temp;
// newnode->next=head;
// head->prev=newnode;
// temp=temp->next;
// }
// printf("Do you want to continue (0,1) : ");
// scanf("%d",&choice);
// }


// //traverse
// temp=head;
// while(temp->next!=head)
// {
// printf(" ");
// printf("%d",temp->data);
// temp=temp->next;
// }
// printf(" ");
// printf("%d",temp->data);
// // getch();



// // //deletion at the beginning
// // struct node *p, *t;
// // p=head->prev;
// // t=head;
// // head=head->next;
// // head->prev=p;
// // p->next=head;
// // free(t);
// // t=NULL;

// // //deletion at end
// // struct node *p = head;
// // p =head->prev;
// // p->prev->next = head;
// // head->prev = p->prev;
// // free(p);
// // p=NULL;
// // 
// int x;
// printf("\nEnter node to deletion: ");
// scanf("%d",x);
// struct node *p = head;
// while (p->data != x) {
//     p = p->next;
// }
// p->prev->next = p->next;
// p->next->prev = p->prev;

// free(p);
// p = NULL;

    


// //traverse
// printf("\nElements after deletion at the specfic node: ");
// temp=head;
// while(temp->next!=head)
// {
// printf(" ");
// printf("%d",temp->data);
// temp=temp->next;
// }
// printf(" ");
// printf("%d",temp->data);
// }
// */



// //=====================================================================================
// //delete a specfic node.....
// #include <stdio.h>
// #include <stdlib.h>

// struct node
// {
//     struct node *prev;
//     int data;
//     struct node *next;
// };

// int main()
// {
//     struct node *head, *newnode, *temp;
//     head = NULL; 

//     int choice = 1;
//     while (choice)
//     {
//         newnode = (struct node *)malloc(sizeof(struct node));
//         printf("Enter data: ");
//         scanf("%d", &newnode->data);

//         newnode->prev = NULL;
//         newnode->next = NULL;

//         if (head == NULL)
//         {
//             head = temp = newnode;
//             head->next = newnode;
//             head->prev = newnode;
//         }
//         else
//         {
//             temp->next = newnode;
//             newnode->prev = temp;
//             newnode->next = head;
//             head->prev = newnode;
//             temp = temp->next;
//         }

//         printf("Do you want to continue (0,1): ");
//         scanf("%d", &choice);
//     }

    
//     temp = head;
//     printf("\nElements in the list: ");
//     do
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     } while (temp != head);
//     printf("\n");

//     int x;
//     printf("Enter node to delete: ");
//     scanf("%d", &x);
//     temp = head;
//     while (temp->data != x && temp->next != head)
//     {
//         temp = temp->next;
//     }
//     if (temp->data == x)
//     {
//         temp->prev->next = temp->next;
//         temp->next->prev = temp->prev;
//         if (temp == head)
//         {
//             head = temp->next;
//         }
//         free(temp); 
//         temp = NULL;
//     }
//     else
//     {
//         printf("Node not found.\n");
//     }
//     temp = head;
//     printf("Elements after deletion at the specific node: ");
//     do
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     } while (temp != head);
//     printf("\n");
//     return 0;
// }


//Question 1.
//Implement a program using linked list to search a perticular element;

#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
void insertAtTail(Node* &head, int val) {
    Node* n = new Node(val);
    if (head == NULL) {
        head = n; 
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}
bool searchElement(Node* head, int target) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == target) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void display(Node* head){
    cout<<"Linked List: ";
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    Node* head = NULL;
    int n;
    cout << "How many elements you want to enter: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int element;
        cout<<"Enter Element "<<i+1<<": ";
        cin >> element;
        insertAtTail(head, element);
    }
    display(head);
    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    if (searchElement(head, target)) {
        cout << "Element " << target << " found in the linked list." << endl;
    } else {
        cout << "Element " << target << " not found in the linked list." << endl;
    }
    return 0;
}
































