//Program 5 CSCI-20
//Tai Masuda
//12-13-16

//Pharmacy Inventory and Prescription Intake Program
//Allows user to upload previous days inventory or save current days
//Allows user to check inventory on a single item or full stock
//Allows user to fill a prescription and print a label

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;


class medication{
    private:
    
    string drugName;
    int drugQuantity;
    
    public:
    
    medication();
    void setdrugName(string name);
    void setdrugQuantity(int q);
    int getdrugQuantity();
    string getdrugName();

    
};//end class "medication"



//---------CLASS FUNCTIONS-------------------//

medication::medication(){}

string medication::getdrugName(){
    return drugName;
}//end get drug Name

void medication::setdrugName(string name){
    drugName = name;
    return;
}//end drug Name

int medication::getdrugQuantity(){
    return drugQuantity;
}//end get drug Quantity

void medication::setdrugQuantity(int q){
    drugQuantity = q;
    return;
}//end set drug Quantity



//------------- MAIN FUNCTION -------------------//



int main(){
    int i = 0;
    string drugInvMgt = "";
    int userInterface = 0;
    const int MAX_ARRAY = 20;
    medication m[MAX_ARRAY];
    string ptFirst = "";
    string ptLast = "";
    string ptDrugName = "";
    int ptDrugQuantity = 0;
    string ptSig = "";
    string ptMD = "";
    int holdQuant = 0;
    

cout << "Tai's Pharmacy Inventory Management and Filling Program" << endl;
cout << "Menu:" << endl;

do{
cout << "1: Drug Inventory \n2: Fill Prescription \n3: Begin/End Day \n4: Quit " << endl;
cin >> userInterface;

switch(userInterface){
    
case 1://inventory management
    cout << "1. Individual Drug Inventory \n2. Total Pharmacy Inventory \n3. Exit" << endl;
    int subInv;
    cin >> subInv;
    if(subInv == 1){
    do{
        cout << "Enter Drug Name to find quantity:" << endl;
        cin >> drugInvMgt;
        for(int j = 0; j < MAX_ARRAY; j++){
            if(m[j].getdrugName() == drugInvMgt){
                cout << m[j].getdrugQuantity() << endl;
            }//end drug quantity check
        }//end for, checks all in array
        cout << "Type 'q' to quit." << endl;
    }while(drugInvMgt != "q");
    }else if(subInv == 2){
        cout << "Full Inventory Stock Check" <<endl;
        cout << setw(20) << left << "DRUG NAME" << "||" << setw(20) << right << "DRUG QUANTITY" << endl;
  
        for(int j = 0; j < MAX_ARRAY; j++){
            if(m[j].getdrugName() != "")
            cout << setw(20) << left << m[j].getdrugName() << "||" << setw(20) << right << m[j].getdrugQuantity() << endl;
        }
    }else if(subInv == 3){
        cout << "error 1" << endl;
        break;
    }
    break;
case 2:
    cout << "FILL RX: \n_ _ _Enter Patient First and Last name (Ex \"John Smith\"):" << endl;
    cin >> ptFirst >> ptLast;
    cout << "_ _ _Doctor's Last Name:" << endl;
    cin >> ptMD;
    cout << "_ _ _Drug Name:" << endl;
    cin >> ptDrugName;
    cout << "_ _ _Drug Quantity:" << endl;
    cin >> ptDrugQuantity;
 
            for(int e = 0; e < MAX_ARRAY; e++){
                if(ptDrugName == m[e].getdrugName()){
                    if((m[e].getdrugQuantity() - ptDrugQuantity) < 0){
                        cout << "Insufficent stock." << endl;
                        cout << "_ _ _Drug Name:" << endl;
                        cin >> ptDrugName;
                        cout << "_ _ _Drug Quantity:" << endl;
                        cin >> ptDrugQuantity;
                        m[e].setdrugQuantity(m[e].getdrugQuantity() - ptDrugQuantity);
                    }else{
                        m[e].setdrugQuantity(m[e].getdrugQuantity() - ptDrugQuantity);
                    }
                }
            }
            
    cout << "_ _ _Directions:" << endl;
    cin.ignore();
    getline(cin, ptSig);

    cout << endl;
    cout << endl;    

    cout << setfill('-') << setw(25) << " " << setfill(' ') << endl;     
    cout << ptFirst << " " << ptLast << endl;
    cout << endl;
    cout << setfill('-') << setw(15) << left << ptDrugName << setw(5) << right << "# " << ptDrugQuantity << setfill(' ') << endl;
    cout << endl;
    cout << ptSig << endl;
    cout << endl;
    cout << setw(15) << right << "MD: " << ptMD << endl;
    cout << setfill('-') << setw(25) << "" << setfill(' ') << endl; 
    
    cout << endl;
    cout << endl;
    
    cout << "Print RX Label? Y / N:" << endl;
    char ptPrint;
    cin >> ptPrint;
    if(ptPrint == 'Y' || ptPrint == 'y'){
        ofstream printFS;    //Output file stream
        
        printFS.open("Fill_RX.txt");
        
        if(!printFS.is_open()){
            cout << "Outputfile could not be opened. (inventory.txt)" << endl;
        return 1;
        }  
        
            printFS << endl;
            printFS << endl;    

            printFS << setfill('-') << setw(25) << " " << setfill(' ') << endl;     
            printFS << ptFirst << " " << ptLast << endl;
            printFS << endl;
            printFS << setfill('-') << setw(15) << left << ptDrugName << setw(5) << right << "# " << ptDrugQuantity << setfill(' ') << endl;
            printFS << endl;
            printFS << ptSig << endl;
            printFS << endl;
            printFS << setw(15) << right << "MD: " << ptMD << endl;
            printFS << setfill('-') << setw(25) << "" << setfill(' ') << endl; 
    
            printFS << endl;
            printFS << endl;
        
            printFS.close();
    }
    continue;

case 3:
    cout << "Update or Save Current Inventory" << endl;
    cout << "1: Begin Day (Update Inventory) \n2: End Day (Save Current Inventory)" << endl;
    int userDay;
    cin >> userDay;
    if(userDay == 1){
        //import inventory
        ifstream inFS;     //Input file stream
        string FSdrugName = ""; 
        int FSdrugQuantity = 0;
    
        cout << "Opening Previous Inventory... File Name: \"inventory.txt\"." << endl;
    
        inFS.open("inventory.txt");           //Opens user file
    
        if(!inFS.is_open()){      //Checks for file opening correctly
            cout <<"File not opened." << endl;
            return 1;
        }//End file not opened
        
        for(int k = 0; k < MAX_ARRAY; k++){
            inFS >> FSdrugName >> FSdrugQuantity;
            m[k].setdrugName(FSdrugName);
            m[k].setdrugQuantity(FSdrugQuantity);
        }//end for loop to input stock
        
        inFS.close();
    }else if(userDay == 2){
        //save inventory
        ofstream outFS;    //Output file stream
        
        outFS.open("inventory.txt");
        
        if(!outFS.is_open()){
            cout << "Outputfile could not be opened. (inventory.txt)" << endl;
        return 1;
        }

        for(int h = 0; h < MAX_ARRAY; h++){
            outFS << setw(20) << left << m[h].getdrugName() << setw(10) << right << m[h].getdrugQuantity() << endl;
        }    
    
        outFS.close();
        
    }else{
        continue;
    }//end begin/end day
    continue; 
case 4:
    cout <<"Goodbye." << endl;
    break;

default : 
    cout << "Invalid. Goodbye." << endl;

    userInterface = 4;
    
}//end switch 

}while(userInterface != 4);
}//end main
