/*
Program: p16rockPaperScissors.cpp
Name: Steven Hunt
Description: A program to simulate rock-paper-scissors game.

Each players enters 'R', 'P', 'S' or 1, 2, 3 for Rock, Paper, Scissors.

The program then shows the winner on the basis of:

- Paper covers Rock
- Rock breack Scissors
- Scissors cut Paper
- Tie

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{

    int playerOne; // Player 1 selection
    int playerTwo; // Player 2 selection
    string rock; // Rock variable
    string paper; // Paper variable
    string scissors; // Scissors variable

    rock = 1;
    paper = 2;
    scissors = 3;

    // Introduction
    cout << "Welcome to Rock - Paper - Scissors! \n\n";

    // Prompt players for their entry
    cout << "Player 1: Please enter Rock (1), Paper (2), or Scissors (3): ";
    cin >> playerOne; // Assigned to player 1

    cout << endl;

    cout << "Player 2: Please enter Rock (1), Paper (2), or Scissors (3): ";
    cin >> playerTwo; // Assigned to player 2

    cout << endl;

    cout << "Player one chose: " << playerOne << endl;
    cout << "Player two chose: " << playerTwo << endl;

    cout << endl;

    // Game ends in a tie!
    if ((playerOne == 1) && (playerTwo == 1)){ // Tie with rock
        cout << "Both players chose 'Rock', game is a tie!";
    }

    if ((playerOne == 2) && (playerTwo == 2)){ // Tie with paper
        cout << "Both players chose 'Paper', game is a tie!";
    }

    if ((playerOne == 3) && (playerTwo == 3)){ // Tie with scissors
        cout << "Both players chose 'Scissors', game is a tie!";
    }

    // Rock Wins
    if ((playerOne == 1) && (playerTwo == 3)){ // Player 1 wins with rock
        cout << "Player 1 wins, rock smashes scissors!";
    }

    if ((playerOne == 3) && (playerTwo == 1)){ // Player 2 wins with rock
        cout << "Player 2 wins, rock smashes scissors!";
    }

    // Paper Wins
    if ((playerOne == 2) && (playerTwo == 1)){ // Player 1 wins with paper
        cout << "Player 1 wins, paper covers rock!";
    }

    if ((playerOne == 1) && (playerTwo == 2)){ // Player 2 wins with paper
        cout << "Player 2 wins, paper covers rock!";
    }

    // Scissors Win
    if ((playerOne == 3) && (playerTwo == 2)){ // Player 1 wins with scissors
        cout << "Player 1 wins, scissors cut paper!";
    }

    if ((playerOne == 2) && (playerTwo == 3)){ // Player 2 wins with scissors
        cout << "Player 2 wins, scissors cut paper!";
    }

    return 0;

}

/* === OUTPUT ===

Welcome to Rock - Paper - Scissors!

Player 1: Please enter Rock (1), Paper (2), or Scissors (3): 2

Player 2: Please enter Rock (1), Paper (2), or Scissors (3): 2

Player one chose: 2
Player two chose: 2

Both players chose 'Paper', game is a tie!

OR

Welcome to Rock - Paper - Scissors!

Player 1: Please enter Rock (1), Paper (2), or Scissors (3): 3

Player 2: Please enter Rock (1), Paper (2), or Scissors (3): 2

Player one chose: 3
Player two chose: 2

Player 1 wins, scissors cut paper!

OR

Welcome to Rock - Paper - Scissors!

Player 1: Please enter Rock (1), Paper (2), or Scissors (3): 1

Player 2: Please enter Rock (1), Paper (2), or Scissors (3): 2

Player one chose: 1
Player two chose: 2

Player 2 wins, paper covers rock!

OR

Welcome to Rock - Paper - Scissors!

Player 1: Please enter Rock (1), Paper (2), or Scissors (3): 3

Player 2: Please enter Rock (1), Paper (2), or Scissors (3): 3

Player one chose: 3
Player two chose: 3

Both players chose 'Scissors', game is a tie!

*/
