// Account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

class Account {
private:
    int accountNumber;
    double balance;

public:
    Account(int accountNumber, double initialBalance);

    void deposit(double amount);
    bool withdraw(double amount);
    void display() const;

    int getAccountNumber() const { return accountNumber; }
    double getBalance() const { return balance; }
};

#endif // ACCOUNT_H
