// Transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Account.h"

class Transaction {
public:
    static void performTransaction(Account& account, double amount);
};

#endif // TRANSACTION_H
