//Tai Masuda
//CSCI-20 LAB 8 
//Return Values
//09-20-16

#include <iostream>
using namespace std;

const double POUNDS_PER_KG = 2.2;


//Converts pounds to kilograms
//User inputs number of pounds
//Outputs kilogram value
double ToKilo(double numPounds)
{
    double kiloVal = 0;
    
    kiloVal = numPounds * ( 1 / POUNDS_PER_KG);
   
    return kiloVal;
}

//Converts kilograms to pounds
//User inputs number of kilograms
//Outputs pounds value
double ToPounds(double numKilo)
{
    double poundVal = 0;
    
    poundVal = numKilo * POUNDS_PER_KG;
    
    return poundVal;
}

//Prompts user for values of kilogram and pounds, outputs converted value
//Inputs pounds and kilograms from user
//Outputs value of pounds per kg and value of kgs per pound
int main()
{
    double userPounds = 0;
    double userKg     = 0;
    
    cout << "Enter Kilogram value: " << endl;
    cin >> userKg;
    
    cout << "Enter Pound value: " << endl;
    cin >> userPounds;
    
    cout << userKg << " kilograms equals " << ToPounds(userKg) << " pounds." << endl;

    cout << userPounds << " pounds equals " << ToKilo(userPounds) << " kilos." << endl;

}