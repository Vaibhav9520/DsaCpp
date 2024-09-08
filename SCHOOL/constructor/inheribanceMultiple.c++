
// #include<iostream>
// using namespace std;
// class X{
//     public:
//     int a;
//     void putA(){
//         cout<<"Enter value A: ";
//         cin>>a;
//     }
//     void showA(){
//         cout<<"Value of A: "<<a<<endl;
//     }
// };
// class Y:private X{
//     public:
//     int b;
//     void putB(){
//         putA();
//         cout<<"Enter Value B: ";
//         cin>>b;
//     }
//     void showB(){
//         showA();
//         cout<<"Value of B: "<<b<<endl;
//     }
    
// };
// class Z:private Y{
//     public:
//     void putC(){
//         putB();
        
//     }
//     void showC(){
//         showB();
//     }
    
// };
// int main(){
//     Z obj;
//     obj.putC();
//     obj.showC();
//     return 0;
// }



#include<iostream>
using namespace std;
class X{
    private:
    int a;
    public:
    void getX(){
        cout<<"Enter value A: ";
        cin>>a;
    }
    void showX(){
        cout<<"Value of A: "<<a<<endl;
    }
};
class Y:private X{
    private:
    int b;
    public:
    void getY(){
        getX();
        cout<<"Enter Value B: ";
        cin>>b;
    }
    void showY(){
        showX();
        cout<<"Value of B: "<<b<<endl;
    }
    
};
class Z:private Y{
    private:
    int c;
    public:
    void getZ(){
        getY();
        cout<<"Enter Value C: ";
        cin>>c;
    }
    void showZ(){
        showY();
        cout<<"Value of C: "<<c<<endl;
    }
    
};
int main(){
    Z obj;
    obj.getZ();
    obj.showZ();
    return 0;
}























