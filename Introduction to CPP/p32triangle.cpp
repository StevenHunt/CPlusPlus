/*

Program: p32triangle.cpp
Name: Steven Hunt
Description:
- A program which asks the user to type in the length of three sides of a triangle: a, b, and c.
- Then let the user know if the shape they enter is either a right or equilateral triangle, based on these:

- RIGHT:

a^2 is equal to b^2 + c^2
b^2 is equal to a^2 + c^2
c^2 is equal to a^2 + b^2

- EQUILATERAL:

Both a is equal to b, and b is equal to c

- Then asks the user if they would like to 'replay'

*/

#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>

using namespace std;

int main () // Start main program

{

// Initialize Variables
int a,b,c; // User inputs
bool done = false;
char playAgain;

cout << "Enter 3 numbers which represent the 3 sides of a triangle: " << endl; // Program Rules

do // Begin loop
{
cout << endl;

cout << "Please enter side A: "; // Prompt user to input side A
cin >> a;

cout << "Please enter side B: "; // Prompt user to input side B
cin >> b;

cout << "Please etner side C: "; // Prompt user to input side C
cin >> c;

cout << endl;

    if ( a == b && b == c) // If statement for defining equilateral triangle.
        {
            cout << "You have an Equilateral Triangle!" << endl << endl;
            cout << "Would you like to play again, Yes = (y) or No = (n): ";
            cin >> playAgain;
                if ( playAgain == 'n')
                    {
                        done = true;
                    }
        }
    else if (pow(a,2) == pow(b,2) + pow(c,2) || pow(b,2) == pow(a,2) + pow(c,2) || pow(c,2) == pow(a,2) + pow(b,2)) // Else if statement for defining right triangle
        {
            cout << "You have a Right Triangle!" << endl << endl;
            cout << "Would you like to play again, Yes = (y) or No = (n): ";
            cin >> playAgain;
                if ( playAgain == 'n')
                    {
                        done = true;
                    }
        }
    else // If inputs meet neither statements above, it returns default else statement
        {
            cout << "You have neither a Right Triangle or Equilateral Triangle!" << endl << endl;
            cout << "Would you like to play again, Yes = (y) or No = (n): ";
            cin >> playAgain;
                if ( playAgain == 'n')
                    {
                        done = true;
                    }
        }
}
while (!done);

    cin.get();

    return 0;
}

/* === OUTPUT ===

Enter 3 numbers which represent the 3 sides of a triangle:

Please enter side A: 5
Please enter side B: 4
Please etner side C: 3

You have a Right Triangle!

Would you like to play again, Yes = (y) or No = (n): y

Please enter side A: 1
Please enter side B: 1
Please etner side C: 1

You have an Equilateral Triangle!

Would you like to play again, Yes = (y) or No = (n): y

Please enter side A: 3
Please enter side B: 7
Please etner side C: 1

You have neither a Right Triangle or Equilateral Triangle!

Would you like to play again, Yes = (y) or No = (n): n

Process returned 0 (0x0)   execution time : 15.854 s
Press ENTER to continue.

*/
