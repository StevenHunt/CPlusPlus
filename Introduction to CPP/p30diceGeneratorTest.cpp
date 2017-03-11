/*

Program: p30diceGeneratorTest.cpp
Name: Steven Hunt
Description:
- A dice game that prompts the user to beat the computer
- The program will generate 2 random numbers ( 2 dice being rolled ) from 1 to 6 each
- It will then ask the user if they would like to keep that hand or roll again
- If the user wants to roll again, another 2 numbers will be randomly generated and so on and so forth
- If the user sticks with that hand, then the computer will then randomly generate 2 numbers between 1 - 6 for 'itself'
- The 2 combined totals will be calculated and compared against eachothers, whos ever pair is higher wins!

*/

#include <iostream> // Input / Outoput Stream
#include <cstdlib> // Generate random numbers and seed generate random number generator
#include <ctime> // Convert time_t value to string

using namespace std;

// Function prototypes

int roll();
void reroll(int&, int&);
int addRolls(int, int);

int roll() // roll: This function simulates a roll of a die and returns a random number between 1 - 6
{
    int roll = rand() % 6 + 1;

    return roll;
}

void reroll(int &rollOne, int &rollTwo) // reroll: This function simulates a reroll and then displays the results.
{
    cout << endl;

    rollOne = roll();
    rollTwo = roll();

    cout << "Your new score for dice 1 is: " << rollOne << endl;
    cout << "Your new score for dice 2 is: " << rollTwo << endl;
    cout << endl;

}

int addRolls(int rollOne, int rollTwo) // addRolls: Adds the 2 rolls and displays them
{
    cout << "Dice 1: " << rollOne << endl;
    cout << "Dice 2: " << rollTwo << endl;


    return rollOne + rollTwo;
}

int main() // Main Program

{

    // Initializing Variables
    int rollOne = 0;
    int rollTwo = 0;

    int playerScore = 0;
    int computerScore = 0;

    char answer;

    // ------------------------------------ Display Starts --------------------------------------------------------------

    cout << "Beat the computer!" << endl << endl;

    // Players first roll
    cout << "Player, press 1 to roll the dice: ";
    cin >> playerScore;

    cout << endl;

    rollOne = roll();
    rollTwo = roll();

    playerScore = addRolls(rollOne, rollTwo);

    cout << "Your total score is " << playerScore << endl << endl;


    // Prompts the user on whether or not they would like to reroll, allowing the while loop to be terminated if they don't want another roll
    bool done = false;

    while(!done)
    {

        cout << "Would you like to reroll ( Yes = Y , No = N ): ";
        cin >> answer;

        if(answer == 'Y' || answer == 'y') // If YES, reroll
        {
            reroll( rollOne, rollTwo); // These have been passed by reference so the function can change them
        }
        else if(answer=='N' ||answer=='n') // If NO, loop terminated
        {
            done = true;
        }
    } // End while loop

        // Players score displayed
        playerScore = addRolls(rollOne, rollTwo);

        cout << "Your final score is: "<< playerScore << endl << endl;


    // Computers roll
    cout << "Computers turn, press 2 for computers roll: ";
    cin >> computerScore;

    rollOne = roll();
    rollTwo = roll();

    computerScore = addRolls(rollOne, rollTwo);

    cout << "Computers score is: " << computerScore <<  endl << endl;

    // Simple calculations comparing users score & computers score and displaying the results based on the rolls
    if ( playerScore > computerScore )
        cout << "******** Your the winner! ********" << endl;

    else if ( playerScore < computerScore )
        cout << "******** Computer is the winner! ********" << endl;

    else
        cout << "******** TIE! ********" << endl;

    return 0;

} // End main program

/* ==== OUTPUT ====

Beat the computer!

Player, press 1 to roll the dice: 1

Dice 1: 2
Dice 2: 5
Your total score is 7

Would you like to reroll ( Yes = Y , No = N ): y

Your new score for dice 1 is: 4
Your new score for dice 2 is: 2

Would you like to reroll ( Yes = Y , No = N ): y

Your new score for dice 1 is: 6
Your new score for dice 2 is: 2

Would you like to reroll ( Yes = Y , No = N ): n
Dice 1: 6
Dice 2: 2
Your final score is: 8

Computers turn, press 2 for computers roll: 2
Dice 1: 5
Dice 2: 1
Computers score is: 6

******** Your the winner! ********

Process returned 0 (0x0)   execution time : 24.553 s
Press ENTER to continue.

*/
