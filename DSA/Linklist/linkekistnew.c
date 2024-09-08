
// struct Node {
//     int data;
//     struct Node* next;
// };

// int main() {
//     struct Node* head = NULL;
//     struct Node* newNode = NULL;
//     struct Node* temp = NULL;
    
//     int choice = 1;
    
//     while (choice) {
//         newNode = (struct Node*)malloc(sizeof(struct Node));  // Added missing parentheses
//         printf("Enter data: ");
//         scanf("%d", &newNode->data);

//         newNode->next = NULL;  // Use NULL instead of 0

//         if (head == NULL) {
//             head = temp = newNode;
//         } else {
//             temp->next = newNode;
//             temp = newNode;
//         }

//         printf("Do you want to continue (0, 1)? ");
//         scanf("%d", &choice);
//     }
    
//     struct node *new;
//     int info;
//     new = (struct node*)malloc(sizeof(struct node));
//     printf("Enter info:");
//     scanf("%d",&info);
//     new->data = info;
//     new->next = head;
//     head = new;



//     // Traverse
//     temp = head;
//     while (temp != NULL) {  // Use NULL instead of 0
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
    
//     return 0;
// }

//=======================================================

// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* next;
// };

// int main() {
//     struct Node* head = NULL;
//     struct Node* newNode = NULL;
//     struct Node* temp = NULL;

//     int choice = 1;

//     while (choice) {
//         newNode = (struct Node*)malloc(sizeof(struct Node));

//         printf("Enter data: ");
//         scanf("%d", &newNode->data);

//         newNode->next = NULL;

//         if (head == NULL) {
//             head = temp = newNode;
//         } else {
//             temp->next = newNode;
//             temp = newNode;
//         }

//         printf("Do you want to continue (0, 1)? ");
//         scanf("%d", &choice);
//     }

//     //insertion begning
//     struct Node *new = (struct Node*)malloc(sizeof(struct Node));
    

//     int info;
//     printf("Enter info: ");
//     scanf("%d", &info);
//     new->data = info;
//     new->next = head;
//     head = new;


// //insertion at end
// struct node *ptr,*new;
// new = (struct Node*)malloc(sizeof(struct Node));
// new->data = info;
// new->next = NULL;
// ptr = head;
// if(ptr!=NULL){
//     while(ptr->next!=NULL){
//         ptr = ptr->Next;
//     }
//     ptr->next = new;
// }








//     // Traverse and print the linked list
//     temp = head;
//     while (temp != NULL) {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }

//     // Free allocated memory
//     temp = head;
//     while (temp != NULL) {
//         struct Node* nextNode = temp->next;
//         free(temp);
//         temp = nextNode;
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* newNode = NULL;
    struct Node* ptr = NULL;

    int choice = 1;

    while (choice) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;

        if (head == NULL) {
            head = ptr = newNode;
        } else {
            ptr->next = newNode;
            ptr = newNode;
        }

        printf("Do you want to continue (0, 1)? ");
        scanf("%d", &choice);
    }


    //at beginning

    struct Node *newBeginning = (struct Node*)malloc(sizeof(struct Node));
    

    int infoBeginning;
    printf("Enter info for beginning: ");
    scanf("%d", &infoBeginning);
    newBeginning->data = infoBeginning;
    newBeginning->next = head;
    head = newBeginning;

  
//at end
//     struct Node *newEnd = (struct Node*)malloc(sizeof(struct Node));
    

//     int infoEnd;
//     printf("Enter info for end: ");
//     scanf("%d", &infoEnd);
//     newEnd->data = infoEnd;
//     newEnd->next = NULL;

//     ptr = head;
//     if (ptr != NULL) {
//         while (ptr->next != NULL) {
//             ptr = ptr->next;
//         }
//         ptr->next = newEnd;
//     } else {
//         head = newEnd;
//     }

//  // Traverse and print the linked list
//     ptr = head;
//     while (ptr != NULL) {
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }

    // Free allocated memory
    ptr = head;
    while (ptr != NULL) {
        struct Node* nextNode = ptr->next;
        free(ptr);
        ptr = nextNode;
    }

    return 0;
}
