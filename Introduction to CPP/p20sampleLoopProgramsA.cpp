/*

Program: p20sampleLoopProgramsA.cpp
Name: Steven Hunt
Description: Repetition - FOR loop, WHILE loop, DO-WHILE loop

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    int count;

    // FOR loop is used when an action must be repeated
    // FOR ( BEGIN; END CONDITION; INCREMENT ) { statements...
    for (count = 0; count < 3; count++ ) {
        cout << "In FOR loop:" << endl;
        cout << "Count = " << count << endl;
    }

    // WHILE loop is also used when an action must be repeated
    // WHILE ( END CONDITION ) { statement...
    while (count < 4) {
        cout << "In WHILE loop: " << endl;
        cout << "Count = " << count << endl; // Shows only if count < 3
        count++;
    }

    // DO-WHILE loop is used when an action must be repeated at least once
    // DO { statements... ; } WHILE ( END CONDITION ) ;
    do {
        cout << "In DO-WHILE loop: " << endl;
        cout << "Count = " << count << endl;
        count = count + 1;

    } while (count < 5); // Condition tested at the end, so that loop happens at least once

    return 0;


}

/* === OUTPUT ===

In FOR loop:
Count = 0
In FOR loop:
Count = 1
In FOR loop:
Count = 2
In WHILE loop:
Count = 3
In DO-WHILE loop:
Count = 4

*/

// ------------------------------------------------------------------------------------------------------------------------

/*

Program: p20sampleLoopProgramsB.cpp
Name: Steven Hunt
Date: 3/4/2016
Description: Repetition - WHILE, CONTINUE, BREAK, AND, OR, loop examples

*/

#include <iostream>
#include <iomanip>
using namespace std;
int main ()

{
    int R = 0;
    int num;

    while (R < 3) { // repeats until R is less than 3.
        cout << "INSIDE WHILE, r = " << R << endl;
        R += 1; // R = R + 1 ; same as R++;
    }

    // OR
    int Age = -10;
        while ( ( Age < 0) || (Age > 123) ) { // Repeats while ONE condition is TRUE
        cout << "Please enter valid age: ";
        cin >> Age;
    }

    // AND
    while ( ( Age > 0) && (Age < 123) ) { // Repeats while BOTH conditions are TRUE
        cout << "Age is correct, enter invalide age to STOP loop: ";
        cin >> Age;
    }

    // BREAK and CONTINUE
    while (true) { // A loop that will go on forever
        cout << "Please enter 1 to stop and 2 to repeat the loop: ";
        cin >> num;
        if ( num == 1)
            break; // ends the while loop
        if ( num == 2)
            continue; // makes the while loop resume from the beginning; line 35.
        cout << "Does this ever show? \n";
    }

    return 0;


}

/* === OUTPUT ===

INSIDE WHILE, r = 0
INSIDE WHILE, r = 1
INSIDE WHILE, r = 2
Please enter valid age: 1
Age is correct, enter invalide age to STOP loop: 2
Age is correct, enter invalide age to STOP loop: 3
Age is correct, enter invalide age to STOP loop: 4
Age is correct, enter invalide age to STOP loop: 5
Age is correct, enter invalide age to STOP loop: 122
Age is correct, enter invalide age to STOP loop: 123
Please enter 1 to stop and 2 to repeat the loop: 2
Please enter 1 to stop and 2 to repeat the loop: 1

*/







