// #include<bits\stdc++.h>
// using namespace std;
// class A{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     void getA(){
//         cout<<"\nEnter A: ";
//         cin>>a;
//         cout<<"\nEnter B: ";
//         cin>>b;
//         cout<<"\nEnter c: ";
//         cin>>c;
//     }
//     void showA(){
//         cout<<"\nA = "<<a;
//         cout<<"\nB = "<<b;
//         cout<<"\nC = "<<c;
//     }
// };

// class B:public A{
//     private:
//     int d;
//     protected:
//     int e;
//     public:
//     int f;
//     void getB(){
//         cout<<"\nEnter D: ";
//         cin>>d;
//         cout<<"\nEnter E: ";
//         cin>>e;
//         cout<<"\nEnter F: ";
//         cin>>f;
//     }
//     void showB(){
//         cout<<"\nD = "<<d;
//         cout<<"\nE = "<<e;
//         cout<<"\nF = "<<f;
//     }
// };
// int main(){
//     B a1;
//     a1.getA();
//     a1.getB();
//     a1.showA();
//     a1.showB();
//     return 0;
// }


// #include<bits\stdc++.h>
// using namespace std;
// class A{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     void getA(){
//         cout<<"\nEnter A: ";
//         cin>>a;
//         cout<<"\nEnter B: ";
//         cin>>b;
//         cout<<"\nEnter c: ";
//         cin>>c;
//     }
//     void showA(){
//         cout<<"\nA = "<<a;
//         cout<<"\nB = "<<b;
//         cout<<"\nC = "<<c;
//     }
// };

// class B:private A{
//     private:
//     int d;
//     protected:
//     int e;
//     public:
//     int f;
//     void getB(){
//          getA();
//         cout<<"\nEnter D: ";
//         cin>>d;
//         cout<<"\nEnter E: ";
//         cin>>e;
//         cout<<"\nEnter F: ";
//         cin>>f;
//     }
//     void showB(){
//          showA();
//         cout<<"\nD = "<<d;
//         cout<<"\nE = "<<e;
//         cout<<"\nF = "<<f;
//     }
// };
// int main(){
//     B a1;
//     //a1.getA();
//     a1.getB();
//     //a1.showA();
//     a1.showB();
//     return 0;
// }




// #include<bits\stdc++.h>
// using namespace std;
// class A{
//     private:
//     int a;
//     protected:
//     int b;
//     public:
//     int c;
//     void getA(){
//         cout<<"\nEnter A: ";
//         cin>>a;
//         cout<<"\nEnter B: ";
//         cin>>b;
//         cout<<"\nEnter c: ";
//         cin>>c;
//     }
//     void showA(){
//         cout<<"\nA = "<<a;
//         cout<<"\nB = "<<b;
//         cout<<"\nC = "<<c;
//     }
// };

// class B:protected A{
//     private:
//     int d;
//     protected:
//     int e;
//     public:
//     int f;
//     void getB(){
//          getA();
//         cout<<"\nEnter D: ";
//         cin>>d;
//         cout<<"\nEnter E: ";
//         cin>>e;
//         cout<<"\nEnter F: ";
//         cin>>f;
//     }
//     void showB(){
//          showA();
//         cout<<"\nD = "<<d;
//         cout<<"\nE = "<<e;
//         cout<<"\nF = "<<f;
//     }
// };
// int main(){
//     B a1;
//     //a1.getA();
//     a1.getB();
//     //a1.showA();
//     a1.showB();
//     return 0;
// }


//============MULTIPLE INHERITANCE=======================

#include<bits\stdc++.h>
using namespace std;

class M{
    protected:
    int m;
    public:
    void get_m(int);
};
class N{
    protected:
    int n;
    public:
    void get_n(int);
};
class P:public M,public N{
    public:
    void display();
};

void M::get_m(int x){
    m = x;
}
void N::get_n(int y){
    n = y;
}
void P::display(){
    cout<<"M = "<<m<<"\n";
    cout<<"N = "<<n<<"\n";
    cout<<"M * N = "<<m*n<<"\n";
}


int main(){
    P p;
    p.get_m(10);
    p.get_n(20);
    p.display();
    return 0;
}