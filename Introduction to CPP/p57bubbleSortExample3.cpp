/*
Program: p57bubbleSortExample3.cpp
Name: Steven Hunt
Description:
- Ask the user to enter any 7 numbers into an array of float type, in any order.
- Sort the array using Bubble Sort.
- Show the median(4th number in this case)
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype:
void showArray (float a[], int size);

int main()
{
    // Initializing local variables / array:
    float num [7];
    int numElements = 7;
    int temp;

    // Prompts user for inputting numbers:
    for ( int v = 0; v < 7; v++ )
    {
        cout << "Enter value for array index [" << v << "]: ";
        cin >> num [v];
    }

    cout << endl; // line break

    // Output original array:
    cout << "The orginal array: ";
    showArray(num,numElements);

    // Sorting numbers into assending order ( highest moving right ):
    for (int i = 6; i > 0; i--)
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

    // Output sorted array and the median number
    cout << "The sorted array: : ";
    showArray(num,numElements);
    cout << "The median number is: " << num[3] << endl; // Prints out the median number
}

// Function Definition:
void showArray(float a[], int size)
{
    int i;
    cout << " {";
    for (i = 0; i < size - 1; i++)
        cout << a[i] << ",";
    cout << a[i] << "}" << endl;
}

/* === OUTPUT ===

Enter value for array index [0]: 9
Enter value for array index [1]: 0
Enter value for array index [2]: 2
Enter value for array index [3]: 6
Enter value for array index [4]: 3
Enter value for array index [5]: 7
Enter value for array index [6]: 1

The orginal array:  {9,0,2,6,3,7,1}
The sorted array: :  {0,1,2,3,6,7,9}
The median number is: 3

Process returned 0 (0x0)   execution time : 11.227 s
Press ENTER to continue.

*/

