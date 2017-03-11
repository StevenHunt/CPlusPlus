/*
Program: p54ArraysAndRandomNumbers.cpp
Name: Steven Hunt
Description:
1) Make an ARRAY1 of X random ELEMENTS.

Each array ELEMENT has a random value N.

X is a random number between 20 to 30. (This means you have betwen 20 to 30 array Elements).
Must use your randomNumber(min, max) function to return a value into X!
N is a random number between 100 to 200. (This means that each Element is a random number between 100 to 200).
Again, you must use your randomNumber(min, max) function to return value into each N!

2) Make an ARRAY2 which has all the ELEMENTS of ARRAY2, but in REVERSE and DOUBLED

*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

// FUNCTION PROTOTYPES:
int randomInt (int min, int max);

int main () // Start of main() function
{
    srand(time(0));
    int x = randomInt(20,30);
    int n = randomInt(100,200);
    int ARRAY1[n];
    int ARRAY2[n];


    cout << "Making " << x << " random numbers and storring them in ARRAY1: " << endl << endl;

    for (int j = 0; j < x; j++){
        n = randomInt(3, 7); // Makes a new random number every time between 3 and 7
            ARRAY1[j] = n;
            cout << ARRAY1[j] << " ";
        }

    cout << endl << endl;

    cout << "Reversed and doubled: " << endl << endl;
    int count = 0;
    for (int j = x-1; j >= 0 ; j--)
        {
           ARRAY2[count] = 2*ARRAY1[j]; // ARRAY2[first] = 2 * ARRAY1[last]
           cout << ARRAY2[count] << " ";
           count++;
        }
}

int randomInt( int min, int max) // Returns random number between max and min
{
    return rand() % (max - min) + min;
}

