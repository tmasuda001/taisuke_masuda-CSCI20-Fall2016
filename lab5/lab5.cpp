#include <iostream>
using namespace std;

struct monsterStruct {
    int head;
    int eye;
    int ear;
    int nose;
    int mouth;
    string name;
};

int main(){
    
//user monster
    monsterStruct zombie;
   
   zombie.head; 
   zombie.eye = 1;
   zombie.ear = 1;
   zombie.nose = 2;
   zombie.mouth = 2;
   zombie.name;
 
 // 1 = Zombus , 2 = Franken, 3 = Wackus
 
 cout << "Name your monster" << endl;
 cin >> zombie.name;
 
 cout << "What head should the monster have? ( 1 = Zombus , 2 = Franken, 3 = Wackus)" << endl;
 cin >> zombie.head;
 
 cout << "WITH 1 = ZOMBUS, 2 = FRANKEN, AND 3 = WACKUS, " << endl;
 cout << zombie.name << " has a value of " << zombie.head << " for a head." << endl;
 cout << zombie.name << " has a value of " << zombie.eye << " for eyes." << endl;
 cout << zombie.name << " has a value of " << zombie.ear << " for ears." << endl;
 cout << zombie.name << " has a value of " << zombie.nose << " for a nose." << endl;
 cout << zombie.name << " has a value of " << zombie.mouth << " for a mouth." << endl;


//monster joe

 monsterStruct joe;
   
   joe.head = 1;
   joe.eye = 1;
   joe.ear = 1;
   joe.nose = 2;
   joe.mouth = 2;
   

 cout << "Monster 2 is Joe." << endl;
 
 
 cout << "WITH 1 = ZOMBUS, 2 = FRANKEN, AND 3 = WACKUS, " << endl;
 cout << "Joe has a value of " << joe.head << " for a head." << endl;
 cout << "Joe has a value of " << joe.eye << " for eyes." << endl;
 cout << "Joe has a value of " << joe.ear << " for ears." << endl;
 cout << "Joe has a value of " << joe.nose << " for a nose." << endl;
 cout << "Joe has a value of " << joe.mouth << " for a mouth." << endl;


//monster dave

 monsterStruct dave;
   
   dave.head = 3; 
   dave.eye = 1;
   dave.ear = 1;
   dave.nose = 1;
   dave.mouth = 3;
   
   
 cout << "Monster 3 is Dave." << endl;

 
 cout << "WITH 1 = ZOMBUS, 2 = FRANKEN, AND 3 = WACKUS, " << endl;
 cout << "Dave has a value of " << dave.head << " for a head." << endl;
 cout << "Dave has a value of " << dave.eye << " for eyes." << endl;
 cout << "Dave has a value of " << dave.ear << " for ears." << endl;
 cout << "Dave has a value of " << dave.nose << " for a nose." << endl;
 cout << "Dave has a value of " << dave.mouth << " for a mouth." << endl;
 
//monster Chuck

 monsterStruct chuck;
   
   chuck.head = 2; 
   chuck.eye = 2;
   chuck.ear = 1;
   chuck.nose = 2;
   chuck.mouth = 2;
   
   
 cout << "Monster 3 is Chuck." << endl;

 
 cout << "WITH 1 = ZOMBUS, 2 = FRANKEN, AND 3 = WACKUS, " << endl;
 cout << "Chuck has a value of " << chuck.head << " for a head." << endl;
 cout << "Chuck has a value of " << chuck.eye << " for eyes." << endl;
 cout << "Chuck has a value of " << chuck.ear << " for ears." << endl;
 cout << "Chuck has a value of " << chuck.nose << " for a nose." << endl;
 cout << "Chuck has a value of " << chuck.mouth << " for a mouth." << endl;



}