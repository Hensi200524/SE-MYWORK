#include <iostream>
#include <string>
using namespace std;

// Base class
class BankAccount {
protected:
    string accountNumber;
    string accountHolderName;
    double balance;
    string branchName;
    string openingDate;

public:
    BankAccount(string accNo, string name, double bal, string branch, string date)
        : accountNumber(accNo), accountHolderName(name), balance(bal), branchName(branch), openingDate(date) {}

    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
    virtual void calculateInterest() = 0;
    virtual void displayAccountDetails() = 0;
};

// Savings Account
class SavingsAccount : public BankAccount {
public:
    SavingsAccount(string accNo, string name, double bal, string branch, string date)
        : BankAccount(accNo, name, bal, branch, date) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " in Savings Account.\n";
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrew " << amount << " from Savings Account.\n";
        } else {
            cout << "Insufficient balance in Savings Account.\n";
        }
    }

    void calculateInterest() {
        double interest = balance * 0.04;
        balance += interest;
        cout << "Interest added to Savings Account: " << interest << "\n";
    }

    void displayAccountDetails() {
        cout << "\n-- Savings Account --\n";
        cout << "Name: " << accountHolderName << "\n";
        cout << "Account No: " << accountNumber << "\n";
        cout << "Branch: " << branchName << "\n";
        cout << "Opening Date: " << openingDate << "\n";
        cout << "Balance: " << balance << "\n";
    }
};

// Current Account
class CurrentAccount : public BankAccount {
public:
    CurrentAccount(string accNo, string name, double bal, string branch, string date)
        : BankAccount(accNo, name, bal, branch, date) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " in Current Account.\n";
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrew " << amount << " from Current Account.\n";
        } else {
            cout << "Insufficient balance in Current Account.\n";
        }
    }

    void calculateInterest() {
        cout << "No interest for Current Account.\n";
    }

    void displayAccountDetails() {
        cout << "\n-- Current Account --\n";
        cout << "Name: " << accountHolderName << "\n";
        cout << "Account No: " << accountNumber << "\n";
        cout << "Branch: " << branchName << "\n";
        cout << "Opening Date: " << openingDate << "\n";
        cout << "Balance: " << balance << "\n";
    }
};

// Fixed Deposit Account
class FixedDepositAccount : public BankAccount {
public:
    FixedDepositAccount(string accNo, string name, double bal, string branch, string date)
        : BankAccount(accNo, name, bal, branch, date) {}

    void deposit(double amount) {
        cout << "Cannot deposit into Fixed Deposit.\n";
    }

    void withdraw(double amount) {
        cout << "Withdrawal not allowed before maturity in Fixed Deposit.\n";
    }

    void calculateInterest() {
        double interest = balance * 0.06;
        balance += interest;
        cout << "Interest added to Fixed Deposit: " << interest << "\n";
    }

    void displayAccountDetails() {
        cout << "\n-- Fixed Deposit Account --\n";
        cout << "Name: " << accountHolderName << "\n";
        cout << "Account No: " << accountNumber << "\n";
        cout << "Branch: " << branchName << "\n";
        cout << "Opening Date: " << openingDate << "\n";
        cout << "Balance: " << balance << "\n";
    }
};

// Recurring Deposit Account
class RecurringDepositAccount : public BankAccount {
public:
    RecurringDepositAccount(string accNo, string name, double bal, string branch, string date)
        : BankAccount(accNo, name, bal, branch, date) {}

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " in Recurring Deposit.\n";
    }

    void withdraw(double amount) {
        cout << "Withdrawals not allowed before maturity in Recurring Deposit.\n";
    }

    void calculateInterest() {
        double interest = balance * 0.05;
        balance += interest;
        cout << "Interest added to Recurring Deposit: " << interest << "\n";
    }

    void displayAccountDetails() {
        cout << "\n-- Recurring Deposit Account --\n";
        cout << "Name: " << accountHolderName << "\n";
        cout << "Account No: " << accountNumber << "\n";
        cout << "Branch: " << branchName << "\n";
        cout << "Opening Date: " << openingDate << "\n";
        cout << "Balance: " << balance << "\n";
    }
};

// Main Function
int main() {
    BankAccount* accounts[4];

    accounts[0] = new SavingsAccount("SA001", "Hensi", 10000, "Rajkot", "2024-01-01");
    accounts[1] = new CurrentAccount("CA001", "Ravi", 20000, "Ahmedabad", "2023-03-15");
    accounts[2] = new FixedDepositAccount("FD001", "Neha", 50000, "Surat", "2022-08-10");
    accounts[3] = new RecurringDepositAccount("RD001", "Vikram", 15000, "Vadodara", "2024-06-20");

    for (int i = 0; i < 4; i++) {
        accounts[i]->deposit(1000);
        accounts[i]->withdraw(500);
        accounts[i]->calculateInterest();
        accounts[i]->displayAccountDetails();
        cout << "----------------------------\n";
    }

    // Cleanup
    for (int i = 0; i < 4; i++) {
        delete accounts[i];
    }

    return 0;
}

