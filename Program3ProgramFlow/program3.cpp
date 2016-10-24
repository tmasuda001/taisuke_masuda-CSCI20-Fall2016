//Tai Masuda
//10-15-16
//Program 3 Program Flow
//CSCI-20, Instructor April Browne

//Number Guessing Game:
//This game takes a user range and picks a random number within that range. 
//Then, the user enters a guess number. If the guess number is too low,
//output is "too low"; opposite is true for a number too high. Once the 
//correct number is chosen, the program outputs a score based on number of 
//attempts. 


#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class GuessGame{
    private:
    
    const int MAX_CHANCES = 100;
    int userTopRange;
    int userBotRange;
    int userGuess;
    int answer;
    int attempts = 0;
    
    public:
    
    GuessGame();        //default constructor
    int startGame();    //begins game and explains rules
    int getRandomNum(); //outputs variable answer as a random number using user range
    void runGame();     //compares user guess to answer from getRandomNum.
                        //and states if too high or low. counts number of attempts
    int getFinalScore();
}; // end class guessing game

GuessGame::GuessGame(){
}//end constructor

int GuessGame::getRandomNum(){
    srand(static_cast <unsigned int> (time(0)));
    answer = rand() % (userTopRange - userBotRange) + userBotRange;
    return answer;
}//end get random number

int GuessGame::startGame(){
    cout << "Welcome to Guessing Game! Please pick a top and bottom range for you to guess from";
    cout << endl;
    cout << "Top Number:";
    cin >> userTopRange;
    cout << "Bottom Number:";
    cin >> userBotRange;
    cout << "Thanks! I have chosen my number from between " << userBotRange;
    cout << " and " << userTopRange << ". Can you guess what it is?" << endl;
    cin >> userGuess;

    return 0;
}//end game introduction

void GuessGame::runGame(){
    
    while(userGuess != answer){
        if(userGuess > answer){
            cout << "Too high! Try Again!" << endl;
            ++attempts;
            cin >> userGuess;
        }else if(userGuess < answer){
            cout << "Too low! Try Again!" << endl;
            ++attempts;
            cin >> userGuess;
        }//end if else range check

    }//end while loop
    
    if(userGuess == answer){
    cout << "Correct! My number was: " << answer << "!" << endl;
    ++attempts;
    }// end if answer is correct
    
    int finalScore = 0;
    
    finalScore = (MAX_CHANCES - attempts);
    if(attempts == 1){
        finalScore = 100;
    }
    cout << "\t SCOREBOARD" << endl;
    cout << " Attempts     : " << attempts << endl;
    cout << " Top Range    : " << userTopRange << endl;
    cout << " Bottom Range : " << userBotRange << endl;
    cout << " Your Guess   : " << userGuess << endl;
    cout << " My Answer    : " << answer << endl;
    cout << " Efficiency   : " << finalScore << "%" << endl;
    
}//end run game

int main()
{
    GuessGame player1;
    
    player1.startGame();
    player1.getRandomNum();
    player1.runGame();
    
    
    cout << "\n\n\tOk, next player's turn.\n" << endl;
    
    GuessGame player2;
    
    player2.startGame();
    player2.getRandomNum();
    player2.runGame();
    
    cout << "\n\n\tThanks for playing!\n" << endl;
}