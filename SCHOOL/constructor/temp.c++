/*Here are the answers to your questions:

1. How many general-purpose registers are typically found in a basic computer architecture?
   - 16

2. Which register is commonly used to store the memory address of the next instruction to be executed?
   - Program Counter

3. Which register is used to keep track of the address of the top of the stack in a stack-based architecture?
   - Stack Pointer

4. What happens when you try to pop an element from an empty stack?
   - Stack Underflow

5. What is the purpose of an instruction format in computer architecture?
   - To define the layout of an instruction in memory

6. What does the immediate mode in an instruction format represent?
   - The value of the operand itself

7. What does the STA instruction do in most computer architectures?
   - It is used to transfer data from memory to a register.

8. Which in the below instruction is not related to Logical and Bit Manipulation Instructions
   - INC

9. What is a subroutine in computer programming?
   - A small program that performs a specific task and can be reused.

10. What is the purpose of the return address in a subroutine call?
    - It indicates the memory location where the program should return after the subroutine finishes.

11. What is the purpose of the Interrupt Service Routine (ISR)?
    - To process an interrupt and perform necessary actions.
.
.....
12. What is a program interrupt in computer architecture?
    - An event that temporarily stops the normal execution of a program.

13. What is the main advantage of Interrupt-Initiated I/O mode?
    - It allows the CPU to perform I/O operations concurrently with other tasks.

14. In the context of RISC vs. CISC, what is the primary trade-off between the two?
    - RISC emphasizes simplicity and faster execution, while CISC offers a larger and more complex instruction set.

15. Which of the following is a characteristic of CISC architectures?
    - Extensive use of simple instructions

16. What are peripheral devices in computer systems?
    - Devices connected to the computer but not part of the core system unit.

17. What is the role of a buffer in I/O operations?
    - To temporarily store data during input or output operations.

18. In an I/O interface, what is the purpose of the I/O address line?
    - It provides addresses for communicating with peripheral devices.

19. In asynchronous data transfer, what is the purpose of the stop bit?
    - To indicate the end of a data frame.

20. Strobe is a ________
    - Control signal

21. In Programmed I/O, what is the role of the CPU?
    - To directly manage data transfer between I/O devices and memory.

22. What is the main limitation of Programmed I/O?
    - It can lead to inefficiencies due to the CPU's involvement in I/O operations.

23. Which mechanism allows a CPU to handle multiple interrupt requests?
    - Interrupt Vector Table (IVT)

24. In Interrupt-Initiated I/O mode, how is an I/O operation initiated?
    - By the I/O device sending an interrupt request to the CPU.

25. What is Direct Memory Access (DMA) in computer organization?
    - A technique where I/O devices directly transfer data to/from memory without CPU intervention.

26. In DMA, what is the role of the DMA controller?
    - To coordinate data transfer between I/O devices and memory.

27. What happens to the CPU during a DMA operation?
    - It continues executing other instructions in parallel with the DMA operation.

28. Which of the following is not a type of interrupt in computer systems?
    - Internal Interrupt

29. In computer architecture, which data transfer mode allows the processor to read or write multiple words of data in a single memory access?
    - Burst Mode

30. Which of the following is a characteristic of RISC architectures?
    - Emphasis on simple and fast instructions.

    */
 
 
 
//  #include <stdio.h>
// #include <stdlib.h>

// // Definition for a binary tree node
// struct TreeNode {
//     int val;
//     struct TreeNode* left;
//     struct TreeNode* right;
// };

// // Function to build the binary tree from user input
// struct TreeNode* buildTree(int arr[], int* index, int n) {
//     if (*index >= n  arr[*index] == -1) {
//         (*index)++;
//         return NULL;
//     }

//     struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
//     root->val = arr[(*index)];
//     (*index)++;
//     root->left = buildTree(arr, index, n);
//     root->right = buildTree(arr, index, n);

//     return root;
// }

// // Inorder traversal to get the elements in sorted order
// void inorder(struct TreeNode* root, int sorted[], int* index) {
//     if (!root) {
//         return;
//     }
//     inorder(root->left, sorted, index);
//     sorted[(*index)++] = root->val;
//     inorder(root->right, sorted, index);
// }

