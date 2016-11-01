//Tai Masuda 3304190
//CSCI-20 Lab 4.3 C Strings
//April Brown 11-01-16

//This program allows a user to enter their first and last name.
//It then gives 3 different options based on their name for a user name.
//If the first or last name is too long, or if the first and last name match,
//The user has to reenter previous value.


#include <iostream>
#include <cstring>

using namespace std;


int main(){
    
    char firstName[11];             //max 10 characters for first name
    char lastName[21];              //max 20 characters for last name
    int i = 0;
    
    
    
    cout << "Enter First Name: " << endl;                               //user enters first name
    cin >> firstName;
    
    
    if(strlen(firstName) > 10){                                         //checks user name length
        cout << "First name too long. Enter 10 characters or less" << endl;
        firstName[0] = 0;
        cout << "Try Again: ";
        cin >> firstName;
    }
    
    cout << "Enter Last Name: " << endl;                                //user enters last name
    cin >> lastName;
    
    if(strcmp(lastName, firstName) == 0){                                          //checks if first and last name are the same
        cout << "First and last name are the same, try again" << endl;
        lastName[0] = 0;
        cout << "Enter Last Name: " << endl;
        cin >> lastName;
    }
    
    if(strlen(lastName) > 20){                                          //checks length of last name
        cout << "Last name too long. Enter 20 characters or less" << endl;
        lastName[0] = 0;
        cout << "Try Again: ";
        cin >> lastName;
    }   
    

    cout << "Name: " << firstName << " " << lastName << endl;           //output user FULL NAME
    cout << "Which of the three user names would you like?" << endl;
    
    for(i = 0; i < strlen(firstName); ++i){                             //changes firstName array to lowercase
    firstName[i] = tolower(firstName[i]);
    }
    for(i = 0; i < strlen(lastName); ++i){                              //changes lastName array to lowercase
    lastName[i] = tolower(lastName[i]);
    }
    
    cout << "1)" << firstName[0] << firstName[1] << lastName << endl;
     
    cout << "2)" << firstName << lastName << endl;
    
    cout << "3)" << firstName[0] << lastName << endl;
    
}//end main