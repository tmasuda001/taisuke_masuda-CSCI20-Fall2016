#include <iostream>
using namespace std;

int main(){
    
    int totChange = 0;
    int new1 = 0;
    int new2 = 0;
    int new3 = 0;
    int q = 0;
    int p = 0;
    int d = 0;
    int n = 0;
    double netTot = 0;
    int final = 0;
    
    cout << "Enter Value" << endl;
    cin >> totChange;
    
    q = totChange / 25;
    new1 = totChange % 25;
    
    d = new1 / 10;
    new2 = new1 % 10;
    
    n = new2 / 5;
    p = new2 % 5;
    
    netTot = (q * 0.25) + (d * 0.10) + (n * 0.05) + (p * 0.01);
    
    final = totChange - (totChange * 0.109);
    

    
    cout << "You have entered " << totChange << " cents." << endl;
    
    cout << "That was " << q << " quarters, " << d << " dimes, " << n << " nickels, and " << p << " pennies."<< endl;
    
    cout << "The total is " << final << " cents after a 10.9% fee.";
    
    
}