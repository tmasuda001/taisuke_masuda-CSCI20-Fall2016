/* 
Tai Masuda
CSCI-20 
Program 2: Functions
09/29/16
April Browne
*/



#include <iostream>
#include <string>
using namespace std;

class ConvertWeight {  //concerts weight from user into desired weight  
    public:
       
        void setUserWeight(int userInitialWeight, string userPlanet); //mutator
        void setUserPlanet();
        int  getUserWeight() const; //accessor
        double planetGrav();
        
    private:
        int userInitialWeight;
        int userFinalWeight;
        string userPlanet;
        double planetGrav1;
        
        
        
        
};//end class


    


double ConvertWeight::planetGrav(){
    if (userPlanet == "Mars"){
        return 0.38;
    } break;
    else if (userPlanet == "Jupiter") {
        return 2.40;
    } break;
    else (userPlanet == "Moon") {
        return .165;
    }
    
}//end planetGrav funciton

void ConvertWeight::setUserWeight(int userInitialWeight, double planetGrav1){
    userFinalWeight = userInitialWeight * planetGrav(string userPlanet)
    
} //end setweight



int main(){
    int userInitialWeight;
    string userPlanet;
    ConvertWeight ConvertWeightEarth;
    ConvertWeight planet2Mars;
    ConvertWeight planet3Moon;
    ConvertWeight planet4Juipter;
    //get user weight input
    cout << "Enter your weight in pounds" << endl;
    cin >> userInitialWeight;
    //get user planet input
    cout << "Enter your planet. (Mars, Moon, or Jupiter)" << endl;
    cin >> userPlanet;
    //output converted weight on specified planet
    //ConvertWeight ConvertWeight();
    
   cout << "Your weight is: " << ConvertWeightEarth.getUserWeight() << "." << endl;
    
    
    
    
}//end main

------------------------------------------------------------------------

ConvertWeight planet1;
ConvertWeight planet2;

planet1.setUserWeight(100);
planet1.setUserPlanet("Earth");

planet1.setUserWeight(100);
planet1.setUserPlanet("Moon");

cout << planet1.getUserWeight();
cout << planet2.getUserWeight();
