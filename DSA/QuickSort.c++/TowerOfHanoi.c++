#include<bits\stdc++.h>
using namespace std;
void towerofhanoi(int n,char from_rod,char to_rod,char aux_rod){
    if(n==0){
        return;
    }
    towerofhanoi(n-1,from_rod,aux_rod,to_rod);
    cout<<"Move Disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl;
    towerofhanoi(n-1,aux_rod,to_rod,from_rod);
    
}
int main(){
    int N = 4;
    towerofhanoi(N,'A','C','B');
    return 0;
}