#include <iostream>
using namespace std;

//This program contains a menu of 10 different items for a user
//to choose from. The program allows the user to choose an item
//until they stay they are done. 
//An array is used to hold how many of each item a user requests.

int main(){
    
    const int NUM_MENU_ITEMS = 10;
    int menuItems[NUM_MENU_ITEMS] = {0,0,0,0,0,0,0,0,0,0};
    int i = 0;
    int userOrder = 0; 
    
    cout << "Please type the menu number of the food you would like";
    cout << " to order, then hit enter." << endl;
    cout << "To order multiples of an item, please enter the menu number again." << endl;
    cout << "\t Type 0 (zero) to submit your order." << endl;
    cout << "\t ___MENU___" << endl;
    cout << "1.  Breakfast Burrito   ------ 4.99" <<  endl; //index 0
    cout << "2.  Sausage Scramble    ------ 6.99" <<  endl; //index 1
    cout << "3.  Chorizo Scramble    ------ 6.99" <<  endl; //index 2
    cout << "4.  Bacon and Eggs      ------ 4.99" <<  endl; //index 3
    cout << "5.  Fruit and Oats      ------ 4.99" <<  endl; //index 4
    cout << "6.  French Toast        ------ 5.99" <<  endl; //index 5
    cout << "7.  Full Stack Pancakes ------ 5.99" <<  endl; //index 6
    cout << "8.  Half Stack Pancakes ------ 2.99" <<  endl; //index 7
    cout << "9.  Fruit and Yogurt    ------ 4.99" <<  endl; //index 8
    cout << "10. Ham Steak and Eggs  ------ 8.99" <<  endl; //index 9
    cout << endl;

    do{                                             //prompts user for menu item number
        cout << "Enter the menu number:" << endl;
        cin >> userOrder;
        ++menuItems[userOrder - 1];                 //increments array menuItems based on the number of times a menu item is chosen
    }while(userOrder >=1 && userOrder <=10);        //sets do while loop boundaries between 1 and 10
    
    cout << endl;
    cout << "\tThank you for your order!" << endl;
    cout << endl;
    
    for(i = 0; i < NUM_MENU_ITEMS; ++i){            //prints menuItems array values.
        cout << "Item " << i + 1 << " is: " << menuItems[i] << endl;
    }
}//end main
