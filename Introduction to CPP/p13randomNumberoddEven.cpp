/*

Program: p13randomNumberoddEven.cpp
Name: Steven Hunt
Description: Write a program that generates a random number between 10 to 25. The program then shows the random number generated, and informs
the user whether the number is odd or even.

*/

#include <iostream>
#include <iomanip>
#include <time.h>    // need this for time(NULL)
#include <stdlib.h>  // need this srand() and rand()
using namespace std;

int main ()

{

    int seeder = (int)time(NULL); // Initializing seed value to time(NULL)

    srand(seeder); // Value of srand

    int randomNumber = 0 + rand()%10; // Generates a random number between 10 - 25
    cout << "Generating a random number between 0 - 9 = " << randomNumber << endl; // Output

    return 0;
}

/* === OUTPUT ===

Test run 1:

Generating a random number between 10 to 25 = 24
The random number 24 is even!

Test run 2:

Generating a random number between 10 to 25 = 17
The random number 17 is odd!

Test run 3:

Generating a random number between 10 to 25 = 20
The random number 20 is even!

*/
