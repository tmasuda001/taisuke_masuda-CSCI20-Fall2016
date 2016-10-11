//Tai Masuda 3304190 CSCI-20 Lab 12 --- 10/11/16

#include <iostream>
using namespace std;

void testUserChoice(int i);

int main(){
    int userEcosystem = 0;
    
    cout << "What animal are you?" << endl;
    cout << "Where does your animal live? Type 1 for Land, 2 for Water, or 3 for Sky" << endl;
    cin >> userEcosystem;
    
    testUserChoice(userEcosystem);
    
    return 0;
}//end main


void testUserChoice(int i){
    switch(i){
        case (1): {
            int furOrNot;
            cout << "OK, land animals..." << endl;
            cout << "Type 1 for fur. Type 2 if you don't like fur." << endl;
            cin >> furOrNot;
                if(furOrNot == 1){
                    int bigOrSmall = 0;
                    cout << "Hey, some people are into fur.";
                    cout << " Anyway, type 1 for a large animal or 2 for a small one." << endl;
                    cin >> bigOrSmall;
                        if(bigOrSmall == 1){
                            cout << "You're a majestic grizzly bear!" << endl;
                        }else if(bigOrSmall == 2){
                            cout << "You're a tiny field mouse." << endl;
                        }
                }else if(furOrNot == 2){
                    int quadOrBi = 0;
                    cout << "Smooth skin, no problem.";
                    cout << " Anyway, please type 1 for quadrupedal or 2 for bipedal." << endl;
                    cin >> quadOrBi;
                         if(quadOrBi == 1){
                             cout << "You're an elephant! Never forget it." << endl;
                        }else if(quadOrBi == 2){
                            cout << "You are a human. The most dangerous animal on Earth." << endl;
                        }
                }
        break;
                
        }
        case (2):{ 
            int skinOrScales;
            cout << "Water.. OK. Do you like Scales or Skin?" << endl;
            cout << "Type 1 for scales or 2 for skin." << endl;
            cin >> skinOrScales;
                if(skinOrScales == 1){
                    int predOrPrey = 0;
                    cout << "Scales are cool.";
                    cout << " Anyway, type 1 for preditor or 2 for prey." << endl;
                    cin >> predOrPrey;
                        if(predOrPrey == 1){
                            cout << "YOU'RE A SHARK! GO CATCH SOME FLOUNDER!" << endl;
                        }else if(predOrPrey == 2){
                            cout << "YOU'RE A FLOUNDER! RUN!" << endl;
                        }
                }else if(skinOrScales == 2){
                    int mammalOrCeph = 0;
                    cout << "OK, so you like skin? Do you have a... collection?";
                    cout << " Anyway, please type 1 for mammal or 2 for cephalopod." << endl;
                    cin >> mammalOrCeph;
                         if(mammalOrCeph == 1){
                             cout << "You're a dolphin. Dolphins are the people of the sea." << endl;
                        }else if(mammalOrCeph == 2){
                            cout << "You are an octopus. You are a master of disguise." << endl;
                        }
                }
        break;
                
        }
        case (3):{ 
            int typeOfFly;
            cout << "So you wish to fly?" << endl;
            cout << "Type 1 for feathers. Type 2 for a chrysalis." << endl;
            cin >> typeOfFly;
                if(typeOfFly == 1){
                    cout << "You are a falcon. Enjoy the view.";
                }else if(typeOfFly == 2){
                    cout << "You're a beautiful butterfly!" << endl;

                }
        break;
                
        }
}}// end test user choice










