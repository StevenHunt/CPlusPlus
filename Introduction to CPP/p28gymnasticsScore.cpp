/*

Program: p28gymnasticsScore.cpp
Name: Steven Hunt
Description:
- A program to compute a gymnastics competition score:
    - 4 judges mark the gymnasts in the range from 0 to 10.
    - An error message will appear if the mark isn't in the range
    - Outputs the average

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
    // Initializing variables
    float input, avg, sum=0;

    for (int i = 1; i < 5; i++) // Loops until users entry is complete

    {
        cout << "Judge " << i << ", please enter a number between 0 - 10: "; // Prompts user on how many numbers to input
        cin >> input;

    // While Loop for out of range inputs.
    while ( (input > 10 ) || (input < 0) ){
        cout << "Incorrect input, judge " << i << ", please re-enter another score between 0 - 10: ";
        cin >> input;
        }

        sum += input;   // Calculating sum ( Ititialized at 0, then increase by users inputs )
    }

    avg = sum / 4;      // Calculating average ( Sum / 4 )

    cout << endl; // Space

    cout << "The average score of the judges is " << sum << "/4 : " << avg << endl; // Outputs average

    return 0;
}

/* === OUTPUT ===

Judge 1, please enter a number between 0 - 10: 11
Incorrect input, judge 1, please re-enter another score between 0 - 10: 12
Incorrect input, judge 1, please re-enter another score between 0 - 10: 15
Incorrect input, judge 1, please re-enter another score between 0 - 10: 1
Judge 2, please enter a number between 0 - 10: 11
Incorrect input, judge 2, please re-enter another score between 0 - 10: 14
Incorrect input, judge 2, please re-enter another score between 0 - 10: 8
Judge 3, please enter a number between 0 - 10: 7
Judge 4, please enter a number between 0 - 10: 9

The average score of the judges is 25/4 : 6.25

*/
