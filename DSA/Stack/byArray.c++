#include<iostream>
using namespace std;

#define SIZE 3

void push(int);
void pop();
void display();

int stack[SIZE], top = -1;

int main(){
    int value,choice;
    while(1){
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){
        case 1: cout<<"Enter value:";
                cin>>value;
                push(value);
                break;
        case 2: pop();
                break;
        case 3: display();
                break;
        case 4: exit(0);
                break;
        default: cout<<"Wrong Input!!!!!!!!";
                break;
        }
    }
    return 0;
}

void push(int value){
    if(top == SIZE-1){
        cout<<"Stack overflow1!!"<<endl;
    }else{
        top++;
        stack[top] = value;
    }
}

void pop(){
    if(top == -1){
        cout<<"Stack underflow!!"<<endl;
    }else{
        cout<<"Element deleted is "<<stack[top]<<endl;
        top--;
    }
}
void display(){
    if(top == -1){
        cout<<"Stack Empty"<<endl;
    }
    else{
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" "<<endl;
        }
    }
}