// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   int arr1[n];
//   for(int i=0;i<n;i++){
//     cin>>arr1[i];
//   }
//   int m;
//   cin>>m;
//   int arr2[m];
//   for(int i=0;i<m;i++){
//     cin>>arr2[i];
//   }

//   int mer[n+m];
//   int mewsize = 0;
//   for(int i=0;i<n;i++){
//     mer[mewsize] = arr1[i];
//     mewsize++;
//   }
//   for(int i=0;i<m;i++){
//     mer[mewsize] = arr2[i];
//     mewsize++;
//   }

//   //unique
//   for(int i=0;i<mewsize;i++){
//     int isunique = 1;
//     for(int j=i+1;j<mewsize;j++){
//       if(mer[i] == mer[j]){
//         isunique = 0;
//         break;
//       }
//     }
//     if(isunique){
//     cout<<mer[i]<<" ";
//   }
//   }
//   //print
  
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//   int a[] = {1,2,3,4,5,};
//   int *p[] = {a,a+1,a+2,a+3,a+4};
//   int **ptr = p;
//   cout<<a<<" "<<*a<<endl;
//   cout<<p<<" "<<*p<<" "<<**ptr<<endl;
//   cout<<ptr<<" "<<*ptr<<" "<<**ptr<<endl;
// }

#include <iostream>
#include <iomanip> 
using namespace std;
double calculateCGPA(int m1, int m2, int m3, int m4, int m5) {
    double totalMarks = (m1 + m2 + m3 + m4 + m5)/5;
    double cgpa = totalMarks / 10.0;
    return cgpa;
}
int main() {
    int MI, M2, M3, M4, M5;
    cin >> MI >> M2 >> M3 >> M4 >> M5;
    int totalMarks = MI + M2 + M3 + M4 + M5;
    double cgpa = calculateCGPA(MI, M2, M3, M4, M5);
    cout << "Total Marks: " << totalMarks << endl;
    cout << fixed << setprecision(2) << "CGPA: " << cgpa << endl;
    return 0;
}