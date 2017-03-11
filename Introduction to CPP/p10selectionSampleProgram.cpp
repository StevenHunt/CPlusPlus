/*

Program: p10selectionSampleProgram.cpp
Name: Steven Hunt
Description: Sample program showing the different selections and how/when to use them.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{

    int Age;
    cout << "Please enter your age: ";
    cin >> Age;

    // IF, ELSE IF, ELSE Chain
    if (Age < 0) { // an IF gets checked always to see if it is TRUE or False.
    cout << "You can't be younger than 0!";
    }

    else if (Age < 18) { // else if only gets checked when previous if is False
    cout << "Your are a minor!";
    }

    else if (Age == 20) { // else if only gets checked when previous else if is False.
    cout << "You are 20 years old!";
    }

    else if (Age != 21) { // else if only gets checked when previous else if is False
    cout << "You aren't 21!";
    }

    else { // Happens automatically when previous else if is False
    cout << "Age must be (not < 0), (not < 18), (not == 18), and (not != 21).";
    }

    // OR (||): One of the conditions must be true for IF to happen
    // if (condition1) || (condition2)

    if ( (Age < 0) || (Age > 123) ) {
    cout << "You are either less than 0, or older than 123!";
    }

    // AND (&&): BOTH of the conditions must be true for IF to happen
    // if (condition1) && (condition2)
    if ( (Age > 18) && (Age < 21) ) {
    cout << "Your age is BOTH (greater than 18) AND (less than 21)." << endl;
    }

    //NESTED IF's, an IF inside another IF
    if (Age > 18) {
        if (Age < 21) {
            cout << "It has to either be 19 or 20!." << endl;
        }
    }

    return 0;
}

/* === OUTPUT ===

Please enter your age: 19
You aren't 21!Your age is BOTH (greater than 18) AND (less than 21).
Is has to be either be 19 or 20!.

Process returned 0 (0x0)   execution time : 2.430 s
Press ENTER to continue.

*/
