/*

Program: p24averageLargestSmallest.cpp
Name: Steven Hunt
Description:
- A program to input a set of numbers, terminated by -999.
- Finds the average of all numbers, the largest number, and the smallest number.

*/

#include <iostream>
using namespace std;

int main() {

    // Initializing variables
    int number, smallest, largest;
    float input, average, sum=0;

    while (true) // a loop that will go on forever
    {
        cout << "How many numbers would you like to enter: "; // Prompts user on how many numbers to input
        cin >> input;

        if ( input == -999 )
            break;
        else if ( input != -999 )
            continue;

    cout << endl;


    for (int i = 0; i < input; i++)   // Loops until users entry is complete
    {
        cout << "Please enter a number: ";
        cin >> number;
        if (i == 0)                  // Smallest = first number
            smallest = number;
        else if ( number < smallest) // If next number is smaller than last, it becomes the new smallest.
            smallest = number;
        if (i == 0)
            largest = number;        // Largest = first number
        else if ( number > largest)
            largest = number;        // If next number is larger than last, it becomes the new largest

        sum += number;               // Calculating sum ( Ititialized at 0, then increase by users inputs )
    }

    average = sum / input;            // Calculating average ( Sum / entries

    cout << endl; // Space

    cout << "The smallest numbers is: " << smallest << endl;

    cout << "The largest numbers is: " << largest << endl;

    cout << "The average of the numbers is: " << average << endl;
    }
    }

/* === OUTPUT ===

Test 1:

How many numbers would you like to enter: 3

Please enter a number: 9
Please enter a number: 4
Please enter a number: 2

The smallest numbers is: 2
The largest numbers is: 9
The average of the numbers is: 5

------------

Test 2:

How many numbers would you like to enter: 5

Please enter a number: 5
Please enter a number: 1
Please enter a number: 7
Please enter a number: 2
Please enter a number: 5

The smallest numbers is: 1
The largest numbers is: 7
The average of the numbers is:

*/
