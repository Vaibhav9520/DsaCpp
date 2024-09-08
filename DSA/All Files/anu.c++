// // // #include<iostream>
// // // using namespace std;
// // // class Node{
// // //     public:
// // //     int data;
// // //     Node* next;
// // //     Node(int val){
// // //         data = val;
// // //         next = NULL;
// // //     }
// // // };
// // // void insertAtTail(Node* &head,int val){
// // //     Node* newnode = new Node(val);
// // //     if(head == NULL){
// // //         head = newnode;
// // //         return;
// // //     }
// // //     Node* temp = head;
// // //     while(temp->next != NULL){
// // //         temp = temp->next;
// // //     }
// // //     temp->next = newnode;
// // // }

// // // void insertAtHead(Node* &head,int val){
// // //     Node* newnode = new Node(val);
// // //         newnode->next = head;
// // //         head = newnode;
// // //     }


// // // void display(Node* head){
// // //     Node* temp = head;
// // //     cout<<"Linked List: ";
// // //     while(temp != NULL){
// // //         cout<<temp->data<<" ";
// // //         temp = temp->next;
// // //     }
// // //     cout<<endl;
// // // }
// // // int main(){
// // //     Node* head = NULL;

// // //     cout<<"Enter number of Element: ";
// // //     int n;
// // //     cin>>n;

// // //     for(int i=0;i<n;i++){
// // //         int element;
// // //         cout<<"Enter Element "<<i+1<<": ";
// // //         cin>>element;
// // //         insertAtTail(head,element);
// // //     }
// // //     display(head);
  

// // //     cout<<"Enter number of Element: ";
// // //     int m;
// // //     cin>>m;

// // //     for(int i=0;i<m;i++){
// // //         int element;
// // //         cout<<"Enter Element "<<i+1<<": ";
// // //         cin>>element;
// // //         insertAtHead(head,element);
// // //     }
// // //     display(head);
// // // }

















// // // #include <iostream>
// // // #include <iomanip>
// // // using namespace std;

// // // class FixedDeposit{
    
// // //     long int principalAmount;
// // //     int years;
// // //     float rate;
// // //     double returnValue;
// // //     public:
// // //         FixedDeposit(){};
// // //         void setDataFloat(long int p,int y, float r){
// // //             principalAmount = p;
// // //             years = y;
// // //             rate = r;
// // //             returnValue = principalAmount;
// // //             for (int i=0;i<years;i++){
// // //                 returnValue = returnValue * (1.0 + r);
// // //             }
// // //         }
// // //          void setDataInt(long int p,int y, int r){
// // //             principalAmount = p;
// // //             years = y;
// // //             rate = r;
// // //             returnValue = principalAmount;
// // //             for (int i=0;i<years;i++){
// // //                 returnValue = returnValue * (1.0 + float(r)/100 );
// // //             }
// // //         }

// // //         void display(){
// // //             cout << fixed << setprecision(2) << returnValue << endl;
// // //         }
// // // };

// // // int main(){
// // //     FixedDeposit FD1,FD2;
// // //     long int p;
// // //     int y;
// // //     float r;
// // //     int R;
// // //     cin>>p>>y>>R;
// // //     FD1.setDataInt(p,y,R);
// // //     cin>>p>>y>>r;
// // //     FD2.setDataFloat(p,y,r);
// // //     FD1.display();
// // //     FD2.display();
// // //     return 0;
// // // }



// // #include<iostream>
// // using namespace std;

// // void push(int arr[],int &top,int n,int value){
// //     if(top == n-1){
// //         cout<<"Stack Overflow";
        
// //     }
// //     else{
// //         top++;
// //         arr[top] = value;
// //     }
// // }

// // void pop(int arr[],int &top,int n){
// //     int temp = top;
// //     if(top == -1){
// //         cout<<"Stack Underflow";
// //     }else{
// //         cout<<"Top element: "<<temp<<endl;
// //         top--;
// //     }
// // }
// // void display(int arr[],int &top,int n){
// //     if(top == -1){
// //         cout<<"Stack is empty.";
// //     }else{
// //         for(int i=top;i>=0;i--){
// //             cout<<arr[i]<<" ";
// //         }
// //         cout<<endl;
// //     }
    
// // }

// // int main(){
    
// //     int n;
// //     cout<<"How many element you want to enter: ";
// //     cin>>n;
    
// //     int arr[n];
// //     int top = -1;
// //     for(int i=0;i<n;i++){
// //         int value;
// //         cout<<"Enter value "<<i+1<<" : ";
// //         cin>>value;
// //         push(arr,top,n,value);
// //     }
// //     cout<<"Stack: ";
// //     display(arr,top,n);
// //     pop(arr,top,n);
// //     cout<<"Updated stack: ";
// //     display(arr,top,n);
    
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// #define SIZE 10

// void push(int arr[],int &top,int n,int value){
//     if(top == SIZE-1){
//         cout<<"Stack Overflow";
        
//     }
//     else{
//         top++;
//         arr[top] = value;
//     }
// }

// void pop(int arr[],int &top,int n){
//     int temp = top;
//     if(top == -1){
//         cout<<"Stack Underflow";
//     }else{
//         cout<<"Top element: "<<temp<<endl;
//         top--;
//     }
// }
// void display(int arr[],int top,int n){
//     if(top == -1){
//         cout<<"Stack is empty.";
//     }else{
//         for(int i=top;i>=0;i--){
//             cout<<arr[i]<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// int main(){
    
//     int n;
//     cin>>n;
    
//     int arr[n];
//     int top = -1;
//     for(int i=0;i<n;i++){
//         int value;
//         cin>>value;
//         push(arr,top,n,value);
//     }
//     display(arr,top,n);
    
//     return 0;
// }








//-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-!
#include<iostream>
using namespace std;

const int MAX = 15;
class stack{
    private:
    int top;
    int arr[MAX];

    public:
    stack(){
        top = -1;
    }
    //push
    void push(int value){
        if(top == MAX -1){
            cout<<"Stack Overflow"<<endl;
            return;
        }else{
            top++;
            arr[top] = value;
        }
    }

    void pop(){
        int item = top;
        cout<<"Top Element "<<item;
        top--;

    }

    void display(){
        if(top == -1){
            cout<<"Stack Empty"<<endl;
            return;
        }else{
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }


};

int main(){
    stack s;
    int n;
    cin>>n;

    if(n == 0){
        cout<<"Stack is Empty"<<endl;
        
    }else if(n >15){
        cout<<"Stack Overflow"<<endl;
       
    }else{
        for(int i=0;i<n;i++){
            int value;
            cin>>value;
            s.push(value);
        }
    }
    s.display();
    s.pop();
    s.display();
    return 0;
}














