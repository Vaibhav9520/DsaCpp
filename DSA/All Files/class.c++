#include<iostream>
using namespace std;

int main() {
    int a[4] = {10, 20, 30, 40};
    int b[4] = {a[0], a[1], a[2], a[3]};
    int (*ptr)[4]; 
    ptr = &b; 

    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;
    cout << "Value of *b : " << *b << endl;
    cout << "Value of *ptr : " << *ptr << endl;

    return 0;
}

