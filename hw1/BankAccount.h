#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>

//Funtion declarations
class BankAccount
{
private:
    double acctNum;
    std::string acctOwner;
    double balance;

public:
    double getAcctNum();
    std::string getAcctOwner();
    double getBalance();
    void deposit(double amntToDeposit);
    void withdraw(double amntToWithdraw);

    //Constructor prototype
    BankAccount(double acctNumIn, std::string acctOwnerIn, double balanceIn);

    //Deconstructor prototype
    ~BankAccount();
};
#endif