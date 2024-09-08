// You are using GCC
#include<stdio.h>
#include<stdlib.h>
struct node {
    int item;
    struct node* left;
    struct node* right;
};

//inorder traversal
void inorderTraversal(struct node* root){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    printf("%d ->",root->item);
    inorderTraversal(root->right);
}

//preorderTraversal
void preorderTraversal(struct node* root){
    if(root == NULL){
        return;
    }
    printf("%d ->",root->item);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
//postorder traversal
void postorderTraversal(struct node* root){
    if(root == NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ->",root->item);
}

//creation node
struct node* creatNode(int value){
    struct node* newnode = (struct node *)malloc(sizeof(struct node));
    newnode->item = value;
    newnode->left = NULL;
    newnode->right = NULL;
    
    return newnode;
}

//insert on the left of the node;
struct node* insertLeft(struct node* root,int value){
    root->left = creatNode(value);
    return root->left;
}

//insert at right of the nodestruct
struct node* insertRight(struct node* root,int value){
    root->right = creatNode(value);
    return root->right;
}
int main(){
    struct node* root = creatNode(1);
    insertLeft(root,12);
    insertRight(root,9);
    
    insertLeft(root->left,5);
    insertRight(root->left,6);
    
    printf("Inorder Traversal : ");
    inorderTraversal(root);
    
    printf("\nPreorder Traversal: ");
    preorderTraversal(root);
    
    printf("\nPostorder Traversal: ");
    postorderTraversal(root);
    
}










