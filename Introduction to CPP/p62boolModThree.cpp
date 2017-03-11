/*
Program: p62boolModThree.cpp
Name: Steven Hunt
Description:
- Given an array of ints, return true if the array contains either 3 even or 3 odd values next to each other.
- The program should work with an array of any size.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype:
bool modThree(int array[], int size);
void showArray(int array[], int size);


int main(){

    // Array:
    int array[] = { 1,3,6,9,22,44,66 };

    // Variables:
    int size = sizeof(array) / sizeof(array[0]);

    // Output:
    showArray(array,size);
    cout << endl << "True or False: " << modThree(array,size) << endl;

    return 0;

}

// Function Definition:
bool modThree(int array[], int size)
{

    cout.setf(std::ios::boolalpha);

    for (int i = 0; i < size-2; i++) // need size - 2 here b/c of the array[i+2] below
    {
        int even = array[i] % 2 + array[i + 1] % 2 + array[i + 2] % 2;
        int odd = !(array[i] % 2) + !(array[i + 1] % 2) + !(array[i + 2] % 2);
        if ( even == 3 or odd == 3)
            return true;
    }
    return false;
}

void showArray(int array[], int size){ // Function to cleanly display the arrays.
    int i;
    cout << "Array: { ";
    for (i = 0; i < size - 1; i++)
        cout << array[i] << ", ";
    cout << array[i] << " }" << endl;
}


/* === OUTPUT ===

Sample 1:

Array: { 2, 2, 1, 1, 2, 2 }

True or False: false

Sample 2:

Array: { 4, 6, 20, 1, 9, 2 }

True or False: true

Sample 3:

Array: { 1, 3, 6, 9, 22, 44, 66 }

True or False: true

*/
