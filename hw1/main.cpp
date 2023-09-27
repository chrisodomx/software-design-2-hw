#include <string>
#include <iostream>
#include "BankAccount.h"

using namespace std;

int main(){

    BankAccount account1(1234, "Chris Odom", 1000);
    std::cout << "Account #: " << account1.getAcctNum() << endl;
    std::cout << "Name: " << account1.getAcctOwner() << endl;
    std::cout << "Balance: $" << account1.getBalance() << endl;
    std::cout << std::endl;

    std::cout << "Depositing $20..." << endl;
    account1.deposit(20);

    std::cout << "Withdrawing $1021..." << endl;
    account1.withdraw(1021);

    std::cout << "Withdrawing $1019..." << endl;
    account1.withdraw(1019);

    return 0;
}