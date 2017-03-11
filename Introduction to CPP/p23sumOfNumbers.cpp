/*

Program: p23sumOfNumbers.cpp
Name: Steven Hunt
Description:

- A program to find the sum of every integer number from 150 to 250 inclusive.
- Also show the total count of numbers AND the average of the numbers.

*/

#include <iostream>
using namespace std;

int main() {
    
    // Initialize Variables
    int sum = 0, counter = 0, average = 0;

    for (int i = 150; i <= 250; i ++, counter ++) // Starting i at 150 and increasing to 250; counting along as well
    {
        sum += i; // Creating the sum

    }

    average = sum / counter; // Creating the average ( total sum / total count )


    // OUTPUTS
    cout << "The Sum is: " << sum << endl;
    cout << "The Average is: " << average <<   endl;
    cout << "The Count is : " << counter << endl;

    return 0;

}

/* === OUTPUT ===

The Sum is: 20200
The Average is: 200
The Count is : 101

*/

