// // // // #include <iostream>
// // // // #include <vector>
// // // // #include <string>
// // // // #include <stdexcept> 

// // // // const int MAX_CAPACITY = 30;

// // // // class DuplicateIDException : public std::exception {
// // // // public:
// // // //     const char* what() const noexcept override {
// // // //         return "Student ID already exists.";
// // // //     }
// // // // };

// // // // class FullDatabaseException : public std::exception {
// // // // public:
// // // //     const char* what() const noexcept override {
// // // //         return "Student database is full.";
// // // //     }
// // // // };

// // // // class Student {
// // // // public:
// // // //     int id;
// // // //     std::string name;

// // // //     Student(int id, const std::string& name) : id(id), name(name) {}
// // // // };

// // // // int main() {
// // // //     int n;
// // // //     std::cin >> n;
// // // //     std::vector<Student> database;
    
// // // //     try {
// // // //         for (int i = 0; i < n; ++i) {
// // // //             int id;
// // // //             std::string name;
// // // //             std::cin >> id >> name;

// // // //             bool isDuplicate = false;

// // // //             for (const Student& student : database) {
// // // //                 if (student.id == id) {
// // // //                     isDuplicate = true;
// // // //                     break;
// // // //                 }
// // // //             }

// // // //             if (isDuplicate) {
// // // //                 throw DuplicateIDException();
// // // //             }
// // // //             else if (database.size() >= MAX_CAPACITY) {
// // // //                 throw FullDatabaseException();
// // // //             }
// // // //             else {
// // // //                 database.push_back(Student(id, name));
// // // //                 std::cout << "Student with ID " << id << " added to the database." << std::endl;
// // // //             }
// // // //         }
// // // //     } catch (const DuplicateIDException& e) {
// // // //         std::cerr << "Exception caught. Error: " << e.what() << std::endl;
// // // //     } catch (const FullDatabaseException& e) {
// // // //         std::cerr << "Exception caught. Error: " << e.what() << std::endl;
// // // //     }

// // // //     return 0;
// // // // }


// // // #include <iostream>
// // // #include <string>
// // // using namespace std;

// // // template <typename T>
// // // class SavingsAccount {
// // // protected:
// // //     string accountNumber;
// // //     string accountHolder;
// // //     T initialBalance;
// // //     T interestRate;
// // //     T balance;

// // // public:
// // //     SavingsAccount(const string& accountNumber, const string& accountHolder, T initialBalance, T interestRate)
// // //         : accountNumber(accountNumber), accountHolder(accountHolder), initialBalance(initialBalance), interestRate(interestRate), balance(initialBalance) {}

// // //     void displayDetails() const {
// // //         cout << "Savings Account Details:" << endl;
// // //         cout << accountNumber << " " << accountHolder << " " << initialBalance << endl;
// // //         cout << interestRate << "%" << endl;
// // //     }

// // //     void deposit(T amount) {
// // //         balance += amount;
// // //         cout << balance << endl;
// // //     }

// // //     void withdraw(T amount) {
// // //         if (amount <= balance) {
// // //             balance -= amount;
// // //             cout << balance << endl;
// // //         } else {
// // //             cout << "Insufficient balance" << endl;
// // //         }
// // //     }
// // // };

// // // int main() {
// // //     string accountNumber, accountHolder;
// // //     float initialBalance, interestRate;
// // //     cin >> accountNumber;
// // //     cin.ignore();
// // //     getline(cin, accountHolder);
// // //     cin >> initialBalance >> interestRate;

// // //     SavingsAccount<float> account(accountNumber, accountHolder, initialBalance, interestRate);

// // //     account.displayDetails();

// // //     float depositAmount, withdrawAmount;
// // //     cin >> depositAmount >> withdrawAmount;

// // //     account.deposit(depositAmount);
// // //     account.withdraw(withdrawAmount);

// // //     return 0;
// // // }



