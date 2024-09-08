#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    struct node* head = NULL;
    struct node* newnode;
    struct node* temp;

    int choice = 1;
    while (choice) {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the element : ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if (head == NULL) {
            head = newnode;
            newnode->next = head;
        } else {
            temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newnode;
            newnode->next = head;
        }

        printf("Do you want to continue (0 to stop and 1 to continue) : ");
        scanf("%d", &choice);
    }

    // // Insertion at the beginning
    // struct node* newn = (struct node*)malloc(sizeof(struct node));
    // printf("Enter the element to insert at the beginning: ");
    // scanf("%d", &newn->data);
    // newn->next = head;

    // struct node* p = head;
    // while (p->next != head) {
    //     p = p->next;
    // }
    // p->next = newn;
    // head = newn;

// // Insertion at the ending
//     struct node* newEnd = (struct node*)malloc(sizeof(struct node));
//     printf("Enter the element to insert at the END: ");
//     scanf("%d", &newEnd->data);
//     newEnd->next = NULL;

//     struct node *p = head;
//     while (p->next != head) {
//         p = p->next;
//     }
//     p->next = newEnd;
//     newEnd->next = head;
//     //head = newEnd;   Do not use this.....

    
    // // // deletion at the beginning
    
    // struct node *t;
    // t = head;
    // struct node *p = head;
    // while(t->next!=head){
    //     t=t->next;

    // }
    // p = head;
    // head = head->next;
    // t->next=head;
    // free(p);
    // p=NULL;
    // t->next=head->next;
    // head=head->next;

    // //delet from end
    // struct node *t,*p;
    // t = head,p=NULL;
    // //struct node *p = head;
    // while(t->next!=head){
    //     p=t;
    //     t=t->next;

    // }
    // p->next = head;
    
    // free(p);
    // t=NULL;

    //delet from given node
    int x;
    //printf("Enter info to insert: ");
    //scanf("%d", &info);
    printf("Enter value after which to delete: ");
    scanf("%d", &x);
    struct node *t,*p;
    t = head,p=NULL;
    //struct node *p = head;
    while(t->data!=x){
        p=t;
        t=t->next;

    }
    p->next = t->next;
    
    free(t);
    t=NULL;
    
    
    // Traverse and print the circular linked list
    temp = head;
    printf("Circular Linked List: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != head);

    return 0;
}
