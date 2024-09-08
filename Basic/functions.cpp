#include<iostream>
using namespace std;
// PRIME NUMBER
/*
bool isPrime(int num){
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }return true;
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++){
        if(isPrime(i)==true){
            cout<<i<<endl;
        }
    }
    return 0;
}*/

// FIBBONACHI SEQUENCE
// void fib(int n){
//     int t1=0;
//     int t2=1;
//     int nexterm;
//     for(int i=1;i<=n;i++){
//         cout<<i<<endl;
//         nexterm=t1+t2;
//         t1=t2;
//         t2=nexterm;
//     }
//     return;
// }

// int main(){
//     int n;
//     cin>>n;
//     fib(n);
//     return 0;
// }

//factorial

int fact(int n){
    int factorial=1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }return factorial;
}

int main(){
    int n;
    cin>>n;

    int ans=fact(n);
    cout<<ans<<endl;
}