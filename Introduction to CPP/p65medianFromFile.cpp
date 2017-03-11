/*
Program: p65medianFromFile.cpp
Name: Steven Hunt
Description: 
- Reads data from file into an array. 
- Array is then counted. 
- The program also finds the median(avg) number. 
*/

#include <iostream>
#include <iomanip>

// Used to read / write files
#include <fstream>
#include <cstdlib>

using namespace std;

// Function Prototype:
void showArray(int array[], int size);

int main(){ // Start of main() function:

    // Initialization of variables and array:
    int arraySize = 7;
    int array[arraySize];
    int count = 0;
    int median;
    int i;

    ifstream File;                   // Used to read from file.
    File.open("p69integers.txt");    // Opens file data68.txt

    while(!File.eof()){              // Reads through end of file (eof) and places integers into array.
        File >> array[count];
        count++;

    // Determins what the median is from the numbers being pulled from file data68.txt
    if (count% 2 == 0)
        median = (array[count/2] + array[count/2-1]) /2;
    if (count% 2 != 0)
        median = array[count/2];
    }

    File.close();

    // Displays to user, the original numbers read from file, into an array of integers.
    cout << "Original Array: ";
    showArray(array, arraySize);

    // Displays the count of the integers, as well as the median number in the array.
    cout << string(2,'\n');
    cout << "The amount of integers in the array is: " << (count - 1) << endl;
    cout << "The median number in the array is: " << median << endl << endl;


    return 0;
}

void showArray(int array[], int size){ // Function to cleanly display the arrays.
    int i;
    cout << "Array: { ";
    for (i = 0; i < size - 1; i++)
        cout << array[i] << ", ";
    cout << array[i] << " }" << endl;
}

/* === OUTPUT ===

p69integers.txt file contains:

2
3
4
5
6
7
8

Compiled:

Original Array: { 2, 3, 4, 5, 6, 7, 8 }
The amount of integers in the array is: 7
The median number in the array is: 5

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

*/
