//Tai Masuda 3304190
//Lab 9 Functions and Classes
//10-18-16

//Problem Statement: Create a class that converts temperatures 
//between Kelvin, Fahrenheit and Celsius.  
//It will always internally store the value 
//in kelvin. This class will be run by the provided main.

#include <iostream>
using namespace std;


class TemperatureConverter{
    private: 
    //variables
        double kelvin_     = 0;
        double celcius_    = 0;
        double fahrenheit_ = 0;
 

    
    public:
    //functions
        TemperatureConverter();
        TemperatureConverter(int x);
        void SetTempFromKelvin(double kelVal); // accepts a kelvin value and stores it
        double GetTempFromKelvin(); // returns kelvin value
        
        void PrintTemps();
        
        void SetTempFromCelcius(double celciusVal);
        double GetTempAsCelcius();
        
        void SetTempFromFahrenheit(double fahrenheit);
        double GetTempAsFahrenheit();
        
    
};

TemperatureConverter::TemperatureConverter(){
    kelvin_ = 0;
    
    return;
}//end default constructor

TemperatureConverter::TemperatureConverter(int x){
    kelvin_ = x;
    
    return;
}//end overload constructor

void TemperatureConverter::PrintTemps(){
    cout << kelvin_ << " degress Kelvin." << endl;
    cout << GetTempAsCelcius() << " degress Celcius." << endl;
    cout << GetTempAsFahrenheit() << " degress Fahrenheit." << endl;
    cout << "..." << endl;
}//end print temps

void TemperatureConverter::SetTempFromKelvin(double kelVal){
    kelvin_ = kelVal;
}//end set temp from kelvin

double TemperatureConverter::GetTempFromKelvin(){
    return kelvin_;
}//end get temp from kelvin

void TemperatureConverter::SetTempFromCelcius(double celciusVal){
    kelvin_ = celciusVal + 273.15;
}//end set temp from celcius

double TemperatureConverter::GetTempAsCelcius(){
    celcius_ = kelvin_ - 273.15;
    return celcius_;
}//end get temp as celcius

void TemperatureConverter::SetTempFromFahrenheit(double fahrenheit){
    kelvin_ = (5 * ((fahrenheit - 32) / 9) + 273.15);
}//end set temp from fahrenheit

double TemperatureConverter::GetTempAsFahrenheit(){
    fahrenheit_ = (((celcius_ * 9)/5) + 32);
    return fahrenheit_;
}//end get temp as fahrenheit

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemps();
    temp2.PrintTemps();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemps();
    
    temp2.SetTempFromCelcius(32); //testing other functions
    cout<<temp2.GetTempAsCelcius()<<endl;
    temp2.PrintTemps();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemps();
    
    return 0;
}

