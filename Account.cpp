// Account.cpp

#include "Account.h"

Account::Account(int accountNumber, double initialBalance)
    : accountNumber(accountNumber), balance(initialBalance) {}

void Account::deposit(double amount) {
    balance += amount;
}

bool Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        return true;
    }
    std::cout << "Insufficient funds!" << std::endl;
    return false;
}

void Account::display() const {
    std::cout << "Account Number: " << accountNumber << ", Balance: $" << balance << std::endl;
}
