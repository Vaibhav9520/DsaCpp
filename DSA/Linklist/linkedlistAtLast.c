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

    // // Insertion at beginning
    // struct Node* newBeginning = (struct Node*)malloc(sizeof(struct Node));
    // int infoBeginning;
    // printf("Enter info for beginning: ");
    // scanf("%d", &infoBeginning);
    // newBeginning->data = infoBeginning;
    // newBeginning->next = head;
    // head = newBeginning;

    // // Insertion at end
    // struct Node* newEnd = (struct Node*)malloc(sizeof(struct Node));
    // int infoEnd;
    // printf("Enter info for end: ");
    // scanf("%d", &infoEnd);
    // newEnd->data = infoEnd;
    // newEnd->next = NULL;

    // ptr = head;
    // while (ptr->next != NULL) {
    //     ptr = ptr->next;
    // }
    // ptr->next = newEnd;



    // Insertion at a specif    ic value----------------------------------------
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
//     struct Node* deleteNode;
//     if (head == NULL) {
//         printf("List is already empty.");
//     } else {
//         deleteNode = head;
//         head = head->next;
//         free(deleteNode);
//     }


// // Deletion at the end
//     if (head == NULL) {
//         printf("List is already empty.");
//     } else if (head->next == NULL) {
        
//         free(head);
//         head = NULL;
//     } else {
//         ptr = head;
//         while (ptr->next->next != NULL) {
//             ptr = ptr->next;
//         }
//         free(ptr->next);
//         ptr->next = NULL;
//     }

// // Deletion at a given node
    int valueToDelete;
    printf("Enter value to delete: ");
    scanf("%d", &valueToDelete);

    if (head == NULL) {
        printf("List is already empty.");
    } else if (head->data == valueToDelete) {
        // Delete the first node
        struct Node* temp = head;
        head = head->next;
        free(temp);
    } else {
        struct Node* prev = NULL;
        ptr = head;
        while (ptr != NULL && ptr->data != valueToDelete) {
            prev = ptr;
            ptr = ptr->next;
        }
        if (ptr == NULL) {
            printf("Value not found in the list.\n");
        } else {
            prev->next = ptr->next;
            free(ptr);
        }
    }



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
