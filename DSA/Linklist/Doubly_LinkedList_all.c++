// #include <iostream>
// using namespace std;

// // Doubly linked list node
// struct Node {
//     int data;
//     Node* prev;
//     Node* next;
// };

// // Function to insert a node at the beginning of the linked list
// void insertAtBeginning(Node** head, int newData) {
//     Node* newNode = new Node();
//     newNode->data = newData;
//     newNode->prev = NULL;
//     newNode->next = (*head);

//     if ((*head) != NULL)
//         (*head)->prev = newNode;

//     (*head) = newNode;
// }

// // Function to insert a node at a given index in the linked list
// void insertAtIndex(Node** head, int newData, int index) {
//     Node* newNode = new Node();
//     newNode->data = newData;
//     newNode->prev = NULL;
//     newNode->next = NULL;

//     if (index == 0) {
//         insertAtBeginning(head, newData);
//         return;
//     }

//     Node* current = *head;
//     for (int i = 0; i < index - 1 && current != NULL; i++)
//         current = current->next;

//     if (current == NULL) {
//         cout << "Invalid index!" << endl;
//         return;
//     }

//     newNode->next = current->next;
//     newNode->prev = current;
//     if (current->next != NULL)
//         current->next->prev = newNode;
//     current->next = newNode;
// }

// // Function to delete a node at a given index in the linked list
// void deleteAtIndex(Node** head, int index) {
//     if (*head == NULL)
//         return;

//     Node* current = *head;

//     if (index == 0) {
//         *head = current->next;
//         if (*head != NULL)
//             (*head)->prev = NULL;
//         delete current;
//         return;
//     }

//     for (int i = 0; current != NULL && i < index - 1; i++)
//         current = current->next;

//     if (current == NULL || current->next == NULL) {
//         cout << "Invalid index!" << endl;
//         return;
//     }

//     Node* nextNode = current->next->next;
//     delete current->next;
//     current->next = nextNode;
//     if (nextNode != NULL)
//         nextNode->prev = current;
// }

// // Function to display the linked list
// void displayList(Node* node) {
//     while (node != NULL) {
//         cout << node->data << " ";
//         node = node->next;
//     }
//     cout << endl;
// }

// int main() {
//     Node* head = NULL;

//     // Inserting elements at the beginning
//     insertAtBeginning(&head, 5);
//     insertAtBeginning(&head, 3);
//     insertAtBeginning(&head, 1);

//     // Displaying the list
//     cout << "Linked List: ";
//     displayList(head);

//     // Inserting element at given index
//     insertAtIndex(&head, 10, 2);

//     // Displaying the updated list
//     cout << "Updated Linked List: ";
//     displayList(head);

//     // Deleting element at given index
//     deleteAtIndex(&head, 1);

//     // Displaying the updated list
//     cout << "Updated Linked List: ";
//     displayList(head);

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

// Function to display a list of integers
void showlist(const list<int>& ls) {
    for (const int& value : ls) {
        cout << value << " ";
    }
    cout << endl;
}

int main() {
    list<int> ls;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        ls.push_back(value);
    }
    
    showlist(ls); 

    ls.reverse();
    showlist(ls);
    return 0;
}