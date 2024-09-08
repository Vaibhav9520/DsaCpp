// // #include<iostream>
// // using namespace std;
// // class X{
// //     public:
// //     int a;
// //     void f(int b){
// //         cout<<"The value of b is = "<<b<<endl;
// //     }
// // };
// // int main(){
// //     int X::*ptiptr = &X::a;

// //     void(X::* ptfptr)(int) = &X::f;

// //     X xobject;

// //     xobject.*ptiptr = 10;
// //     cout<<"The value of a is = "<<xobject.*ptiptr<<endl;
// //     (xobject.*ptfptr)(20);
// // }

// #include <iostream>
// #include <string>

// using namespace std;

// class BankATM {
//     private:
//         int atm_id;
        
//         float available_cash;
//     public:
//         BankATM(int id, float cash) {
//             atm_id = id;
           
//             available_cash = cash;
//         }
//         void withdraw(float amount) {
//             if (amount > available_cash) {
//                 cout << "Withdrawal failed. Insufficient funds." << endl;
//             } else {
//                 available_cash -= amount;
//                 cout << "Withdrawal successful. Available cash: " << available_cash << endl;
//             }
//         }
//         void deposit(float amount) {
//             available_cash += amount;
//             cout << "Deposit successful. Available cash: " << available_cash << endl;
//         }
//         void display() {
//             cout << "Available cash in ATM: " << available_cash << endl;
//         }
// };

// int main() {
//     int atm_id;
//     string loc;
//     float available_cash, withdraw_amount, deposit_amount;

//     cin >> atm_id;
//     //getline(cin,loc);
//     cin >> available_cash >> withdraw_amount >> deposit_amount;

//     BankATM atm(atm_id, available_cash);

//     atm.withdraw(withdraw_amount);
//     atm.deposit(deposit_amount);
//     atm.display();

//     return 0;
// }
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class MusicLibrary {
    private:
        struct Song {
            string name;
            string artist;
        };
        vector<Song> songs;
    public:
        void add_song(string name, string artist) {
            Song song = {name, artist};
            songs.push_back(song);
        }
        void display_songs() {
            sort(songs.begin(), songs.end(), [](const Song& a, const Song& b) {
                return a.artist < b.artist;
            });
            for (auto song : songs) {
                cout << song.name << " - " << song.artist << endl;
            }
        }
};

int main() {
    int n;
    cin >> n;

    MusicLibrary library;

    for (int i = 0; i < n; i++) {
        string name, artist;
        cin >> name >> artist;
        library.add_song(name, artist);
    }

    library.display_songs();

    return 0;
}
