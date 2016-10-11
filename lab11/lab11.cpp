#include <iostream>
#include <string>
using namespace std;


double deductions(int relationStatus, double grossWage){
    double deductionResult = 0;
if(relationStatus == 1){
       
        deductionResult = (grossWage - (3900 + 6100));
        
        if(deductionResult > 0 && deductionResult <= 8925){
            deductionResult = deductionResult * .10;
                return deductionResult;
        }
        else if(deductionResult >= 8926 && deductionResult <= 36250){
            deductionResult = 892.5 + ((deductionResult - 8925) * .15);
                return deductionResult;
        } 
        else if(deductionResult >= 36251 && deductionResult <= 87850){
            deductionResult = 4991.25 + ((deductionResult - 36250) * .25);
                return deductionResult;
        }
        else if(deductionResult > 87851){
            deductionResult = 17891.25 + ((deductionResult - 87850) * .28);
                return deductionResult;
        }
        else if(deductionResult < 0){
            deductionResult = 0;
        }
}
else if(relationStatus == 2){
        
        deductionResult = (grossWage - (3900 + 6100));

        if(deductionResult > 0 && deductionResult <= 17850){
            deductionResult = deductionResult * .10;
                return deductionResult;
        }
        else if(deductionResult >= 17851 && deductionResult <= 72500){
            deductionResult = 1785 + ((deductionResult - 17850) * .15);
                return deductionResult;
        } 
        else if(deductionResult >= 72501){
            deductionResult = 9982.50 + ((deductionResult - 72500) * .28);
                return deductionResult;
        }
        else if(deductionResult < 0){
            deductionResult = 0;
        }
}

    
}//end deduction function


double testForRefund(double deductionVal, double withheldAmt, string userName, double grossWage){
    double refund = 0;
    if(deductionVal < withheldAmt){
        refund = withheldAmt - deductionVal;
        cout << "Congratulations, " << userName << ", you get a REFUND of: $"; 
        cout << refund << "!" << endl;
        cout << "Total Gross Adjusted Income:" << grossWage << endl;
    }
    else{
        refund = deductionVal - withheldAmt;
        cout << "Sorry, "<< userName << ", you still owe: $";
        cout << refund << " to the IRS." << endl;
        cout << "Total Gross Adjusted Income:" << grossWage << endl;
    
    }
    
}// end test for refund



int main()
{
    
    string userName;
    int relationStatus;
    double grossWage;
    double withheldAmt;

    cout << "Please enter your first and last name: ";
    getline(cin, userName);
    cout << "Please enter your status (Type 1 for single or 2 married): ";
    cin >> relationStatus;
    cout << "Please enter your gross wages (wages + interest + unemployment): ";
    cin >> grossWage;
    cout << "Please enter the amount of tax withheld: ";
    cin >> withheldAmt;
    
    
    double deductionVal = deductions(relationStatus, grossWage);
    
    testForRefund(deductionVal, withheldAmt, userName, grossWage);
    
}//end main