// // // #include <iostream>
// // // #include <vector>
// // // #include <string>
// // // using namespace std;

// // // class InventoryManager {
// // // private:
// // //     struct Product {
// // //         string name;
// // //         int quantity;
// // //         double price;
// // //     };

// // //     vector<Product> inventory;

// // // public:
// // //     void run() {
// // //         while (true) {
// // //             int choice;
// // //             cin >> choice;

// // //             if (choice == 1) {
// // //                 string name;
// // //                 int quantity;
// // //                 double price;
// // //                 cin >> name >> quantity >> price;

// // //                 if (inventory.size() < 100) {
// // //                     Product product = {name, quantity, price};
// // //                     inventory.push_back(product);
// // //                 }
// // //             } else if (choice == 2) {
// // //                 string name;
// // //                 int newQuantity;
// // //                 cin >> name >> newQuantity;

// // //                 bool found = false;
// // //                 for (int i = 0; i < inventory.size(); i++) {
// // //                     if (inventory[i].name == name) {
// // //                         inventory[i].quantity = newQuantity;
// // //                         found = true;
// // //                         break;
// // //                     }
// // //                 }

// // //                 if (!found) {
// // //                     cout << "Product not found in inventory." << endl;
// // //                 }
// // //             } else if (choice == 3) {
// // //                 cout << "Inventory Details:" << endl;
// // //                 for (const Product &product : inventory) {
// // //                     cout << "Name: " << product.name << ", Quantity: " << product.quantity << ", Price: $" << product.price << endl;
// // //                 }
// // //             } else if (choice == 4) {
// // //                 cout << "Invalid choice" << endl;
// // //                 break;
// // //             }
// // //         }
// // //     }
// // // };

// // // int main() {
// // //     InventoryManager manager;
// // //     manager.run();

// // //     return 0;
// // // }

// // // #include <iostream>
// // // #include <vector>
// // // #include <string>
// // // using namespace std;

// // // class InventoryManager {
// // // private:
// // //     struct Product {
// // //         string name;
// // //         int quantity;
// // //         double price;
// // //     };

// // //     vector<Product> inventory;

// // // public:
// // //     void run() {
// // //         while (true) {
// // //             int choice;
// // //             cin >> choice;

// // //             switch (choice) {
// // //                 case 1: {
// // //                     string name;
// // //                     int quantity;
// // //                     double price;
// // //                     cin >> name >> quantity >> price;

// // //                     if (inventory.size() < 100) {
// // //                         Product product = {name, quantity, price};
// // //                         inventory.push_back(product);
// // //                     }
// // //                     break;
// // //                 }
// // //                 case 2: {
// // //                     string name;
// // //                     int newQuantity;
// // //                     cin >> name >> newQuantity;

// // //                     bool found = false;
// // //                     for (int i = 0; i < inventory.size(); i++) {
// // //                         if (inventory[i].name == name) {
// // //                             inventory[i].quantity = newQuantity;
// // //                             found = true;
// // //                             break;
// // //                         }
// // //                     }

// // //                     if (!found) {
// // //                         cout << "Product not found in inventory." << endl;
// // //                     }
// // //                     break;
// // //                 }
// // //                 case 3: {
// // //                     cout << "Inventory Details:" << endl;
// // //                     for (const Product &product : inventory) {
// // //                         cout << "Name: " << product.name << ", Quantity: " << product.quantity << ", Price: $" << product.price << endl;
// // //                     }
// // //                     break;
// // //                 }
// // //                 case 4: {
// // //                     cout << "Invalid choice" << endl;
// // //                     return;
// // //                 }
// // //                 default: {
// // //                     cout << "Invalid choice" << endl;
// // //                     break;
// // //                 }
// // //             }
// // //         }
// // //     }
// // // };

// // // int main() {
// // //     InventoryManager manager;
// // //     manager.run();

// // //     return 0;
// // // }


// // // #include <iostream>
// // // #include <vector>
// // // #include <string>
// // // using namespace std;

