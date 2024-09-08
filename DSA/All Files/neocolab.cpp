#include <iostream>
#include <string>

// Define the class for account data using a union
class AccountData {
public:
    union {
        char name[50];
        int accountNumber;
        float balance;
    };

    // Constructor
    AccountData() {
        // Initialize the union members
        name[0] = '\0';
        accountNumber = 0;
        balance = 0.0;
    }

    // Function to deposit money
    void deposit(float amount) {
        balance += amount;
    }

    // Function to withdraw money
    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
			std::cout << "Insufficient balance." << std::endl;
        }
    }
};

int main() {
    // Create an instance of the AccountData class
    AccountData account;

    // Input account holder's name
    std::cout << "Enter account holder's name: ";
    #include <iostream>
#include <string>

// Define the class for account data using a union
class AccountData {
public:
    union {
        char name[50];
        int accountNumber;
        float balance;
    };

    // Constructor
    AccountData() {
        // Initialize the union members
        name[0] = '\0';
        accountNumber = 0;
        balance = 0.0;
    }

    // Function to deposit money
    void deposit(float amount) {
        balance += amount;
    }

    // Function to withdraw money
    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
	std::cin.getline(account.name, sizeof(account.name));

    // Input account number
    std::cout << "Enter account number: ";
    std::cin >> account.accountNumber;

    // Input initial balance
    std::cout << "Enter initial balance: ";
    std::cin >> account.balance;

    // Input amount to deposit and withdraw
    float depositAmount, withdrawAmount;
    std::cout << "Enter amount to deposit: ";
    std::cin >> depositAmount;
    std::cout << "Enter amount to withdraw: ";
    std::cin >> withdrawAmount;

    // Deposit and withdraw money
    account.deposit(depositAmount);
    account.withdraw(withdrawAmount);

    // Output account information
    std::cout << "Name: " << account.name << std::endl;
    std::cout << "Account Number: " << account.accountNumber << std::endl;
    std::cout << "Balance: " << account.balance << std::endl;


}
