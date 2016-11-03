//Tai Masuda
//10-20-16 Updated 11-02-16
//CSCI-20 Program 2. Functions
//April Browne

// This program is a banking program for an ATM.
// It can take deposits, withrdaws, and print balance.
#include <iostream>
using namespace std;

class ATM{
    public:
        ATM();
        void setDeposit(int userDeposit);         //Lets user deposit an amount
        void setWithdraw(int userWithdraw);       //Lets user withdraw an amount
        int getBalance();                         //Prints balance
                       
    private:
        int balance;                              //Stores total Balance
};//End class ATM

ATM::ATM(){                                       //Constructor
    balance = 0;
}

void ATM::setDeposit(int userDeposit){            //Function adds deposit amount to balance
    balance = balance + userDeposit;
    return;
}//End set deposit

void ATM::setWithdraw(int userWithdraw){          //Function subtracts withdraw amount from balance
    if((balance - userWithdraw) < 0){             //If withdraw amount would bring total below zero, output warning
        cout << "Insufficent funds" << endl;
    }
    else{
    balance = balance - userWithdraw;
    }
    return;
}//End set withdraw

int ATM::getBalance(){                            //Prints balance
    return balance;
}//End get balance

int main(){
    int userChoice = 0;
    char userContinue = '.';
    
    ATM user1;
 
    do{
    cout << "Would you like to (1) Deposit, (2) Withdraw, or (3) Print Balance?" << endl;
    cin >> userChoice;   
    if(userChoice == 1){
        int deposit = 0;
        cout << "Enter deposit amount:" << endl;
        cin >> deposit;
        user1.setDeposit(deposit);
    }
    else if(userChoice == 2){
        int withdraw = 0;
        cout << "Enter withdraw amount:" << endl;
        cin >> withdraw;
        user1.setWithdraw(withdraw);
    }
    else if(userChoice == 3){
        cout << "Balance: " << user1.getBalance() << endl;
    }
    else{
        cout << "Invalid choice." << endl;   
    }//End if else
    

    cout << "Continue? Type (Y)es or (N)o" << endl;
    cin >> userContinue;
    }while(userContinue == 'Y' || userContinue == 'y');      //Loops as long as user enters 'y' or 'Y'
    
    cout << "" << endl;
    cout << "\tGoodbye." << endl;
}//End main