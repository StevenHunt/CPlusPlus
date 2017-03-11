/*

Program: p12heightMessage.cpp
Name: Steven Hunt
Description: Write a program to compute a persons height and print out a message. The user will input feet and inches, and the program will then convert that to inches, then print a message based on the total inches.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{

    // Initializing variables
    int f; // Feet whole
    int i; // Inches
    int feetInInches; // Feet in inches
    int total; // Total inches

    cout << "Please enter feet: "; // Prompt user for feet
    cin >> f; // Assign f to feet

    cout << "please enter inches: ";
    cin >> i;

    feetInInches = f * 12; // 1 foot = 12 inches
    total = feetInInches + i; // Combined inches

    cout << "Your height is " << f << " feet + " << i << " inches = " << total << " inches!" << endl;  // Output

    if (total > 72 ){ // Checking to see if the user is taller than 6 feet (72 inches)
        cout << "You are TALL!";
    }

    else if (total < 60 ){ // Checking to see if he user is shorter than 5 feet (60 inches)
        cout << "You are vertically challenged!";
     }

    else{
        cout << "You are between 5' and 6' tall!" << endl;

    }

    return 0;

}

/* === OUTPUT ===

Please enter feet: 7
please enter inches: 5
Your height is 7 feet + 5 inches = 89 inches!
You are TALL!

OR

Please enter feet: 3
please enter inches: 1
Your height is 3 feet + 1 inches = 37 inches!
You are vertically challenged!

OR

Please enter feet: 5
please enter inches: 11
Your height is 5 feet + 11 inches = 71 inches!
You are between 5' and 6' tall!

*/
