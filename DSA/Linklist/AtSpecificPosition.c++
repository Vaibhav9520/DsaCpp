// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     struct node* prev;
//     int data;
//     struct node* next;
// };

// // Function to create a new node
// struct node* createNode(int data) {
//     struct node* newNode = (struct node*)malloc(sizeof(struct node));
//     if (newNode == NULL) {
//         printf("Memory allocation failed!\n");
//         exit(1);
//     }
//     newNode->data = data;
//     newNode->prev = NULL;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to insert a node at a specific position
// struct node* insertAtPosition(struct node* head, int data, int position) {
//     if (position < 0) {
//         printf("Invalid position!\n");
//         return head;
//     }

//     struct node* newNode = createNode(data);
//     if (position == 0) {
//         if (head == NULL) {
//             newNode->next = newNode;
//             newNode->prev = newNode;
//         } else {
//             newNode->next = head;
//             newNode->prev = head->prev;
//             head->prev->next = newNode;
//             head->prev = newNode;
//         }
//         return newNode; // New node becomes the head
//     } else {
//         if (head == NULL) {
//             printf("List is empty, cannot insert at position %d\n", position);
//             return NULL;
//         }

//         struct node* current = head;
//         int currentPos = 0;
//         while (currentPos < position && current->next != head) {
//             current = current->next;
//             currentPos++;
//         }

//         if (currentPos < position) {
//             printf("Position %d is beyond the end of the list\n", position);
//             return head;
//         }

//         newNode->next = current->next;
//         newNode->prev = current;
//         current->next->prev = newNode;
//         current->next = newNode;

//         return head;
//     }
// }

// int main() {
//     struct node* head = NULL;
//     int choice = 1;

//     while (choice) {
//         int data;
//         printf("Enter Data: ");
//         scanf("%d", &data);

//         struct node* newNode = createNode(data);

//         if (head == NULL) {
//             newNode->next = newNode;
//             newNode->prev = newNode;
//             head = newNode;
//         } else {
//             struct node* lastNode = head->prev;
//             newNode->next = head;
//             newNode->prev = lastNode;
//             lastNode->next = newNode;
//             head->prev = newNode;
//         }

//         printf("Do you want to continue (0, 1)? ");
//         scanf("%d", &choice);
//     }

//     // Insert a new node at a specific position
//     int position, dataToInsert;
//     printf("Enter the position to insert: ");
//     scanf("%d", &position);
//     printf("Enter data to insert at position %d: ", position);
//     scanf("%d", &dataToInsert);

//     head = insertAtPosition(head, dataToInsert, position);

//     // Traverse and print the circular doubly linked list
//     if (head == NULL) {
//         printf("List is empty.\n");
//     } else {
//         printf("Circular Doubly Linked List:\n");
//         struct node* current = head;
//         do {
//             printf("%d ", current->data);
//             current = current->next;
//         } while (current != head);
//         printf("\n");
//     }

//     // Free memory
//     if (head != NULL) {
//         struct node* current = head->next;
//         while (current != head) {
//             struct node* temp = current;
//             current = current->next;
//             free(temp);
//         }
//         free(head);
//     }

//     return 0;
// }

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

//insert after 2 node;
struct node* insertAfterPosition(struct node* head, int data, int position) {
    if (position < 0) {
        printf("Invalid position!\n");
        return head;
    }

    struct node* newNode = createNode(data);

    if (head == NULL) {
        printf("List is empty, cannot insert at position %d\n", position);
        return NULL;
    }

    struct node* current = head;
    int currentPos = 0;
    while (currentPos < position && current->next != head) {
        current = current->next;
        currentPos++;
    }

    if (currentPos < position) {
        printf("Position %d is beyond the end of the list\n", position);
        return head;
    }

    struct node* nodeToInsertAfter = current->next;
    newNode->next = nodeToInsertAfter;
    newNode->prev = current;
    current->next = newNode;
    nodeToInsertAfter->prev = newNode;

    return head;
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

    //call insert function
    int position, dataToInsert;
    printf("Enter the position to insert after : ");
    scanf("%d", &position);
    printf("Enter data to insert after position %d: ", position);
    scanf("%d", &dataToInsert);

    head = insertAfterPosition(head, dataToInsert, position + 2);

    // Traverse
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

