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

    // Insertion at beginning
    struct Node* newBeginning = (struct Node*)malloc(sizeof(struct Node));
    int infoBeginning;
    printf("Enter info for beginning: ");
    scanf("%d", &infoBeginning);
    newBeginning->data = infoBeginning;
    newBeginning->next = head;
    head = newBeginning;

    // Insertion at end
    struct Node* newEnd = (struct Node*)malloc(sizeof(struct Node));
    int infoEnd;
    printf("Enter info for end: ");
    scanf("%d", &infoEnd);
    newEnd->data = infoEnd;
    newEnd->next = NULL;

    ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = newEnd;



    // Insertion at a specific value----------------------------------------
    int info;
    int x;
    printf("Enter info to insert: ");
    scanf("%d", &info);
    printf("Enter value after which to insert: ");
    scanf("%d", &x);

    ptr = head;
    while (ptr != NULL && ptr->data != x) {
        ptr = ptr->next;
    }
    if (ptr != NULL) {
        struct Node* new = (struct Node*)malloc(sizeof(struct Node));
        new->data = info;
        new->next = ptr->next;
        ptr->next = new;
    } else {
        printf("Value %d not found in the list.\n", x);
    }


// // deletion at beginning
//     struct Node* delete = (struct Node*)malloc(sizeof(struct Node));
//     int infodelete;
//     printf("Enter info for to delet: ");
//     scanf("%d", &infodelete);
//     delete->data = infodelete;
//     delete->next = head;
//     head = delete;





    // Traverse and print the linked list------------------------------------
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    // Free allocated memory
    ptr = head;
    while (ptr != NULL) {
        struct Node* nextNode = ptr->next;
        free(ptr);
        ptr = nextNode;
    }

    return 0;
}
