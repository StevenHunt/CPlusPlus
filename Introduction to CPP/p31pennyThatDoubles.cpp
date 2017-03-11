/*

Program: p31pennyThatDoubles.cpp
Name: Steven Hunt
Description:
- A program that will generate the user a prompt on whether they would like one million dollars now, or a penny that doubles in value over the next month.
- The user will choose and the results will show.
- The program will compute the value of the penny doubling over 30 days, and how much more / less that is compared to the one million dollars.

*/

#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>

using namespace std;

int main ()

{

    // Initializing variables

    int choice; // Users choice

    bool done = false;

    while(!done) // While loop begins
    {
        cout << "Would you rather have (1) A million dollars, or (2) A penny that doubles it's value over the next month: ";
        cin >> choice;

        cout << endl;

        if (choice == 1) // If choice is 1
        {
            cout << "You chose one million dollars, not a wise choice!" << endl << endl; // User chose one million dollars
            done = true;
        }
        else if( choice == 2) // If choice is 2
        {
            cout << "Smart move!" << endl << endl; // User chose a compounding penny
            done = true;
        }
        else // Loops back if user inputs anything other than 1 or 2
        {
            cout << "Invalid Answer" << endl << endl;
            done = false;
        }
    } // End while loop

    // Math equation 2^a / 100 ( Where a = 1 - 30 )

    int pennyTotal = 5368709; // Total amount accrued over 30 days
    int millionTotal = 1000000; // Million dollars
    int difference; // Difference between the two

    double base;
    int exponent;

    base = 2;
    exponent = 1;

    difference = pennyTotal - millionTotal; // Difference caluculation

    cout << "By choosing the penny doubling its value over a months span, you would actuall make $" << difference << " more!" << endl;

    cout << endl; // Space ( Clean up the display )

    for (double days = 1; days < 30; days++) // As days increase by 1 to 30, accrued pennies will increase along side and double the total as it goes
    {
        cout << setw(3) << "Day " << days << ": $" << pow(base,exponent)/100 << endl; // Displays nice row of money accumulating over 30 days
        exponent++;
    }
    
    cin.get();

    return 0;

} // End main



/* === OUTPUT ===

Would you rather have (1) A million dollars, or (2) A penny that doubles it's value over the next month: 3

Invalid Answer

Would you rather have (1) A million dollars, or (2) A penny that doubles it's value over the next month: 4

Invalid Answer

Would you rather have (1) A million dollars, or (2) A penny that doubles it's value over the next month: 1

You chose one million dollars, not a wise choice!

By choosing the penny doubling its value over a months span, you would actuall make $4368709 more!

Day 1: $0.01
Day 2: $0.02
Day 3: $0.04
Day 4: $0.08
Day 5: $0.16
Day 6: $0.32
Day 7: $0.64
Day 8: $1.28
Day 9: $2.56
Day 10: $5.12
Day 11: $10.24
Day 12: $20.48
Day 13: $40.96
Day 14: $81.92
Day 15: $163.84
Day 16: $327.68
Day 17: $655.36
Day 18: $1310.72
Day 19: $2621.44
Day 20: $5242.88
Day 21: $10485.76
Day 22: $20971.52
Day 23: $41943.04
Day 24: $83886.08
Day 25: $167772.16
Day 26: $335544.32
Day 27: $671088.64
Day 28: $1342177.28
Day 29: $2684354.56
Day 30: $5368709.12

*/
