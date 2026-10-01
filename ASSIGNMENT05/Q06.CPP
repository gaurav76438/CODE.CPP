#include <iostream>
using namespace std;

class BankAccount {
public:
    string accountNumber;
    string accountHolder;
    double balance;

    BankAccount(string accountNumber, string accountHolder, double balance) {
        this->accountNumber = accountNumber;
        this->accountHolder = accountHolder;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance = balance + amount;
        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "Amount withdrawn: " << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("1234567890", "Gaurav", 10000);

    cout << "Initial Account Details:" << endl;
    account.display();

    cout << "\nAfter Deposit:" << endl;
    account.deposit(5000);
    account.display();

    cout << "\nAfter Withdrawal:" << endl;
    account.withdraw(2000);
    account.display();

    return 0;
}