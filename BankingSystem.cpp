// BankingSystem.cpp

#include "BankingSystem.h"

void BankingSystem::addAccount(const Account& account) {
    accounts.push_back(account);
}

void BankingSystem::displayAllAccounts() const {
    std::cout << "All Accounts in the Banking System:" << std::endl;
    for (const auto& account : accounts) {
        account.display();
    }
}
