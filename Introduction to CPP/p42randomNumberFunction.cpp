/*

Program: p42randomNumberFunction.cpp
Name: Steven Hunt
Description:
- Write a function which returns a random number based on two parameters MIN, MAX typed in by the user.

*/

#include <iostream>
#include <iomanip>
#include <time.h>    // need this for time(NULL)
#include <stdlib.h>  // need this srand() and rand()
using namespace std;

// FUNCTION PROTOTYPES:
int randomInt (int min, int max);

int main () // Start of main() function
{
    // Initializing Local Variables:
    int min;
    int max;

    cout << "What is the Min value your want for you random numbers: ";
    cin >> min;

    cout << "What is the Max value you want for your random numbers: ";
    cin >> max;

    cout << "A random number between " << min << " and " << max << " is : " << randomInt(min, max) << endl;
}

int randomInt( int min, int max) // Returns random number between max and min
{
    return rand() % (max - min) + min;
}

/* === OUTPUT ===

What is the Min value you want for your random numbers: 1
What is the Max value you want for your random numbers: 10
A random number between 1 and 10 is : 10

What is the Min value your want for you random numbers: 2
What is the Max value you want for your random numbers: 8
A random number between 2 and 8 is : 7

*/
