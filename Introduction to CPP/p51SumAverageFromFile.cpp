/*
Program: p51SumAverageFromFile.cpp
Name: Steven Hunt
Description:
- A program that takes its input from a file of numbers of type double.
- The program shows the sum and average of all the numbers found in the file 'data51.txt'

Total: 4481.2178
Numbers: 16
Average: 4481.2178 / 16 = 280.0761125
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
    double number;
    double average = 0;
    double sum = 0;
    int counter = 0;

	ifstream read; // Create variable read, used to read from a file

	read.open("data51.txt"); // Open 'data51.txt' file and associate variable read with it

	if (read.fail()) // Checks to see if the file exists, if it fails to open then it outputs "Input file opening failed" and exit the program
	{
		cout << "Input file opening failed.\n";
		exit(1);
	}

   while (read >> number )
    {
        sum += number;
        counter++;
        average = sum / counter; // Creating the average ( total sum / total count )
    }

    // Program Output:
    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << average << endl;
    cout << "The amount of numbers are : " << counter << endl;

	read.close();
}

/* === OUTPUT ===

The sum is: 4481.22
The average is: 280.076
The amount of numbers are : 16

Process returned 0 (0x0)   execution time : 0.003 s
Press ENTER to continue.

*/
