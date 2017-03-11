/*

Program: p27numberGuessingGame.cpp
Name: Steven Hunt
Description:
- A number guessing game:
    - The computer will generate a random number between 0 - 100
    - The user will be prompted to guess the number
    - If the number guessed is greater than the random number, an appropriate message will appear, with a similar message for low guesses.
    - The user should keep guessing until the correct number is guessed.
    - A congratulatory message and the amount of guesses will be displayed upon the right answer.

*/

#include <iostream>
#include <iomanip>
#include <cstdlib> // functions to generate a random number
#include <ctime> // allow us to use a time variable, as well as make sure we don't get the same variable

using namespace std;

int main ()

{

    // Initialize Variables
    int num, guess, numOfGuesses = 100, counter = 0;

    bool done = false; // Boolean variable ( Done, set to false )
    num = (rand() + time (0)) % 100 + 1;  // Number user is trying to guess, initialized to random + time(0), modulous 100 ( 1-100 )

    while (!done) // While not done
    {
        cout << "Guess a number between 0 and 100: "; // Prompt user for guess
        cin >> guess; // Asign user input to guess
        numOfGuesses--; // Decreases number of guesses
        counter++; // Increases number of guesses

        cout << endl;

        // If user guesses the right number, prompts message, and boolean is terminated
        if (guess == num)
        {
            cout << "Congratulations, " << num << " was the right number!" << endl;
            cout << "It took you " << counter << " tries! " << endl;
            done = true;

        }
        // If users guess is too low or too high, it prompts a message and loops back
        else if ( numOfGuesses > 0)
            {
                if ( guess < num )
                {
                    cout << "Too low.. Please guess again." << endl;
                }
                else
                {
                    cout << "Too high.. Please guess again." << endl;
                }

            }

        }

    return 0;
}

/* === OUTPUT ===

Guess a number between 0 and 100: 50

Too low.. Please guess again.
Guess a number between 0 and 100: 75

Too high.. Please guess again.
Guess a number between 0 and 100: 60

Too high.. Please guess again.
Guess a number between 0 and 100: 55

Too low.. Please guess again.
Guess a number between 0 and 100: 57

Congratulations, 57 was the right number!
It took you 5 tries!

*/
