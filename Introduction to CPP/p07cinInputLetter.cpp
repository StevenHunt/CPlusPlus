/*
    Program name: p7printaCUsingInputLetters.cpp
    Student name: Steven Hunt
    Description: Write a program that asks for a character INPUT from the keyboard and then
    OUTPUTS a large block letter "C" composed of that character.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{

    char X; // Defining character variable as X
    cout << "Please enter a letter: "; // Prompting user to choose a random letter
    cin >> X; // Assinging chosen letter as variable

cout << " ************************************************ \n";
cout << "                                                  \n";
cout << "             " << X << " " << X << " " << X << "  \n"; // Prints variable wherever an 'X' is shown.
cout << "           " << X << "                            \n";
cout << "          " << X << "                             \n";
cout << "         " << X << "                              \n";
cout << "         " << X << "                              \n";
cout << "         " << X << "                              \n";
cout << "          " << X << "                             \n";
cout << "           " << X << "       " << X << "          \n";
cout << "             " << X << " " << X << " " << X << "  \n";
cout << "                                                  \n";
cout << " ************************************************ \n";
cout << "    Computer Science is Cool Stuff!!              \n";

    return 0;

}

/* === OUTPUT ===

Please enter a letter: D
 ************************************************

             D D D
           D
          D
         D
         D
         D
          D
           D       D
             D D D

 ************************************************
    Computer Science is Cool Stuff!!

*/
