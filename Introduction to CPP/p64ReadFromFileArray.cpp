/*
Program: p64ReadFromFileArray.cpp
Name: Steven Hunt
Description: Read the numbers from file data68.txt into an array, then sort (largest to smallest) the array.
SHOW THE ASSORTED ARRAY TO USER!
*/

#include <iostream>
#include <iomanip>

// Used to read / write files
#include <fstream>
#include <cstdlib>

using namespace std;

// Function Prototype:
void Sort (int array[], int size);
void printArray (int array[], int size);

int main(){ // Start of main() function:

    // Initialization of variables and array:
    int arraySize = 16;
    int array[arraySize];
    int n = 0;
    int num;



    ifstream File;              // Used to read from file.
    File.open("data68.txt");    // Opens file data68.txt
    while(!File.eof()){         // Reads through end of file (eof) and places integers into array.
        File >> array[n];
        n++;
    }

    File.close();

    // Displays to user, the original numbers read from file, into an array of integers.
    cout << "Original Array: ";
    for(int i = 0; i < arraySize ; i++){
        cout << array[i] << " ";
    }

    // Calls functions that sort and display the sorted array:
    Sort (array, arraySize);
    cout << string(2,'\n') << "Sorted Array: ";
    printArray (array, arraySize);

    return 0;
}

// Function Definitions:

// Sorts array:
void Sort (int array[], int size){
    for(int i = 0; i < (size - 1); i++){

        int max = i;

        for(int j = (i + 1); j < size; j++){
            if(array[j] > array[max]) max = j;
        }
        if(max != i)
            swap(array[i], array[max]);
    }
}

// Displays Array:
void printArray (int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << ' ';
    }
    cout << '\n';
}

/* === OUTPUT ===

Original Array: 23 56 78 90 34 123 456 789 986 543 1104 2 4 7 543 124

Sorted Array: 1104 986 789 543 543 456 124 123 90 78 56 34 23 7 4 2

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

*/
