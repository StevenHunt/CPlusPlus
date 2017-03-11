/*

Program: p33randomNumberCalculations.cpp
Name: Steven Hunt
Description:
- A program that generates X random integers Num
- Num is a random number between 20 to 50
- X is random number betwen 10 to 15
- It will then calculate and show the smallest, largest, sum, and average of those generated numbers

*/

#include <iostream>
#include <iomanip>
#include <cstdlib> // functions to generate a random number
#include <ctime> // allow us to use a time variable, as well as make sure we don't get the same variable

using namespace std;

int main ()

{

    // Generates Random Numbers
    srand(time(0));
    int x = rand() %(16 - 10) + 10;
    int Num; // = rand() %(51 - 20) + 20;


    // Calculations
    int smallest = 0;
    int largest = 0;
    int sum = 0;
    float average;                    // = sum / x;

    cout << "Generating " << x << " random numbers ( " << x << " is between 10 to 15)..." << endl;
    cout << "... Now printing " << x << " random numbers between 20 to 50: " << setw(3) << endl ;

    for ( int i=0; i < x; i++)
    {

        Num = rand() %(51 - 20) + 20;
        cout << Num << " " ;
        sum = sum + Num;

        if (i == 0)                  // first random number Num is generated when i == 0
        {
            smallest = Num;
            largest = Num;
        }

        else                          // else is true for all other random numbers Num after the first number (i==0)
        {

            if ( Num < smallest)      // If next number is smaller than last, it becomes the new smallest
                smallest = Num;
            if ( Num > largest)
                largest = Num;        // Largest = first number
        }

    }
    average = sum / x;
    cout << endl << " The Sum is: " << sum;
    cout << endl << " The Average is: " << sum / x;
    cout << endl << " The Largest is: " << largest;
    cout << endl << " The Smallest is: " << smallest;
    return 0;
}

/* === OUTPUT ===

Generating 10 random numbers ( 10 is between 10 to 15)...
... Now printing 10 random numbers between 20 to 50:
 25 29 39 24 42 37 29 26 41 25
 The Sum is: 317
 The Average is: 31
 The Largest is: 42
 The Smallest is: 24

 */