// // Function to find the minimum number of swaps to convert BST
// int minSwapsToBST(struct TreeNode* root) {
//     int sorted[1000]; // Assuming a maximum of 1000 nodes
//     int index = 0;
//     inorder(root, sorted, &index);
//     struct {
//         int value;
//         int index;
//     } arrpos[1000]; // Assuming a maximum of 1000 nodes

//     int n = index; // Number of elements in the tree

//     for (int i = 0; i < n; i++) {
//         arrpos[i].value = sorted[i];
//         arrpos[i].index = i;
//     }

//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arrpos[j].value > arrpos[j + 1].value) {
//                 int temp_value = arrpos[j].value;
//                 arrpos[j].value = arrpos[j + 1].value;
//                 arrpos[j + 1].value = temp_value;

//                 int temp_index = arrpos[j].index;
//                 arrpos[j].index = arrpos[j + 1].index;
//                 arrpos[j + 1].index = temp_index;
//             }
//         }
//     }

//     // Visited array to keep track of visited elements
//     int visited[1000] = {0};
//     int ans = 0;

//     for (int i = 0; i < n; i++) {
//         if (visited[i]  arrpos[i].index == i) {
//             continue;
//         } else {
//             int j = i;
//             int cycle_size = 0;
//             while (!visited[j]) {
//                 visited[j] = 1;
//                 j = arrpos[j].index;
//                 cycle_size++;
//             }
//             if (cycle_size > 0) {
//                 ans += (cycle_size - 1);
//             }
//         }
//     }

//     return ans;
// }

// int main() {
//     int n;
//     scanf("%d", &n);

//     int arr[100]; 
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int index = 0;
//     struct TreeNode* root = buildTree(arr, &index, n);

//     int swaps = minSwapsToBST(root);
//     printf("%d\n", swaps);
// //awasthi
//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>

// Definition for a binary tree node
struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to build the binary tree from user input
struct TreeNode* buildTree(int arr[], int* index, int n) {
    if (*index >= n || arr[*index] == -1) {
        (*index)++;
        return NULL;
    }

    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = arr[(*index)];
    (*index)++;
    root->left = buildTree(arr, index, n);
    root->right = buildTree(arr, index, n);

    return root;
}

// Inorder traversal to get the elements in sorted order
void inorder(struct TreeNode* root, int sorted[], int* index) {
    if (!root) {
        return;
    }
    inorder(root->left, sorted, index);
    sorted[(*index)++] = root->val;
    inorder(root->right, sorted, index);
}

// Function to find the minimum number of swaps to convert to BST
int minSwapsToBST(struct TreeNode* root) {
    int sorted[1000]; 
    int index = 0;
    inorder(root, sorted, &index);
    struct {
        int value;
        int index;
    } arrpos[1000]; 
    int n = index; 

    for (int i = 0; i < n; i++) {
        arrpos[i].value = sorted[i];
        arrpos[i].index = i;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arrpos[j].value > arrpos[j + 1].value) {
                int temp_value = arrpos[j].value;
                arrpos[j].value = arrpos[j + 1].value;
                arrpos[j + 1].value = temp_value;

                int temp_index = arrpos[j].index;
                arrpos[j].index = arrpos[j + 1].index;
                arrpos[j + 1].index = temp_index;
            }
        }
    }

    // Visited array to keep track of visited elements
    int visited[1000] = {0};
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (visited[i] || arrpos[i].index == i) {
            continue;
        } else {
            int j = i;
            int cycle_size = 0;
            while (!visited[j]) {
                visited[j] = 1;
                j = arrpos[j].index;
                cycle_size++;
            }
            if (cycle_size > 0) {
                ans += (cycle_size - 1);
            }
        }
    }

    return ans;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[100]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int index = 0;
    struct TreeNode* root = buildTree(arr, &index, n);

    int swaps = minSwapsToBST(root);
    printf("%d\n", swaps);

    return 0;
}
