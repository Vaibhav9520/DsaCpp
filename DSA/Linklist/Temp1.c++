#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> qe;
    int n;
    cout<<"Enter Number of element: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        qe.(value);
    }
    cout<<"Front: "<<qe.front()<<endl;
    cout<<"Rare: "<<qe.back()<<endl;
    
    while(qe.size()!=0){
        int x = qe.front();
        cout<<qe.front()<<" ";
        qe.push(x);
        qe.pop();
    }
    return 0;
}
