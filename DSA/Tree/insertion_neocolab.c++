#include<bits/stdc++.h>
using namespace std;

struct BNode{
    int data;
    struct BNode *left;
    struct BNode *right;
};

void add_node(struct BNode **root,int value){
    struct BNode *newNode = (struct BNode*)malloc(sizeof(struct BNode));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    //Inserting first element
    if(*root == NULL){
        *root = newNode;
        return;
    }

    struct BNode *temp = *root;
    while(1){
        if(temp->data > value){
            if(temp->left == NULL){
                temp->left = newNode;
                return;
            }
            temp = temp->left;
        }else{
            if(temp->right == NULL){
                temp->right = newNode;
                return;
            }
            temp = temp->right;
        }
    }
    return;
}
void preorderTraversal(struct BNode *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(struct BNode *root){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
void postorderTraversal(struct BNode *root){
    if(root == NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}

int main(){
    struct BNode *root = NULL;
    int n,value;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>value;
        add_node(&root,value);
    }
    cout<<"Preorder Traversal: ";
    preorderTraversal(root);
    cout<<"\nInorder Traversal: ";
    inorderTraversal(root);
    cout<<"\nPostorder Traversal: ";
    postorderTraversal(root);

    return 0;
}