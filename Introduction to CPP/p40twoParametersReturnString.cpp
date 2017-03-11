/*
Program: p40twoParametersReturnString.cpp
Name: Steven Hunt
Description:
- Given two integer values, A and B, write a function that returns a string "Great" if either value is 6.
- The function also returns "Great" if the sum or the difference of the values is 6.
- The function retruns "Not Great" otherwise.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// FUNCTION PROTOTYPES:
string great (int A, int B);

int main () // Start of the main function
{
    cout << great(6, 4) << endl;    // great() returns its string to cout <<
    string storeString;

    storeString = great(3,2);      // great() returns its string to the variable storeString

    cout << storeString << endl;
    cout << great(1, 5) << endl;

    return 0;
}

// FUNCTION DEFINITIONS:

string great(int A, int B)
{
    string C = " Great";
    string D = " Not Great";

    if (A == 6 || B == 6){
        return C;
    }
    else if ( A + B == 6 ){
        return C;
    }
    else if ( A - B ==  6 || B - A == 6 ){
        return C;
    }
    else {
        return D ;
    }
}

/* === OUTPUT ===

Great
Not great
Great

*/
