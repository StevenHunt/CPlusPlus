/*
Program: p55bubbleSortExample2.cpp
Name: Steven Hunt
Description: Bubble Sort Example
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype:
void showArray (int a[], int size);

int main()
{

    int array [] = {10,2,3,1}; // <-- ORIGINAL ARRAY
    int numElements = 4;
    int temp; // will be used to swap values

    cout << "Before Sort : ";
    showArray(array,numElements);

    // FOR LOOP1 moves all big numbers as far right as possible
    // the first time this loop happens we have {2,3,1,*10*} <-- *MOVED*
    // the second time this loop happens we have {2,1,*3*,10} <-- *MOVED*
    // the third time this loop happens we have{1,*2*,3,10} <-- *MOVED*
    for (int i = numElements - 1; i > 0; i--) // <-- LOOP1
    {
        // FOR LOOP2 compares every two numbers that are next to eachother
        // the first time the loop happens we have {*2,10*,3,1} <-- *SWAPPED*
        // the second time the loop happens we have {2,*3,10*,1} <-- *SWAPPED*
        // the third time the loop happens we have {2,3,*10,1*} <-- *SWAPPED*
        for(int j = 0; j < i; j++) // <-- LOOP2
        {
            // Check to see if the value on the left is bigger than the value on the right
            if (array[j] > array[j + 1])
            {
                // If bigger, swap the value on the left with the value on the right
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "After Sort  : ";
    showArray(array,numElements);
}

void showArray(int a[], int size)
{
    // Show array in format "array = {num, num2, num3}
    int i;
    cout << "Array = {";
    for (i = 0; i < size - 1; i++)
        cout << a[i] << ",";
    cout << a[i] << "}" << endl;
}


/* === OUTPUT ===

Before Sort : Array = {10,2,3,1}
After Sort  : Array = {1,2,3,10}

Process returned 0 (0x0)   execution time : 0.002 s
Press ENTER to continue.

*/
