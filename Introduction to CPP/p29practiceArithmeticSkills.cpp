/*

Program: p29practiceArithmaticSkills.cpp
Name: Steven Hunt
Description:
    - A program to help children practice arithmetics.
    - The program will ask which type of practice he/she wants ( + , -, or * )
    - The loop will generate 2 random numbers ( 0 - 9 )
    - If the child answers the question correctly, a congratulatory message will appear and move onto another question.

*/

#include <iostream>
#include <iomanip>
#include <time.h>    // need this for time(NULL)
#include <stdlib.h>  // need this for srand() and rand()
#include <string>

using namespace std;

int main ()

{
    // Initializing Variables
    int input;
    char playAgain = 'y';
    int seeder = (int)time(NULL); // Initializing seed value to time(NULL)

    srand(seeder); // Value of srand

    int randomNumber1 = 0 + rand()%10; // Generates a random number between 0 - 9
    int randomNumber2 = 0 + rand()%10; // Generates another random number between 0 - 9


    // Calculations
    int sum = randomNumber1 + randomNumber2;
    int sub = randomNumber1 - randomNumber2;
    int mult = randomNumber1 * randomNumber2;

    bool done = false;

    // ------------------------

    while (playAgain == 'y' || !done) // While loop for play again action.
    {

    cout << "Would you like to Add (1), Subract (2), or Multiply (3): "; // Initial output, prompting the user to choose what type of math they would like to do.
    cin >> input;


    {
        if (input == 1){ // If input is 1, it generates an addition problem with 2 random numbers
        cout << "What is " << randomNumber1 << " + " << randomNumber2 << " : ";
        cin >> input;

            if ( input == sum)
            {
                cout << "Correct! Would you like to play again, Yes (y) or No (n): ";
                cin >> playAgain;
                }

                if (input != sum)
                    {
                        cout << "Incorrect, please try again: ";
                        cin >> input;
                    }
    }

    else if (input == 2){ // If input is 2, it generates a subtraction problem with 2 random numbers
        cout << "What is " << randomNumber1 << " - " << randomNumber2 << " : ";
        cin >> input;

         if ( input == sub){
                cout << "Correct! Would you like to play again, Yes (y) or No (n): ";
                cin >> playAgain;

                if (input != sub)
                        cout << "Incorrect, please try again: ";
                        cin >> input;
                    }
    }


    else if (input == 3){ // If input is 3, it generates a multiplication problem with 2 random numbers
        cout << "What is " << randomNumber1 << " * " << randomNumber2 << " : ";
        cin >> input;

         if ( input == mult){
                cout << "Correct! Would you like to play again, Yes (y) or No (n): ";
                cin >> playAgain;
         }
                if (input != mult)
                    {
                        cout << "Incorrect, please try again: ";
                        cin >> input;
                    }
    }
    }
    }
}

/* === OUTPUT ===

Would you like to Add (1), Subract (2), or Multiply (3): 1
What is 4 + 7 : 11
Correct! Would you like to play again, Yes (y) or No (n): y
Would you like to Add (1), Subract (2), or Multiply (3): 2
What is 4 - 7 : -3
Correct! Would you like to play again, Yes (y) or No (n): y
Would you like to Add (1), Subract (2), or Multiply (3): 3
What is 4 * 7 : 28
Correct! Would you like to play again, Yes (y) or No (n): n

Process returned 0 (0x0)   execution time : 24.238 s
Press ENTER to continue
*/
