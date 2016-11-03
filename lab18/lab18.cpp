//Tai Masuda 3304190
//CSCI-20 Lab 4.4 String Class
//April Brown 11-03-16

//This program allows a user to enter their first and last name.
//It then gives 3 different options based on their name for a user name.
//If the first or last name is too long, or if the first and last name match,
//The user has to reenter previous value. Uses string library.

#include <iostream>
#include <string>
using namespace std;


int main(){
        
    string firstName;             //max 10 characters for first name
    string lastName;              //max 20 characters for last name
    int i = 0;
    
    
    
    cout << "Enter First Name: " << endl;                               //user enters first name
    cin >> firstName;
    
    
    if(firstName.length() > 10){                                         //checks user name length
        cout << "First name too long. Enter 10 characters or less" << endl;
        firstName.clear();
        cout << "Try Again: ";
        cin >> firstName;
    }
    
    cout << "Enter Last Name: " << endl;                                //user enters last name
    cin >> lastName;
    
    if(lastName == firstName){                                          //checks if first and last name are the same
        cout << "First and last name are the same, try again" << endl;
        lastName.clear();
        cout << "Enter Last Name: " << endl;
        cin >> lastName;
    }
    
    if(lastName.length() > 20){                                          //checks length of last name
        cout << "Last name too long. Enter 20 characters or less" << endl;
        lastName.clear();
        cout << "Try Again: ";
        cin >> lastName;
    }   
    

    cout << "Name: " << firstName << " " << lastName << endl;           //output user FULL NAME
    cout << "Which of the three user names would you like?" << endl;
    
    for(i = 0; i < firstName.length(); ++i){                             //changes firstName array to lowercase
    firstName[i] = tolower(firstName[i]);
    }
    for(i = 0; i < lastName.length(); ++i){                              //changes lastName array to lowercase
    lastName[i] = tolower(lastName[i]);
    }
    
    cout << "1)" << firstName.at(0) << firstName.at(1) << lastName << endl;
     
    cout << "2)" << firstName << lastName << endl;
    
    cout << "3)" << firstName.at(0) << lastName << endl;
}//End main