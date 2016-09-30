#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class CalcWeight {
    public:
        //functions

        
        int SetWeight(int);
        
        string SetPlanet(string);
        
        int getNewWeight();
        
        void Print();
    
    private:
        //variables
        int weight;
        
        string planet;
};//end class

int CalcWeight::SetWeight(int x){
    weight = x;
}

string CalcWeight::SetPlanet(string y){
    planet = y;
}

int CalcWeight::getNewWeight(planet){
    if (planet == "Mars")
        weight = (userWeight * .380)
    if else(planet == "Jupiter")
        weight = (userWeight * 2.40)
    if else(planet == "Moon")
        weight = (userWeight * .165);
    else()
        weight = userWeight;
    
//}
//void CalcWeight::Print(){
 //   cout << weight <<  planet << endl;
//}



int main(){
  
    CalcWeight person1;
    int userWeight;
    string y1;
    
    cout << "enter weight" << endl;
    cin >> userWeight, 
    cout << "enter planet" << endl;
    cin >> y1;
    
    person1.SetWeight(userWeight);
    person1.SetPlanet("Pluto");
    
    //person1.CalcNewWeight();
    
    cout << "on " << y1 << " you weigh " << x1 << endl;
    
    return 0;
    
}