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
int searchElement(struct Node *root,int value){
    if(root == NULL){
        return 0;
    }
    if(root->data == value){
        return 1;
    }
    else if(root->data > value){
        searchElement(root->left,value);
    }else{
        searchElement(root->right,value);
    }
}

void Min(struct Node *root){
    if(root == NULL){
        return;
    }
    struct Node *temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    cout<<temp->data<<" ";
}
void Max(struct Node *root){
    if(root == NULL){
        return;
    }
    struct Node *temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    cout<<temp->data<<" ";
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
    cout<<"Tree: ";
    inorderTraversal(root);

    int result = searchElement(root,10);
    if(result == 0){
        cout<<" NoT Present";
    }
    else{
        cout<<"present\n";
    }
    cout<<"\n Maximum element: ";
    Max(root);
    cout<<"\n Minimum element: ";
    Min(root);
    return 0;
}