// // // class InventoryManager {
// // // private:
// // //     struct Product {
// // //         string name;
// // //         int quantity;
// // //         double price;
// // //     };

// // //     vector<Product> inventory;

// // // public:
// // //     void run() {
// // //         while (true) {
// // //             int choice;
// // //             cin >> choice;

// // //             if (choice == 1) {
// // //                 string name;
// // //                 int quantity;
// // //                 double price;
// // //                 cin >> name >> quantity >> price;

// // //                 if (inventory.size() < 100) {
// // //                     Product product = {name, quantity, price};
// // //                     inventory.push_back(product);
// // //                 }
// // //             } else if (choice == 2) {
// // //                 string name;
// // //                 int newQuantity;
// // //                 cin >> name >> newQuantity;

// // //                 bool found = false;
// // //                 for (int i = 0; i < inventory.size(); i++) {
// // //                     if (inventory[i].name == name) {
// // //                         inventory[i].quantity = newQuantity;
// // //                         found = true;
// // //                         break;
// // //                     }
// // //                 }

// // //                 if (!found) {
// // //                     cout << "Product not found in inventory." << endl;
// // //                 }
// // //             } else if (choice == 3) {
// // //                 cout << "Inventory Details:" << endl;
// // //                 for (const Product &product : inventory) {
// // //                     cout << "Name: " << product.name << ", Quantity: " << product.quantity << ", Price: $" << product.price << endl;
// // //                 }
// // //             } else if (choice == 4) {
// // //                 cout << "Invalid choice" << endl;
// // //                 break;
// // //             }
// // //         }
// // //     }
// // // };

// // // int main() {
// // //     InventoryManager manager;
// // //     manager.run();

// // //     return 0;
// // // }'

// // // #include <iostream>
// // // #include <vector>
// // // using namespace std;

// // // class Song {
// // // public:
// // //     string title;
// // //     string artist;
// // //     int duration;

// // //     Song(string title, string artist, int duration) {
// // //         this->title = title;
// // //         this->artist = artist;
// // //         this->duration = duration;
// // //     }
// // // };

// // // int main() {
// // //     vector<Song> playlist;

// // //     while (true) {
// // //         int choice;
// // //         cin >> choice;

// // //         if (choice == 1) {
// // //             string title, artist;
// // //             int duration;
// // //             cin.ignore();
// // //             getline(cin, title);
// // //             getline(cin, artist);
// // //             cin >> duration;

// // //             Song newSong(title, artist, duration);
// // //             playlist.push_back(newSong);

// // //         }
// // //         else if (choice == 2) {
// // //             string title;
// // //             cin.ignore();
// // //             getline(cin, title);

// // //             bool songFound = false;
// // //             for (int i = 0; i < playlist.size(); i++) {
// // //                 if (playlist[i].title == title) {
// // //                     playlist.erase(playlist.begin() + i);
// // //                     songFound = true;
// // //                     break;
// // //                 }
// // //             }

// // //         }
// // //         else if (choice == 3) {
// // //             if (playlist.empty()) {
// // //                 cout << "Playlist is empty." << endl;
// // //             }
// // //             else {
// // //                 cout << "Playlist:" << endl;
// // //                 for (int i = 0; i < playlist.size(); i++) {
// // //                     cout << " " << playlist[i].title << " " << playlist[i].artist << " " << playlist[i].duration << endl;
// // //                 }
// // //             }
// // //         }
// // //         else if (choice == 4) {
// // //             cout << "Exiting the program." << endl;
// // //             exit(0);

// // //         }
// // //         else{
// // //             cout<<"Invalid choice"<<endl;
// // //         }
// // //     }

// // //     return 0;
// // // }


// // #include <iostream>
// // #include <vector>
// // #include <string>
// // using namespace std;

// // class InventoryManager {
// // private:
// //     struct Product {
// //         string name;
// //         int quantity;
// //         double price;
// //     };

// //     vector<Product> inventory;

