//Lab 20. Pointers
//Tai Masuda 3304190
//11-22-16
//April Brown

//Purpose: To comment each line and explain what is happening.


#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
                char firststr[10];                                              //Char array stores user string 10 letters or less
                int firstname = 0;                                              //Int variable holds length of user string
                char *head = firststr;                                          //Declares head a pointer and points to firststr
                char *tail = firststr;                                          //Declares tails a pointer and points to firststr
                cout << "Please enter a 10 letter word or less" << endl;        //Prompts for user input
                cin >> firststr;                                                //User inputs word 10 letters or less
                strlen(firststr);                                               //Finds the length of user's word
                firstname = strlen(firststr);                                   //Assigns length of user's word to int var firstname
                cout << "Your word is " << firststr << endl;                    //Outputs user's word
                if (firstname<10)                                               //If length of firstname is less than 10,
                {
                                while (*head != '\0')                           //While deconstructed head (value @ firststr) is not null
                                {       
                                                cout << *head;                  //Outputs value of memory loc head is pointing to
                                                head++;                         //Increments head null character
                                }
                }
                else                                                            //Else if user's word is too big, outputs warning.
                {
                                cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
                }
                cout << endl;                                                   //Newline
                tail = &firststr[strlen(firststr) - 1];                         //Assigns memory loc of array index at [length of string - 1] to tail. 
                if (firstname < 10)                                             //If length of firstname is less than 10,
                {
                                while (*tail>0)                                 //While value of memory address tail points to is greater than zero,
                                {   
                                                cout << *tail;                  //Outputs value at memory location tail points to
                                                tail--;                         //Decrement Tail to zero to end while loop
                                }
                }
                cout << endl;                                                   //Newline
                head = firststr;                                                //Assigns user's word to char var head
                tail = &firststr[strlen(firststr) - 1];                         //Assigns memory loc of array index at [length of string - 1] to tail
                head++;                                                         //Increment head
                tail--;                                                         //Decrement Tail
                if (*head == *tail)                                             //If value head is the same as the value tail (after user word reversal)
                {
                                cout << "It is an palindrome!" << endl;         //Output to screen.
                }
                else                                                            
                {
                                cout << "It is not an palindrome" << endl;      //Else, output this
                }
 
                return 0;
}