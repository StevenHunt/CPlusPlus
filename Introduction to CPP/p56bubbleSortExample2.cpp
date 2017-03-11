/*
Program: p56bubbleSortExample2.cpp
Name: Steven Hunt
Description: A program that asks the user to input 6 numbers ( in any order ), the program will then move the 
largest number all the way to the right on the array.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype:
void showArray (int a[], int size);

int main()
{
    // Initializing local variables / array:
    int num [6];
    int numElements = 6;
    int temp;
    int large;

    // Prompt user for inputting numbers:
    for ( int v = 0; v < 6; v++ )
    {
        cout << "Enter array value [" << v << "]: ";
        cin >> num [v];
    }

    cout << endl; // line break

    // Output original array:
    cout << "The original output of the array before swapping values: ";
    showArray(num,numElements);

    // Finding largest number in array:
    large = num[1]; // Assigns element to the highest or lowest number
    for (int i = 1; i < 7; i++)
    {
        if(num[i] > large) // Compares the largest number with the current number
        {
            large = num[i];
        }
    }

    // Sorting numbers into assending order ( highest moving right ):
    for (int i = 5; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    // Output sorted array and largest number found:
    cout << "The output of the array after swapping values: ";
    showArray(num,numElements);
    cout << "The largest number is " << large << endl; // Prints out the largest number
}

// Function Definition:
void showArray(int a[], int size)
{
    int i;
    cout << " {";
    for (i = 0; i < size - 1; i++)
        cout << a[i] << ",";
    cout << a[i] << "}" << endl;
}

/* === OUTPUT ===

Enter array value [0]: 8
Enter array value [1]: 0
Enter array value [2]: 11
Enter array value [3]: 14
Enter array value [4]: 7
Enter array value [5]: 2

The original output of the array before swapping values:  {8,0,11,14,7,2}
The output of the array after swapping values:  {0,2,7,8,11,14}
The largest number is 14

Process returned 0 (0x0)   execution time : 7.248 s
Press ENTER to continue.

*/