// // public:
// //     void run() {
// //         while (true) {
// //             int choice;
// //             cin >> choice;

// //             if (choice == 1) {
// //                 string name;
// //                 int quantity;
// //                 double price;
// //                 cin >> name >> quantity >> price;

// //                 if (inventory.size() < 100) {
// //                     Product product = {name, quantity, price};
// //                     inventory.push_back(product);
// //                 }
// //             } else if (choice == 2) {
// //                 string name;
// //                 int newQuantity;
// //                 cin >> name >> newQuantity;

// //                 bool found = false;
// //                 for (int i = 0; i < inventory.size(); i++) {
// //                     if (inventory[i].name == name) {
// //                         inventory[i].quantity = newQuantity;
// //                         found = true;
// //                         break;
// //                     }
// //                 }

// //                 if (!found) {
// //                     cout << "Product not found in inventory." << endl;
// //                 }
// //             } else if (choice == 3) {
// //                 cout << "Inventory Details:" << endl;
// //                 for (const Product &product : inventory) {
// //                     cout << "Name: " << product.name << ", Quantity: " << product.quantity << ", Price: $" << product.price << endl;
// //                 }
// //             } else if (choice == 4) {
// //                 cout << "Invalid choice" << endl;
// //                 break;
// //             }
// //         }
// //     }
// // };

// // int main() {
// //     InventoryManager manager;
// //     manager.run();

// //     return 0;
// // }


// #include<stdio.h>
// #include<string.h>

// struct process_Struct {
//     char process_name[20];
//     int arrival_time, burst_time, completion_time, remaining;
// }temp_Struct;


// void faculty_Queue(int no_of_process) {

//     int count, arrival_Time, burst_Time, quantum_time;
//     struct process_Struct faculty_Process[no_of_process];

//     for(count = 0; count < no_of_process; count++) {
//         printf("Enter the details of Process[%d]", count+1);
//         puts("");
//         printf("Process Name : ");
//         scanf("%s", faculty_Process[count].process_name);

//         printf("Arrival Time : ");
//         scanf("%d", &faculty_Process[count].arrival_time);

//         printf("Burst Time : ");
//         scanf("%d", &faculty_Process[count].burst_time);
//         puts("");
//     }
//     printf("Now, enter the quantum time for FACULTY queue : ");
//     scanf("%d", &quantum_time);


//     // sorting the processes by their ARRIVAL time.
//     // if the ARRIVAL time is same then scheduling is based on FCFS.
//     for(count = 0; count < no_of_process; count++) {
//         for(int x = count +1; x < count; x++){
//             if(faculty_Process[count].arrival_time > faculty_Process[x].arrival_time) {
//                 temp_Struct = faculty_Process[count];
//                 faculty_Process[count] = faculty_Process[x];
//                 faculty_Process[x] = temp_Struct;
//             }
//         }
//     }

//     // initialy all the burst time is remaining and completion of process is zero.
//     for(count = 0; count < no_of_process; count++) {
//         faculty_Process[count].remaining = faculty_Process[count].burst_time;
//         faculty_Process[count].completion_time = 0;
//     }

//     int total_time, queue, round_robin[20];
//     total_time = 0;
//     queue = 0;
//     round_robin[queue] = 0;


//     int flag, x, n, z, waiting_time = 0;
//     do {
//         for(count = 0; count < no_of_process; count++){
//             if(total_time >= faculty_Process[count].arrival_time){
//                 z = 0;
//                 for(x = 0; x <= queue; x++) {
//                     if(round_robin[x] == count) {
//                         z++;
//                     }
//                 }
//                 if(z == 0) {
//                     queue++;
//                     round_robin[queue] == count;
//                 }
//             }
//         }

