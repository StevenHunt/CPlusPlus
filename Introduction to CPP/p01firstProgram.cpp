/*
    Program name: p1firstProgram.cpp
    Student name: Steven Hunt
    Description: Examples of cout and variables
*/

#include <iostream>  // Need this for COUT and CIN
using namespace std;

int main() // This is where the program starts
{
    cout << "Hello"; // Everything in Double quotes, shows as is
    cout << "\n";    // \n inserts a new line, same as pressing the ENTER key
    cout << "Human" << "\n";

    // VARIABLES are named storage locations for numbers, strings, and characters
    // STRING is anything enclosed in quotes
    string myName = "Steven"; // STRING variable "myName"
    cout << "Your name is: " << myName << "\n";

    // INTEGER is a whole number, with only a ZERO after the decimal
    int wholeNum = 5.0; // INTEGER variable "wholeNum"
    cout << "The number stored in wholeNum is: " << wholeNum << "\n";

    // FLOAT or DOUBLE is a number where the decimal part is NOT zero
    float myFloat = 5.75;
    cout << "The number stored in myFLoat is: " << myFloat << "\n";

    return 0; // This is where the program ends
}

/* === OUTPUT ===
Hello
Human
Your name is: Steven
The number stored in wholeNum is: 5
The number stored in myFLoat is: 5.75
*/


