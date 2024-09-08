//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Account {
//public:
//    struct AccountInfo {
//        char Name[1000];
//        int accountNumber;
//    };
//
//    union AccountData {
//        AccountInfo info;
//        float balance;
//    } data;
//
//    //function to deposit Money
//    void deposit(float amount) {
//        data.balance += amount;
//        cout << "Amount deposited successfully." << endl;
//    }
//
//    //function for withdraw money
//    void withdraw(float amount) {
//        if (amount <= data.balance) {
//            data.balance -= amount;
//            cout << "Amount withdraw successfully." << endl;
//        } else {
//            cout << "Insufficient balance. Withdrawal failed." << endl;
//        }
//    }
//};
//
//int main() {
//    //making object for class
//    Account account;
//
//    // Enter Account holder name
//    cin.getline(account.data.info.Name, sizeof(account.data.info.Name));
//
//    // Enter Account number
//    cin >> account.data.info.accountNumber;
//
//    // Enter Initial Balance
//    cin >> account.data.balance;
//
//    // input for amount to deposit
//    float depositAmount, withdrawAmount;
//    cin >> depositAmount;
//    cin >> withdrawAmount;
//
//    // deposit the amount
//    account.deposit(depositAmount);
//    account.withdraw(withdrawAmount);
//
//    // output
//    cout << "Account details:" << endl;
//    cout << "Account holder's name: " << account.data.info.Name << endl;
//    cout << "Account number: " << account.data.info.accountNumber << endl;
//    cout << "Balance: " << account.data.balance << endl;
//    return 0;
//}









#include <iostream>
#include <vector>
#include <string>
using namespace std;

class InventoryManager {
private:
    struct Product {
        string name;
        int quantity;
        double price;
    };

    vector<Product> inventory;

public:
    void run() {
        while (true) {
            int choice;
            cin >> choice;

            switch (choice) {
                case 1: {
                    string name;
                    int quantity;
                    double price;
                    cin >> name >> quantity >> price;

                    if (inventory.size() < 100) {
                        Product product = {name, quantity, price};
                        inventory.push_back(product);
                    }
                    break;
                }
                case 2: {
                    string name;
                    int newQuantity;
                    cin >> name >> newQuantity;

                    bool found = false;
                    for (int i = 0; i < inventory.size(); i++) {
                        if (inventory[i].name == name) {
                            inventory[i].quantity = newQuantity;
                            found = true;
                            break;
                        }
                    }

                    if (!found) {
                        cout << "Product not found in inventory." << endl;
                    }
                    break;
                }
                case 3: {
                    cout << "Inventory Details:" << endl;
                    for (const Product &product : inventory) {
                        cout << "Name: " << product.name << ", Quantity: " << product.quantity << ", Price: $" << product.price << endl;
                    }
                    break;
                }
                case 4: {
                    cout << "Invalid choice" << endl;
                    return;
                }
                default: {
                    cout << "Invalid choice" << endl;
                    break;
                }
            }
        }
    }
};

int main() {
    InventoryManager manager;
    manager.run();

    return 0;
}

















