#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int value){
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node *root,int value){
    if(root == NULL){
        return new Node(value);
    }
    if(value < root->data){
        root->left = insertBST(root->left,value);
    }else{
        root->right = insertBST(root->right,value);
    }
    return root;
}

// void inorder(Node *root){
//     if(root == NULL){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);

// }

int serach(Node *root,int key){
    if(root == NULL){
        return 0;
    }
    if(key == root->data){
        return 1;
    }
    if(key < root->data){
        return serach(root->left,key);
    }else{
        return serach(root->right,key);
    }

}

void minElement(Node *root){
    Node *temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    cout<<"Minimun Element: "<<temp->data;
}

void maxElement(Node *root){
    Node *temp = root;
    while(temp->right != NULL){
        temp = temp->right;
    }
    cout<<"\nMaximun Element: "<<temp->data;
}

int main(){
    Node *root = NULL;

    root = insertBST(root,5);
    insertBST(root,10);
    insertBST(root,20);
    insertBST(root,30);
    insertBST(root,40);
    insertBST(root,50);
    insertBST(root,60);
    int a = serach(root,80);
    if(a == 0){
        cout<<"No";
    }else{
        cout<<"yes";
    }
    cout<<endl;
    minElement(root);
    maxElement(root);
}