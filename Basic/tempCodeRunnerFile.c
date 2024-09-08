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

    // Creating a linked list using user input
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

    // Deletion at the beginning
    struct Node* deleteNode;
    if (head == NULL) {
        printf("List is already empty.");
    } else {
        deleteNode = head;
        head = head->next;
        free(deleteNode);
    }

    // Traverse and print the linked list
    ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

    // Free allocated memory for the entire linked list
    ptr = head;
    while (ptr != NULL) {
        struct Node* nextNode = ptr->next;
        free(ptr);
        ptr = nextNode;
    }

    return 0;
}
