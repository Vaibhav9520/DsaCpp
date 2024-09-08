#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

void insert_tree(struct Node **root,int value){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;

    //first element;
    if(*root == NULL){
        *root = newnode;
        return;
    }

    struct Node *temp = *root;
    while(1){
        if(temp->data > value){
            if(temp->left == NULL){
                temp->left = newnode;
                return;
            }
            temp = temp->left;
        }else{
            if(temp->right == NULL){
                temp->right = newnode;
                return;
            }
            temp = temp->right;
        }
    }
    return;
}

void inorderTraversal(struct Node *root){
    if(root==NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);

}

struct Node *findminimum(struct Node *root){
    if(root->left == NULL){
        return root;
    }
    return findminimum(root->left);
}

struct Node *deletionNode(struct Node *root,int value){
    if(root == NULL){
        cout<<"\nElement Not found";
        return 0;
    }
    else if(value < root->data){
        root->left = deletionNode(root->left,value);
    }
    else if(value > root->data){
        root->right = deletionNode(root->right,value);
    }
    else{
        if(root->left == NULL && root->right == NULL){
            root = NULL;
        }
        else if(root->left == NULL){
            root = root->right;
        }
        else if(root->right == NULL){
            root = root->left;
        }
        else{
            struct Node *temp = findminimum(root->right);
            root->data = temp->data;
            root->right = deletionNode(root->right,temp->data);
        }
    }
    return root;
}



int main(){
    struct Node *root = NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insert_tree(&root,value);
    }
    cout<<"Tree before deletion : ";
    inorderTraversal(root);

    deletionNode(root,10);

    cout<<"\nTree after Deletion : ";
    inorderTraversal(root);



    return 0;
}