#include<bits\stdc++.h>
#include<fstream>
using namespace std;
int main(){
    // string name;
    // cout<<"Enter name: ";
    // getline(cin,name);
    // ofstream of("Prachi.txt");
    // of<<name;
    // of.close();
    // cout<<"Data saved\n";

    // string s;
    // ifstream inf("Prachi.txt");
    // getline(inf,s);
    // cout<<s;
    // inf.close();
    // for multiple line

    // ofstream wout;
    // wout.open("lpu1.txt");
    // wout<<"This is me\n";
    // wout<<"This is me vipin \n";
    // wout<<"This is me suchita \n";
    // wout<<"This is me aashit \n";
    // wout.close();
    // string sentence;
    // ifstream readout;
    // readout.open("lpu1.txt");
    // while(readout.eof() == 0){
    //     getline(readout,sentence);
    //     cout<<sentence<<endl;
    // }


    // char s[30];
    // ofstream fileout;
    // ifstream filein;
    // fileout.open("data",ios::app);
    // fileout<<"Hello world";
    // fileout.close();

    // filein.open("data",ios::in);
    // filein.getline(s,30);
    // cout<<s;



    // char s[30];
    // ofstream fileout;
    // fstream file;
    // fileout.open("hello",ios::out);
    // fileout<<"Hello world";
    // file.close();
    // file.open("hello",ios::in|ios::out);
    // cout<<file.tellg();
    // cout<<file.tellg();
    // file.seekp(6);
    // file.seekg(6);
    // cout<<file.tellg();
    // cout<<file.tellp();
    // file>>s;
    // cout<<s;
    
    char fname[20],ch;
    ifstream fin;

    cout<<"Enter the name of the file:";
    cin.get(fname,20);
    cin.get(ch);
    fin.open(fname,ios::in);
    if(!fin){
        cout<<"An error occurrend in the opening the file: \n";
        return 0;
    }
    while(fin){
        fin.get(ch);
        cout<<ch;
    }

     return 0;

}