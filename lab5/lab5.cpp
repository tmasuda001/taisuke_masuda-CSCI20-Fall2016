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
    monsterStruct zombie;
   
   zombie.head; //code cout ask which head
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
 
 cout << "WITH 1 = ZOMBUS, 2 = FRANKEN, AND 3 = WACKUS";
 cout << zombie.name << " has a value of " << zombie.head << " for a head." << endl;
 cout << zombie.name << " has a value of " << zombie.eye << " for eyes." << endl;
 cout << zombie.name << " has a value of " << zombie.ear << " for ears." << endl;
 cout << zombie.name << " has a value of " << zombie.nose << " for a nose." << endl;
 cout << zombie.name << " has a value of " << zombie.mouth << " for a mouth." << endl;
 
 
}