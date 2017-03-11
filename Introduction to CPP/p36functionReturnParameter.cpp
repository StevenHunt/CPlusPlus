/*

Program: p36functionReturnParameter.cpp
Name: Steven Hunt
Description: Write a function that returns a random value between the two parameters: min, max

*/

#include <iostream>
#include <time.h>       // need this for time(NULL)
#include <stdlib.h>     // need this for srand() and rand()
#include <iomanip>

using namespace std;

// FUNCTION PROTOTYPE:
int randomNum(int min, int max);


int main () // Start of main() functions

{
    int i;

    cout << "Generating a random number between -10 to 10: ";
    cout << randomNum(-10,10) << endl;
    cout << "Generating a random number between 20 to 25: ";
    cout << randomNum(20,25) << endl;
}

// FUNCTION DEFINITION:
int randomNum(int min, int max)
{
    srand(time(0));

    // GENERATE A RANDOM NUMBER BETWEEN Max - Min.
    int i = rand() % (max - min) + min;

    return i;
}


/* === OUTPUT ===

Generating a random number between -10 to 10: 7
Generating a random number between 20 to 25: 22

Process returned 0 (0x0)   execution time : 0.003 s
Press ENTER to continue.

*/
