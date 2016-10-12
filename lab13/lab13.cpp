#include <iostream>
using namespace std;

int countingFunction(){
   int min = 00;
   int hour = 1;
   
   if(hour == 1){
   while(min < 60){
      cout << hour << ":" << min << " PM" << endl;
      min++;
         if(hour == 1 && min == 59){
            hour = 2;
            min = 00;
            while(min < 60){
            cout << hour << ":" << min << " PM" << endl;
            min++;
            } // end while
         } //end else if min hour
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
while(startHour < endHour){
   if(startMinute == 00){
      startMinute = 15;
   }else if(startMinute == 15){
      startMinute = 30;
   }else if(startMinute == 30){
      startMinute = 45;
   }else if(startMinute == 45){
      startMinute = 00;
   }//end if else

      cout << startHour << ":" << startMinute << endl;
      
      if(startMinute == 45){
      startHour++;
   }
}//end while

cout << "And here is every minute between 1:00 PM and 2:59 PM:" << endl;

countingFunction();

}//end main
