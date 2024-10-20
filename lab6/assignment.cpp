#include <iostream>
using namespace std;

// BankAccount class definition
class BankAccount {
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(int accNum, string accHolder, double initialBalance = 0.0)
        : accountNumber(accNum), accountHolderName(accHolder), balance(initialBalance) {}

    // Deposit method
    void deposit(double amount) { 
        balance += (amount > 0) ? amount : 0; 
        cout << "Deposited: " << amount << "\n";
    }

    // Withdraw method
    void withdraw(double amount) {
        if (amount <= balance && amount > 0) {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        } else {
            cout << "Invalid or insufficient funds!\n";
        }
    }

    // Display account details
    void display() const {
        cout << "Account #" << accountNumber << " | Holder: " << accountHolderName
             << " | Balance: " << balance << "\n";
    }

    // Friend function for money transfer
    friend void transferMoney(BankAccount &from, BankAccount &to, double amount);
};

// Transfer money function
void transferMoney(BankAccount &from, BankAccount &to, double amount) {
    if (amount <= from.balance && amount > 0) {
        from.balance -= amount;
        to.balance += amount;
        cout << "Transferred " << amount << " from account #" << from.accountNumber 
             << " to account #" << to.accountNumber << "\n";
    } else {
        cout << "Transfer failed: Invalid amount or insufficient funds!\n";
    }
}

// Main function
int main() {
    // Create two accounts
    BankAccount acc1(101, "Alice", 1000), acc2(102, "Bob", 500);

    // Operations
    acc1.deposit(300);
    acc2.withdraw(200);
    transferMoney(acc1, acc2, 500);

    // Display final details
    cout << "\nFinal Account Details:\n";
    acc1.display();
    acc2.display();

    return 0;
}
