// // #include<iostream>
// // using namespace std;
// // class student{
// //     protected:
// //     int roll_number;
// //     public:
// //     void get_number(int a){
// //         roll_number=a;
// //     }
// //     void put_number(){
// //         cout<<"Roll No:"<<roll_number<<"\n";
// //     }
// // };

// // class test:private student{
// //     protected:
// //     float part1,part2;
// //     public:
// //     void get_marks(float x,float y){
// //         get_number();
// //         part1 = x;
// //         part2 = y;
// //     }
// //     void put_marks(){
// //         put_number();
// //         cout<<"\n"<<"Part1 = "<<part1<<"\n"<<"Part2 = "<<part2<<"\n";
// //     }
// // };
// // class sport{
// //     protected:
// //     float score;
// //     public:
// //     void get_score(float s){
// //         score=s;
// //     }
// //     void put_score(){
// //         cout<<"Sports wt:"<<score<<"\n\n";
// //     }
// // };
// // class result:private test,private sport{
// //     float total;
// //     public:
// //     void display(){
// //     put_number();
// //     }
    
// // };
// // void result::display(){
// //     total = part1 + part2 + score;
// //     put_number();
// //     put_marks();
// //     put_score();
// //     cout<<"Total Score: "<<total<<"\n";
    
// // }
// // int main(){
// //     result st1;
// //     st1.get_number(1234);
// //     st1.get_marks(27.5,33.2);
// //     st1.get_score(6.6);
// //     st1.display();
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// class student {
// protected:
//     int roll_number;

// public:
//     void get_number(int a) {
//         roll_number = a;
//     }

//     void put_number() {
//         cout << "Roll No: " << roll_number << "\n";
//     }
// };

// class test : private student {
// protected:
//     float part1, part2;

// public:
//     void get_marks(int a, float x, float y) {
//         get_number(a);
//         part1 = x;
//         part2 = y;
//     }

//     void put_marks() {
//         put_number();
//         cout << "\n"
//              << "Part1 = " << part1 << "\n"
//              << "Part2 = " << part2 << "\n";
//     }
// };

// class sport {
// protected:
//     float score;

// public:
//     void get_score(float s) {
//         score = s;
//     }

//     void put_score() {
//         cout << "Sports wt: " << score << "\n\n";
//     }
// };

// class result : public test, public sport {
//     float total;

// public:
//     void display() {
//         total = part1 + part2 + score;
//         put_marks();
//         put_score();
//         cout << "Total Score: " << total << "\n";
//     }
// };

// int main() {
//     result st1;
//     st1.get_marks(1234, 27.5, 33.2);
//     st1.get_score(6.6);
//     st1.display();
//     return 0;
// }

#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"\nIn Base class A";
    }
};
class B:public A{
    public:
    void show(){
        cout<<"\nIn Derived Class B";
    }
};
int main(){
    B obj;
    obj.show();
    //obj.A::show();
    return 0;
}