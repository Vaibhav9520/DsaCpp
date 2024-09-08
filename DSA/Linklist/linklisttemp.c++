#include <stdio.h>
#include <stdlib.h>

// Making of Node
struct node {
    struct node *prev;
    int data;
    struct node *next;
};

int main() {
    struct node *head, *newnode, *temp;
    head = 0;
    int choice = 1;

    while (choice) {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        if (head == 0) {
            head = temp = newnode;
        } else {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }

        printf("Do you want to continue (0, 1)? ");
        scanf("%d", &choice);
    }




   // Insertion at beginning
   struct node *newn= (struct node *)malloc(sizeof(struct node));
   int info;
   printf("Enter info for beginning: ");
   scanf("%d", &info);
   newn->data = info;
   
   newn->next = head;
   head->prev = newn;
   head = newn;


//Insertion At endd

// struct node *newn = (struct node *)malloc(sizeof(struct node));
//     int info;
//     printf("Enter info for END: ");
//     scanf("%d", &info);
//     newn->data = info;

//     newn->next = NULL;
//     temp->next = newn;
//     newn->prev = temp; 
//     temp = newn; 



// Insertion at a specific value----------------------------------------
//    int info;
//    int x;
//    printf("Enter info to insert: ");
//    scanf("%d", &info);
//    printf("Enter value after which to insert: ");
//    scanf("%d", &x);
//
//    temp = head;
//    while (temp != NULL && temp->data != x) {
//        temp = temp->next;
//    }
//    if (temp != NULL) {
//        struct node *newn = (struct node *)malloc(sizeof(struct node));
//        newn->data = info;
//        newn->prev = temp;
//        newn->next = temp->next;
//        
//        if (temp->next != NULL) {
//            temp->next->prev = newn;
//        }
//        temp->next = newn;
//    } else {
//        printf("Value %d not found in the list.\n", x);
//    }
//
//
//
//




    // Traverse
    temp = head;
    while (temp != 0) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}








    
