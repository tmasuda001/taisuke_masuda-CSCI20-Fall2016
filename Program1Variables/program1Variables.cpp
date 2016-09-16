//CSCI-20 Program #1: Variables
//09-08-2016
//Tai Masuda 3304190

#include <iostream>
using namespace std;


//variables
string userName;
int userAge;
double calSandwich = 430;
double calDaily;
double calTotal;
double calAvg;
double sandwichTotal;

int main()
{
    
    // user input
    
    cout << "What is your name?" << endl;
    cin >> userName;
    
    cout << "How old are you?" << endl;
    cin >> userAge;
    
    cout << "How many calories do you eat each day?" << endl;
    cin >> calDaily;
    
    //determine calories expended in a lifetime
    
    calTotal = (userAge * 365) * (calDaily);
    
    cout << userName << ", you have eaten " << calTotal;
    cout << " calories in your lifetime!" << endl;
    
    
    //determine how many Kinder's Tri-Tip Sandwiches you have 'eaten'
    
    sandwichTotal = (calTotal / calSandwich);
    cout << "At 430 calories per sandwich,";
    cout << " you have eaten " << sandwichTotal;
    cout << " Kinder's Tri-tip Sandwiches worth of calories in your lifetime!";
    cout << endl;
    
    //determine calories per year of life
    
    calAvg = calTotal / userAge;
    cout << "You have eaten an average of " << calAvg << " calories each year.";
    cout << endl;
    
    
}