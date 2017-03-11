/*
Program: p58firstLastArray6.cpp
Name: Steven Hunt
Description:
- Given an array of integars, return true if 6 appears as either the first or last element in the array.
- They array will be size 1 or more.
- You don't know the array size, the program should work with an array of any size.
- To find array size: int size = sizeof(array) / sizeof(array[0])
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype:
bool firstLast6(int n[], int size);
void showArray(int n[], int size);

int main() // Start of main()
{
    int n[] = {1,0,4,5}; // Array n[]

    int arraySize =  sizeof(n) / sizeof( n[0] ); // Calculating the size of an array and initializing variable arraySize to it.

    // Output
    showArray(n, arraySize);
    cout << "The size of the array is: " << arraySize << endl;
    cout << "Does the array have a 6 as the first or last element: " << firstLast6(n, arraySize);
    cout << endl;

    return 0;

}

// Function Definition:
bool firstLast6(int n[], int size) // Function to determine if the first or last elememt in the array is 6.
{
    cout.setf(std::ios::boolalpha); // Allow bool to show 'true / false' and not '1/0'

    if (n[0] == 6 || n[ size - 1] == 6 ){
        return true;
        }
    else{
        return false;
        }
}

void showArray(int n[], int size) // Function to cleanly display the array.
{
    int i;
    cout << "Array = {";
    for (i = 0; i < size - 1; i++)
        cout << n[i] << ",";
    cout << n[i] << "}" << endl;
}

/* === OUTPUT ===

Sample Run 1:

Array = {0,4,3,1,6}
The size of the array is: 5
true

Process returned 0 (0x0)   execution time : 0.002 s
Press ENTER to continue.

Sample Run 2:

Array = {6,0,4,3,1,9,5}
The size of the array is: 7
true

Process returned 0 (0x0)   execution time : 0.004 s
Press ENTER to continue.

Sample Run 3:

Array = {1,0,4}
The size of the array is: 3
false

Process returned 0 (0x0)   execution time : 0.002 s
Press ENTER to continue.


*/
