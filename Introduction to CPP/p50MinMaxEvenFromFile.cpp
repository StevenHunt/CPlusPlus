/*
Program: p50MinMaxEvenFromFile.cpp
Name: Steven Hunt
Description:
- A program that will search a file filled with numbers, and show the largest number and the smallest number.
- The program will also count how many of the numbers are even (evenly divisble by 2).
- Using given data file data50.txt
*/

#include <iostream>
#include <iomanip>

// Needed to read / write to file
#include <fstream>
#include <cstdlib>

using namespace std;

int main ()
{
    // Initializing Local Variables:
    int minValue;
    int maxValue;
    int even;
    int number = 0;
    int evenCounter = 0;

	ifstream read; // Create variable read, used to read from a file

	read.open("data50.txt"); // Open 'data50.txt' file and associate variable read with it

	if (read.fail()) // Checks to see if the file exists, if it fails to open then it outputs "Input file opening failed" and exit the program
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}

    while (read >> number) // While loop, comparing all numbers in data50.txt file against eachother to find largest and smallest in the set
    {
        if (minValue == number)
            minValue = number;

        else if ( number < minValue )
            minValue = number;

        if (number == 0)
            maxValue = number;

        else if ( number > maxValue )
            maxValue = number;

        if (number % 2 == 0) // Checking to see if each number is divisible by 2, if so then the counter increases by 1
            evenCounter ++;
    }

    // Program Output:
    cout << "Searching data50.txt for largest, smallest, and even numbers: " << endl << endl;
    cout << "The smallest number is: " << minValue << endl;
    cout << "The largest number is: " << maxValue << endl;
    cout << "The amount of even numbers is: " << evenCounter << endl;

	read.close();
}

/* === OUTPUT ===

Searching data50.txt for largest, smallest, and even numbers:

The smallest number is: 2
The largest number is: 1104
The amount of even numbers is: 10

Process returned 0 (0x0)   execution time : 0.003 s
Press ENTER to continue.

*/
