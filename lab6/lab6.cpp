// ASCII ART Flower
#include <iostream>
#include <string>
using namespace std;



char ast = '*';
char slash = '/';
char quote = '"';
string tDash = "---";

int copyRightArt()
{
    cout << ast << ast << ast << ast << slash << tDash << slash << ast <<  endl;
    
    cout << ast << ast << ast << slash << tDash << slash << ast << ast <<  endl;
    
    cout << ast << ast << slash << tDash << slash << ast << ast << ast <<  endl;
    
    cout << "Copyright Tai Masuda 2016" << endl;
    
    cout << slash << tDash << slash << ast << ast << ast << ast << ast <<  endl;
    
    cout << quote << ast << quote << ast << quote << ast << quote << ast << quote << ast << quote << endl;
    
}

int main()
{
    cout<<"----^^^^---"<<endl;
    cout<<"---oooooo--"<<endl;
    cout<<"--oooooooo-"<<endl;
    cout<<"--oooooooo-"<<endl;
    cout<<"---000000--"<<endl;
    cout<<"---llllll--"<<endl;
    cout<<"-----()----"<<endl;
    cout<<"-----()----"<<endl;
    cout<<"-----()-DD-"<<endl;
    cout<<"-----()-D--"<<endl;
    cout<<"-----()D---"<<endl;
    cout<<"-----()----"<<endl;


    copyRightArt();
}
