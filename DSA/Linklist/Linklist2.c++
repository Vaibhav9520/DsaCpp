
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* newNode = NULL;
    struct Node* temp = NULL;
    
    int choice = 1;
    
    while (choice) {
        newNode = (struct Node*)malloc(sizeof(struct Node));  // Added missing parentheses
        printf("Enter data: ");
        scanf("%d", &newNode->data);

        newNode->next = NULL;  // Use NULL instead of 0

        if (head == NULL) {
            head = temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }

        printf("Do you want to continue (0, 1)? ");
        scanf("%d", &choice);
    }
    
    // Traverse
    temp = head;
    while (temp != NULL) {  // Use NULL instead of 0
        printf("%d ", temp->data);
        temp = temp->next;
    }
    
    return 0;
}















