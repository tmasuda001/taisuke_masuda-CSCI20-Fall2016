//Tai Masuda 3304190
//CSCI-20 
//10-04-2016
//April Browne




#include <iostream>
#include <string>
using namespace std;

//1
void function1(){
int suzyAge = 25; 
int johnAge = 21; 
string string1 = "";
if(suzyAge < johnAge){
    string1 = "True.";
} 
else {
    string1 = "False.";
}
cout << "1. (suzyAge < johnAge) outputs " << string1 << endl;
}


//2
void function2(){
int x =7; 
int y = 7; 
string string2 = "";
if(x >= y){
    string2 = "True.";
} else {
    string2 = "False.";
}
cout<<"2. (x >= y) outputs " << string2 << endl; 
}

//3
void function3(){
int a = 1; 
int b = 9; 
string string3 = "";
if(a == b){
    string3 = "True.";
} else {
    string3 = "False.";
}
cout<<"3. (a == b) outputs " << string3 << endl; 
}


//4
void function4(){
int limit = 20; 
int count = 10; 
string string4 = "";
if((limit*count)/2 > 0){
    string4 = "True.";
} else {
    string4 = "False.";
}
cout<<"4. ((limit*count)/2 > 0) outputs " << string4 << endl; 
}

//5
void function5(){
int t = -4; 
int z = 0; 
string string5 = "";
if(t > 5 || z < 2/2 > 0){
    string5 = "True.";
} else {
    string5 = "False.";
}
cout<<"5. (t > 5 || z < 2) outputs " << string5 << endl; 
}

//6
void function6(){
int variable = -5;
string string6 = "";
if(!(variable >0)){
    string6 = "True.";
} else {
    string6 = "False.";
}
cout<<"6. (!(variable >0)) outputs " << string6 << endl; 
}


//7
void function7(){
int a1 = 16; 
string string7 = "";
if(a1/4 < 8 && a1 >= 4){
    string7 = "True.";
} else {
    string7 = "False.";
}
cout<<"7. (a1/4 < 8 && a1 >= 4) outputs " << string7 << endl; 
}


// //8 [[[[[ z is not defined from worksheet, cannot compute]]]]]
void function8(){
     cout << "8. Not enough information." << endl;
// int x1 = -2; 
// int y1 = 5; 
// string string8 = "";
// if(x1*y1 < 10 || y1*z < 10){
//     string8 = "True.";
// } else {
//     string8 = "False.";
// }
// cout<<"(x1*y1 < 10 || y1*z < 10) outputs " << string8 << endl; 
}

// //9 [[[[[ x and y are not defined from worksheet, cannot compute]]]]]
void function9(){
     cout << "9. Not enough information." << endl;
// int j = -2; 
// int k = 5; 
// int l = 4; 
// string string9 = "";
// if(!(j*l < 10) || y/x * 4 < y *2){
//     string9 = "True.";
// } else {
//     string9 = "False.";
// }
// cout<<"(!(j*l < 10) || y/x * 4 < y *2) outputs " << string9 << endl; 
}


int main(){
    function1();
    function2();
    function3();
    function4();
    function5();
    function6();
    function7();
    function8();
    function9();
}