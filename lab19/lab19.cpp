//Tai Masuda 3304190
//CSCI-20 April Brown
//11-08-16
//Lab 4.5 File Input/Output
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream fsIN;
    const int NUM = 20;
    int row1[NUM]   = {0};       //Data from file row 1
    int row2[NUM]   = {0};       //Data from file row 2
    string xFile = "";        //File for transfering data, input from user.
    
    cout << "Enter file name: " << endl;
    cin >> xFile;
    
    cout << "Opening file " << x << "." << endl;
    
    fsIN.open(xFile);           //Opens user file
    
    if(!fsIN.is_open()){      //Checks for file opening correctly
        cout <<"File not opened." << endl;
        return 1;
        
    for(int i = 0; i < NUM ; ++i){
        fsIN >> row1[i];
        fsIN >> row2[i];
    }//End file not opened
    
    
    
    
    
    
    
    
    
    fsIN.close();           //Close file.
    
    return 0;
}//End main