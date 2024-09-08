// #include<iostream>
// #include<cmath>
// using namespace std;
// //for prime number..
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     bool flage=0;
//     for(int i=2;i<sqrt(n);i++){
//         if (n%i==0){
//             cout<<"Non Prime"<<endl;
//             flage=1;
//             break;
//         }
//     }if(flage==0);
//         cout<<"Prime"<<endl;
//     return 0;
// }

//----------------------------------------------------------------------
// #include<iostream>                 //Armstrong number...............
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin>>n;
//     int sum=0;
//     int original=n;
//     while(n>0){
//         int lastdigit = n%10;
//         sum+= pow(lastdigit,3);
//         n=n/10;
//     }
//     if(sum==original){
//         cout<<"Armstrong Number"<<endl;
//     }else{
//         cout<<"Not armstrong number"<<endl;
//     }
//     return 0;
// }
//----------------------------------------------------------------

#include<iostream>
using namespace std;
//for prime number..
int main(){
    int n;
    int counter = 0;
    cout<<"Enter any number "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            counter++;
        }
    }if(counter==2){
        cout<<"Prime Number"<<endl;
    }else{
        cout<<"Not a prime number"<<endl;
    }
}