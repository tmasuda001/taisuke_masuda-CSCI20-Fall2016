#include <iostream>
#include <string>
using namespace std;

class ConvWeight{
   public:
      //default constructor
      ConvWeight();
      
      //overloaded constructor
      void WeightOnPlanet(int userWeight, string userPlanet);
      
      string setPlanet(string userPlanet);
      
      int setNewUserWeight(string userPlanet);
      
      int getNewUserWeight();
      
      string getNewPlanet();
      
   private:
   
      int newUserWeight;
      
      string newUserPlanet;
   
   
};//end class


void ConvWeight::WeightOnPlanet(int userWeight, string userPlanet){
   newUserWeight = userWeight;
   newUserPlanet = userPlanet;
}//end constructor


string ConvWeight::setPlanet(string userPlanet){
   newUserPlanet = userPlanet;
   
}//end planet function

int ConvWeight::setNewUserWeight(string userPlanet){
   if (userPlanet == "Moon"){
      newUserWeight = (newUserWeight * .165);
   }
  
     /* else if (userPlanet == "Mars"){
         newUserWeight = (newUswerWeight * 0.38);
      }
    
         else if (userPlanet == "Jupiter"){
         newUswerWeight = (newUswerWeight * 2.40);
      }
      */
}// end set new user weight
   

int ConvWeight::getNewUserWeight(){
   return newUserWeight;
}//end get height


string ConvWeight::getNewPlanet(){
   
   return newUserPlanet;
   
}//end get new planet



int main(){
   
   int userWeight;
   string userPlanet;
   
    ConvWeight user1;
    
   cout << "Enter your weight (in pounds): " << endl;
   cin >> userWeight;
   
   cout << "Enter your celestial body: (Moon, Mars, or Jupiter) "  << endl;
   cin >> userPlanet;
   
   
   
   cout << "On " << user1.getNewPlanet() << ", you weight is: " << user1.getNewUserWeight() << "." << endl;
}//end main