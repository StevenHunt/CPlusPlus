/*

Program: p18practiceWithASCII.cpp
Name: Steven Hunt
Description: A program that will inform the user whether they inputed a letter (uppercase or lowercase), 
a number, or another character.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    char letterOrNumber; // Users input variable

    cout << "Please enter a number, letter, or something else: ";
    cin >> letterOrNumber; // Assigned to users input

    cout << endl; // Space

    if ((letterOrNumber >= 33) && (letterOrNumber <= 47)) { // ASCII #33 - #47 = Characters
        cout << "What you entered: Something else! ";
    }

    if ((letterOrNumber >= 48) && (letterOrNumber <= 57)) { // ASCII #48 - #57 = Numbers
        cout << "What you entered: A Number!";
    }

    if ((letterOrNumber >= 58) && (letterOrNumber <= 64)) { // ASCII #58 - #64 = Characters
        cout << "What you entered: Something else! ";
    }

    if ((letterOrNumber >= 65) && (letterOrNumber <= 90)) { // ASCII #65 - #90 = Uppercase letters
        cout << "What you entered: An uppercase letter! ";
    }

    if ((letterOrNumber >= 91) && (letterOrNumber <= 96)) { // ASCII #91 - #96 = Characters
        cout << "What you entered: Something else! ";
    }

    if ((letterOrNumber >= 97) && (letterOrNumber <= 122)) { // ASCII #97 - #122 = Lowercase letters
        cout << "What you entered: A lowercase letter!";
    }

    if ((letterOrNumber >= 123) && (letterOrNumber <= 126)) { // ASCII #123 - #126 = Characters
        cout << "What you entered: Something else! ";
    }


    return 0;

}

/* === OUTPUT ===

Please enter a number, letter, or something else: T

What you entered: An uppercase letter!

OR

Please enter a number, letter, or something else: &

What you entered: Something else!

OR

Please enter a number, letter, or something else: j

What you entered: A lowercase letter!

OR

Please enter a number, letter, or something else: 3

What you entered: A Number!


*/
