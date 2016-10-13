#include <iostream>
using namespace std;

int countingFunction(){
   int min = 00;
   int hour = 1;
   
   if(hour == 1){
    for(min = 0; min < 60; ++min){ // changed to for loop.
        if(min <=9){
            cout << hour << ":0" << min << " PM" << endl;
        }else{
        cout << hour << ":" << min << " PM" << endl;
        }
        if(hour == 1 && min == 59){
            hour = 2;
            min = 00;
    for(min = 0; min < 60; ++min){ //Changed to for loop.
        if(min <=9){
            cout << hour << ":0" << min << " PM" << endl;
        }else{
      cout << hour << ":" << min << " PM" << endl;
        }
            }// end while
         }//end else if min hour
   }//end while min
   }//end if hour
}//end counting function
int main()
{
 
   int startMinute = 00;
   
   int startHour = 00;
   int endHour = 00;
    
 cout<< "Enter starting hour. (Ex: For 3:00 type 3)" << endl;
 cin >> startHour;

 cout << "Enter ending hour. (Ex: For 12:00 type 12)" << endl;
 cin >> endHour;

 cout << "Here are 15 minute increments between your two times:" << endl;
while(startHour < endHour){  //Doesn't make sense to use for loop here. This tests
   if(startMinute == 00){    //two variables and the initial variable doesn't change
      startMinute = 15;      //until min == 45 (line 61) and we want the loop to end 
   }else if(startMinute == 15){//once startHour = endHour.
      startMinute = 30;
   }else if(startMinute == 30){
      startMinute = 45;
   }else if(startMinute == 45){
      startMinute = 00;
   }//end if else
    
    if(startMinute == 00){
    cout << startHour << ":0" << startMinute << endl;
    }else{
        
    cout << startHour << ":" << startMinute << endl;
    } 
    if(startMinute == 45){
      startHour++;
   }
}//end while

cout << "And here is every minute between 1:00 PM and 2:59 PM:" << endl;

countingFunction();

}//end main
