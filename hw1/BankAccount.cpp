#include <iostream>
#include <string>
#include "BankAccount.h"

//Function definitions
double BankAccount::getAcctNum()
{
    return acctNum;
}

std::string BankAccount::getAcctOwner()
{
    return acctOwner;
}

double BankAccount::getBalance(){
    return balance;
}

void BankAccount::deposit(double amntToDeposit){
    balance = balance + amntToDeposit;
    std::cout << "Deposited: $" << amntToDeposit << std::endl;
    std::cout << "New balance: $" << balance << std::endl;
    std::cout << std::endl;
}

void BankAccount::withdraw(double amntToWithdraw){
    if(amntToWithdraw > balance){
        std::cout << "Insufficient funds." << std::endl;
        std::cout << std::endl;
    }
    else{
        balance = balance - amntToWithdraw;
        std::cout << "New balance: $" << balance << std::endl;
        std::cout << std::endl;
    }
}

//Constructor
BankAccount::BankAccount(double acctNumIn, std::string acctOwnerIn, double balanceIn)
{
    acctNum = acctNumIn;
    acctOwner = acctOwnerIn;
    balance = balanceIn;
}

//Desconstructor
BankAccount::~BankAccount()
{
    std::cout << "Deconstructor activated." << std::endl;
}