//Tai Masuda 3304190
//CSCI-20 April Brown
//11-08-16
//Lab 4.5 File Input/Output

//Use file input to read in a file with a list of numbers separated by
//a space that is 4 numbers in a line.
//Store in a two dimensional array
//Average all numbers
//Add each line and each column of the array
//Output the array and totals into an output file named output.txt

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    ifstream fsIN;
    const int NUM_ROW = 3;
    const int NUM_COL = 4;
    int array[NUM_ROW][NUM_COL]   = {0};       //Data from file row 1
    string xFile = "";                 //File for transfering data, input from user.
    
    cout << "Enter file name: " << endl;
    cin >> xFile;
    
    cout << "Opening file " << xFile << "." << endl;
    
    fsIN.open(xFile);           //Opens user file
    
    if(!fsIN.is_open()){      //Checks for file opening correctly
        cout <<"File not opened." << endl;
        return 1;
    }//End file not opened
    
    //while(fsIN.is_open()){
        for(int i = 0; i < NUM_ROW; ++i){
            for(int j = 0; j < NUM_COL; ++j){
                fsIN >> array[i][j];
            }
        }
    int row1total = 0;      //row 1 sum
    for(int j = 0; j < NUM_COL; ++j){
        row1total += array[0][j];
        
    }
    cout << "Row 1 sum: " << row1total << endl;
    
    int row2total = 0;      //row 2 sum
    for(int j = 0; j < NUM_COL; ++j){
        row2total += array[1][j];
        
    }
    cout << "Row 2 sum: " << row2total << endl;
    
    int row3total = 0;      //row 3 sum
    for(int j = 0; j < NUM_COL; ++j){
        row3total += array[2][j];
        
    }
    cout << "Row 3 sum: " << row3total << endl;
    


    int col1total = 0;      //col 1 sum
    for(int i = 0; i < NUM_ROW; ++i){
        col1total += array[i][0];
        
    }
    cout << "Col 1 sum: " << col1total << endl;
    
    //}
    // while(fsIN.is_open()){
    //     for(int i = 0; i < NUM_ROW; ++i){
    //         for(int j = 0; j < NUM_COL; ++j){
    //             cout << array[i][j] << " ";
    //         }
    //     }
    // }
    
    //cout << array[0][0];
    //cout << array[0][1];
    

        for(int i = 0; i < NUM_ROW; ++i){
            for(int j = 0; j < NUM_COL; ++j){
                
                cout << array[i][j] << " ";
            }
        }
  
    cout << endl;
            
        
    
    
    fsIN.close();           //Close file.
    

}//End main