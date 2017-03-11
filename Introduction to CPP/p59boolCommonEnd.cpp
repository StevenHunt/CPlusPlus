/*
Program: p59boolCommonEnd.cpp
Name: Steven Hunt
Description:
- Given 2 arrays of integers, array1[] and array2[], return true if they have the same first or last element, else return false.
- Both arrays will be of length 1 or more.
- Array size = sizeof(array) / sizeof(array[0])
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes:
bool commonEnd(int array1[], int array2[], int size1, int size2);
void showArray(int n[], int size);

int main() // Start of main()
{
    // Array 1 and 2
    int array1[] = {7,5,6,6,9,0};
    int array2[] = {1,2,1,0};

    // Calculating the size of both arrays:
    int arraySize1 =  sizeof(array1) / sizeof(array1[0]);
    int arraySize2 =  sizeof(array2) / sizeof(array2[0]);

    // Output
    cout << "Array 1 = "; showArray(array1, arraySize1);
    cout << "Array 2 = "; showArray(array2, arraySize2); cout << endl;
    cout << "Array 1 & 2 have the first or last element in common: " <<  commonEnd(array1, array2, arraySize1, arraySize2) << endl;

    return 0;

} // End of main()

// Function Definitions:
bool commonEnd(int array1[], int array2[], int size1, int size2) // Function to determine if array 1 & 2 have first or last elements in common.
{
    cout.setf(std::ios::boolalpha); // Allow bool to show 'true/false' and not '1/0'

    for (int i = 0; i < 7; i++){
        for (int j = 0; j < 7; j++){
            if (array1[0] == array2[0] || array1[size1 - 1] == array2[size2 -1]){
                return true;
            }
            else{
                return false;
            }
        }
    }
}

void showArray(int n[], int size) // Function to cleanly display the arrays.
{
    int i;
    cout << "{ ";
    for (i = 0; i < size - 1; i++)
        cout << n[i] << ", ";
    cout << n[i] << " }" << endl;
}


/* === OUTPUT ===

Sample Run 1:

Array 1 = { 1, 0, 4, 5, 6 }
Array 2 = { 0, 2, 6 }

Array 1 & 2 have the first or last element in common: true

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

Sample Run 2:

Array 1 = { 3, 5, 6 }
Array 2 = { 0, 2, 1 }

Array 1 & 2 have the first or last element in common: false

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

Sample Run 3:

Array 1 = { 7, 5, 6, 0 }
Array 2 = { 7, 2, 1, 0, 11, 3 }

Array 1 & 2 have the first or last element in common: true

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.


*/
