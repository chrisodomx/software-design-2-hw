#include <string>
#include <iostream>
#include "BankAccount.h"

using namespace std;

int main(){

    //Show welcome message
    std::cout << "Welcome to SomeBank." << endl;
    
    //Get user name
    std::cout << "Please enter your name." << endl;
    string NameIn;
    std::getline(std::cin, NameIn);

    //Get account number
    std::cout << "Please enter your account number" << endl;
    int NumIn;
    std::cin >> NumIn;
    std::cin.ignore();
    //Create an instance of BankAccount using user input
    BankAccount account1(NumIn, NameIn, 1000);

    bool quit = false;
    do{

        //display account activities. deposit, withdraw, show balance
        cout << "Enter the number associated with the activity you would like to perform" << endl;
        cout << "1. Get Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Quit" << endl;


        int userInt;
        string userStr;

        bool validSel = false;
        do {
            
            std::getline(std::cin, userStr);

            try{
                userInt = stoi(userStr);
            }
            catch(invalid_argument e){
                cout << "Sorry, that is not a valid input..." << endl;
                cout << "Please try again." << endl;
                userInt = 0;
            }

            if(userInt > 0 | userInt < 5)
                validSel = true;

        }while(!validSel);

        switch(userInt){
            case 1:
                cout << "$" << account1.getBalance() << endl;
                break;
            
            case 2:
                double depositAmount;
                cout << "Please enter amount to deposit." << endl;
                cin >> depositAmount;
                account1.deposit(depositAmount);
                break;
            
            case 3:
                double withdrawAmount;
                cout << "Please enter amount to withdraw." << endl;
                cin >> withdrawAmount;
                account1.withdraw(withdrawAmount);
                break;

            case 4:
                quit = true;
                break;
            
            default:
                // cout << "Sorry, that is not a valid input." << endl;
                break;
        }
        std::cin.clear();
    }while(!quit);

    return 0;
}