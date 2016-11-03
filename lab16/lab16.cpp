// Tai Masuda CSCI-20 Lab 16. 11-02-16 (Inst: April Brown)

//This program contains a menu of 10 different items for a user
//to choose from. The program allows the user to choose an item
//until they stay they are done. Outputs total price.
//Arrays are used to hold how many of each item a user requests and item prices.


#include <iostream> 
#include <iomanip>
using namespace std;

int main(){
    
    const int NUM_MENU_ITEMS = 10;
    int menuItems[NUM_MENU_ITEMS] = {0};
    float price[NUM_MENU_ITEMS] = {4.99,6.99,6.99,4.99,4.99,5.99,5.99,2.99,4.99,8.99};
    float totalPrice = 0;
    const float TAX = .0875;
    int i = 0;
    int userOrder = 0; 
    
    cout << "Please type the menu number of the food you would like";
    cout << " to order, then hit enter." << endl;
    cout << "To order multiples of an item, please enter the menu number again." << endl;
    cout << "\t Type 0 (zero) to submit your order." << endl;
    cout << "\t ___MENU___" << endl;
    cout << "1.  Breakfast Burrito   ------ 4.99" <<  endl; //Index 0
    cout << "2.  Sausage Scramble    ------ 6.99" <<  endl; //Index 1
    cout << "3.  Chorizo Scramble    ------ 6.99" <<  endl; //Index 2
    cout << "4.  Bacon and Eggs      ------ 4.99" <<  endl; //Index 3
    cout << "5.  Fruit and Oats      ------ 4.99" <<  endl; //Index 4
    cout << "6.  French Toast        ------ 5.99" <<  endl; //Index 5
    cout << "7.  Full Stack Pancakes ------ 5.99" <<  endl; //Index 6
    cout << "8.  Half Stack Pancakes ------ 2.99" <<  endl; //Index 7
    cout << "9.  Fruit and Yogurt    ------ 4.99" <<  endl; //Index 8
    cout << "10. Ham Steak and Eggs  ------ 8.99" <<  endl; //Index 9
    cout << endl;

    do{                                                 //Irompts user for menu item number
        cout << "Enter the menu number:" << endl;
        cin >> userOrder;
        if(userOrder == 0){                             //If user order types 0, exit do while loop
            break;
        }
        if(userOrder < 0 || userOrder > 10){            //Checks if input is between 0 and 10 
            cout << "Invalid menu item. Pick again: " << endl;
            cin >> userOrder;
        }
        cout << "That will be " << price[userOrder - 1] << endl;
        ++menuItems[userOrder - 1];                     //Increments array menuItems based on the number of times a menu item is chosen
        totalPrice = totalPrice + price[userOrder - 1];
        cout << "Current total: " << totalPrice << endl;
        for(i = userOrder; i < userOrder + 1; ++i){     //Prints menuItems array value and prints current stock
            cout << "Item " << i << " is ordered: " << menuItems[i - 1] << " times.";
            cout << " Current stock is: " << 10 - menuItems[i - 1] << "." << endl;
        } 
        
    }while(userOrder >=1 && userOrder <=10);            //Sets do while loop boundaries between 1 and 10
    
    double priceWithTax =  totalPrice + (TAX * totalPrice); //Adds tax
    
    cout << "\tThank you for your order!" << endl;
    cout << "Tax: 8.75%" << endl;
    cout << "Total Price: " << fixed << setprecision(2) << priceWithTax << endl;
    cout << endl;
    

}//End main