//         if(queue == 0) {
//             n = 0;
//         }
//         if(faculty_Process[n].remaining == 0) {
//             n++ ;
//         }
//         if(n > queue) {
//             n = (n - 1) % queue;
//         }
//         if(n <= queue) {
//             if(faculty_Process[n].remaining > 0) {
//                 if(faculty_Process[n].remaining < quantum_time){
//                     total_time += faculty_Process[n].remaining;
//                     faculty_Process[n].remaining = 0;
//                 }else {
//                     total_time += quantum_time;
//                     faculty_Process[n].remaining -= quantum_time;
//                 }
//                 faculty_Process[n].completion_time = total_time;
//             }
//             n++;
//         }
//         flag = 0;

//         for(count = 0; count < no_of_process; count++) {
//             if(faculty_Process[count].remaining > 0) {
//                 flag++;
//             }
//         }
//     }while(flag != 0);


//     puts("\n\t\t\t********************************************");
//     puts("\t\t\t*****   ROUND ROBIN ALGORITHM OUTPUT   *****");
//     puts("\t\t\t********************************************\n");
//     printf("\n|\tProcess Name\t |\tArrival Time\t  |\tBurst Time\t |\tCompletion Time  \t|\n");

//     for(count = 0; count < no_of_process; count++){
//         waiting_time = faculty_Process[count].completion_time - faculty_Process[count].burst_time - faculty_Process[count].arrival_time;

//         printf("\n|\t  %s\t    |\t  %d\t   |\t  %d\t   |\t  %d\t   |\n", faculty_Process[count].process_name, faculty_Process[count].arrival_time, faculty_Process[count].burst_time, faculty_Process[count].completion_time);
//     }

// }


// void student_Queue(int no_of_process) {

//     int count, arrival_Time, burst_Time, quantum_time;
//     struct process_Struct student_Process[no_of_process];

//     for(count = 0; count < no_of_process; count++) {
//         printf("Enter the details of Process[%d]", count+1);
//         puts("");
//         printf("Process Name : ");
//         scanf("%s", student_Process[count].process_name);

//         printf("Arrival Time : ");
//         scanf("%d", &student_Process[count].arrival_time);

//         printf("Burst Time : ");
//         scanf("%d", &student_Process[count].burst_time);
//     }
//     printf("Now, enter the quantum time for STUDENT queue : ");
//     scanf("%d", &quantum_time);


//     // sorting the processes by their ARRIVAL time.
//     // if the ARRIVAL time is same then scheduling is based on FCFS.
//     for(count = 0; count < no_of_process; count++) {
//         for(int x = count +1; x < count; x++){
//             if(student_Process[count].arrival_time > student_Process[x].arrival_time) {
//                 temp_Struct = student_Process[count];
//                 student_Process[count] = student_Process[x];
//                 student_Process[x] = temp_Struct;
//             }
//         }
//     }

//     // initialy all the burst time is remaining and completion of process is zero.
//     for(count = 0; count < no_of_process; count++) {
//         student_Process[count].remaining = student_Process[count].burst_time;
//         student_Process[count].completion_time = 0;
//     }

//     int total_time, queue, round_robin[20];
//     total_time = 0;
//     queue = 0;
//     round_robin[queue] = 0;
// }


// int main(int argc, char const *argv[]) {
//     int select_queue, no_of_process;

//     puts("Please choose a queue to post your query : ");
//     puts("1. FACULTY queue.");
//     puts("2. STUDENT queue.");
//     printf("> ");
//     scanf("%d", &select_queue);

//     switch(select_queue) {
//         case 1 :
//                 printf("Enter number of process for FACULTY queue : ");
//                 scanf("%d", &no_of_process);

//                 faculty_Queue(no_of_process);

//                 break;

//         case 2 :
//                 printf("Enter number of process for STUDENT queue : ");
//                 scanf("%d", &no_of_process);

//                 student_Queue(no_of_process);

//                 break;

//         default :
//                 printf("Please selet the correct option by running the program again.");
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

double perminter(int n){
    if(n !=0 ){
        return n + perminter(n - 1);
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    
    cout<<perminter(n);
    
    
}