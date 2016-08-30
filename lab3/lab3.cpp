// Tai Masuda
// AUG 30 2016 
// Lab 3


#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number1 = 0;
    string wname = "";
    string bfood = "";
    string ltime = "";
    int number2 = 0;
    float price = 0;
    char hyph = '-';
    
    cout <<"Enter a number between 1-100" << endl;
    cin >> number1;
    
    cout <<"Enter a woman's name" << endl;
    cin >> wname;
    
    cout <<"Enter a breakfast food" << endl;
    cin >> bfood;
    
    cout <<"Enter lunch time ex: 11,12,1" << endl;
    cin >> ltime;
    
    cout <<"Enter a whole number" << endl;
    cin >> number2;
    
    cout <<"Enter a price ex: xx.xx" << endl;
    cin >> price;
    
    cout << "On the" << endl;
    cout << number1 << endl; 
    cout << "th day of school," << endl;
    cout << wname << endl;
    cout << "decided to buy some" << endl;
    cout << bfood << endl;
    cout << "for breakfast." << endl;
    cout << "She went to the cafe at" <<endl;
    cout << ltime << endl;
    cout << "and bought" << endl;
    cout << number2 << endl;
    cout << bfood << endl;
    cout << "for" << endl;
    cout << price << endl;
    cout << "Then she went to class" << endl;
    cout << "In the computer" << hyph << "lab." << endl;
    
}