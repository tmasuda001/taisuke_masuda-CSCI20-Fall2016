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
    ifstream fsIN;     //Input file stream
    ofstream fsOUT;    //Outbut file stream
    const int NUM_ROW = 3;
    const int NUM_COL = 4;
    int array[NUM_ROW][NUM_COL] = {0};       //Data from file row 1
    string xFile = "";                 //File for transfering data, input from user.
    
    cout << "Enter file name: (input.txt) " << endl;
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
    //cout << "Row 1 sum: " << row1total << endl;
    
    int row2total = 0;      //row 2 sum
    for(int j = 0; j < NUM_COL; ++j){
        row2total += array[1][j];
        
    }
    //cout << "Row 2 sum: " << row2total << endl;
    
    int row3total = 0;      //row 3 sum
    for(int j = 0; j < NUM_COL; ++j){
        row3total += array[2][j];
        
    }
    //cout << "Row 3 sum: " << row3total << endl;
    


    int col1total = 0;      //col 1 sum
    for(int i = 0; i < NUM_ROW; ++i){
        col1total += array[i][0];
        
    }
    //cout << "Col 1 sum: " << col1total << endl;
    
    int col2total = 0;      //col 2 sum
    for(int i = 0; i < NUM_ROW; ++i){
        col2total += array[i][1];
        
    }
    //cout << "Col 2 sum: " << col2total << endl;
    
    int col3total = 0;      //col 3 sum
    for(int i = 0; i < NUM_ROW; ++i){
        col3total += array[i][2];
        
    }
    //cout << "Col 3 sum: " << col3total << endl;
    
    int col4total = 0;      //col 4 sum
    for(int i = 0; i < NUM_ROW; ++i){
        col4total += array[i][3];
        
    }
    //cout << "Col 4 sum: " << col4total << endl;
    
        //Input tester
        // for(int i = 0; i < NUM_ROW; ++i){
        //     for(int j = 0; j < NUM_COL; ++j){
                
        //         cout << array[i][j] << " ";
        //     }
        // }
  
    cout << endl;


    
    fsIN.close();           //Close file
    
//To output to a file:

//Open file
fsOUT.open("myOutFile.txt");

if(!fsOUT.is_open()){
    
    cout << "Outputfile could not be opened. (myOutFile.txt)" << endl;
    return 1;
}
//Output/write to file
    fsOUT << setw(4) << array[0][0] << setw(4) << array[0][1] << setw(4) << array[0][2] << setw(4) << array[0][3] << setw(4) << row1total << endl;
    fsOUT << setw(4) << array[1][0] << setw(4) << array[1][1] << setw(4) << array[1][2] << setw(4) << array[1][3] << setw(4) << row2total << endl;
    fsOUT << setw(4) << array[2][0] << setw(4) << array[2][1] << setw(4) << array[2][2] << setw(4) << array[2][3] << setw(4) << row3total << endl;
    fsOUT << setw(4) << col1total << setw(4) << col2total << setw(4) << col3total << setw(4) << col4total << endl;

//Close file.
fsOUT.close();

}//End main