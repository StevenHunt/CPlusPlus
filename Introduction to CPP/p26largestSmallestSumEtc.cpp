/*

Program: p26largestSmallestSumEtc.cpp
Name: Steven Hunt
Description:
- A program to find the largest, smallest, sum, and average of X numbers entered by the user.
- The program will prompt the user to enter X, and X numbers, pressing the Enter key after each number entered.
- Output will show the largest, smallest, sum, and average of all numbers

*/

#include <iostream>
using namespace std;

int main() {

    // Initializing variables
    int number, smallest, largest;
    float input, average, sum=0;


        cout << "How many numbers would you like to enter: "; // Prompts user on how many numbers to input
        cin >> input;

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

    average = sum / input;            // Calculating average ( Sum / entries )

    cout << endl; // Space


    // Output smallest, largest, sum, and average of the user inputted data.
    cout << "The smallest numbers is: " << smallest << endl;

    cout << "The largest numbers is: " << largest << endl;

    cout << "The sum of the numbers entered is: " << sum << endl;

    cout << "The average of the numbers entered is: " << average << endl;



}

/* === OUTPUT ===

How many numbers would you like to enter: 7

Please enter a number: 5
Please enter a number: 2
Please enter a number: 9
Please enter a number: 21
Please enter a number: 2
Please enter a number: 14
Please enter a number: 8

The smallest numbers is: 2
The largest numbers is: 21
The sum of the numbers entered is: 61
The average of the numbers is: 8.71429

*/
