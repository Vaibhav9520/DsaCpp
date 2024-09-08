// #include<bits\stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     struct Node* left;
//     struct Node* right;
//     Node(int value){
//         data = value;
//         left = NULL;
//         right = NULL;
//     }
// };


// void preorder(struct Node* root){
//     if(root == NULL){
//         return;
//     }
//     cout<<root->data<<"->";
//     preorder(root->left);
//     preorder(root->right);
// }

// void inorder(struct Node* root){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<"->";
//     inorder(root->right);
// }

// void postorder(struct Node* root){
//     if(root == NULL){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<"->";
// }
// int main(){
//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);
//     cout<<"Preorder: ";
//     preorder(root);
//     cout<<"\nInorder: ";
//     inorder(root);
//     cout<<"\nPostorder: ";
//     postorder(root);
//     return 0;
// }


#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

node* create_node(int ele) {
    node* root = new node;
    root->data = ele;
    root->left = nullptr;
    root->right = nullptr;
    return root;
}

// Preorder Traversal
void preorder(node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder Traversal
void postorder(node* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

// Inorder Traversal
void inorder(node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    node* p = create_node(4);
    node* p1 = create_node(3);
    node* p2 = create_node(1);
    node* p3 = create_node(5);
    node* p4 = create_node(7);
    node* p5 = create_node(2);
    node* p6 = create_node(9);
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;
    
    cout << "Preorder: ";
    preorder(p);
    cout << endl;
    
    cout << "Postorder: ";
    postorder(p);
    cout << endl;
    
    cout << "Inorder: ";
    inorder(p);
    cout << endl;
    
    return 0;
}