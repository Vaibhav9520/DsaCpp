#include<iostream>
using namespace std;
class Dog{
    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};
class Baby_of_dog: private Dog{
    public:
    void weep(){
        eat();
        cout<<"Weeping"<<endl;
    }
};
int main(){
    Baby_of_dog obj;
    obj.weep();
    return 0;
}