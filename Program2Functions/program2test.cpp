#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class WeightConv {
    public:
        void set_user_weight(int weight);
        void set_user_planet(std::string planet);
        
        int get_user_weight(); //this function does converting 
        std::string get_user_planet() const;
        void Print2();
    private:
        double userWeight;
        std::string userPlanet;
};
std::string WeightConv::get_user_planet(){
    return userPlanet;
}
int WeightConv::get_user_weight(){
    return userWeight;
}

void WeightConv::set_user_weight(int weight){
    userWeight = weight * 2;
}

void WeightConv::set_user_planet(std::string planet){
    userPlanet = planet;
}

//void WeightConv::Print2(){

//    cout << "Your weight on " << person1.get_user_weight() << " is ";
//    cout << person1.get_user_planet << endl;
//}

int main(){
    WeightConv person1;
        int weight;
        std::string planet;
        cout << "Enter your weight in pounds" << endl;
        cin >> weight;
        cout << "Enter a planet" << endl;
        cin >> planet;
        

    person1.set_user_weight(weight);
    person1.set_user_planet(planet);
    
    cout << "Your weight on " << person1.get_user_weight() << " is " << person1.get_user_planet << endl;
   // person1.Print2();
}