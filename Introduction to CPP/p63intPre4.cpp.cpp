/*
Program: p63intPre4.cpp.cpp
Name: Steven Hunt
Description:
- Given an array of ints, return the sum of all elements from the array that comes before the first element that equals number 4 in the array.
- The array will contain at least one 4.
- The program should work for an array of any size.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype:
int pre4(int array[], int size);
void showArray(int array[], int size);

int main(){ // Start of main() function:

    int array[] =  {4,1,1,1,1};
    int size = sizeof(array) / sizeof(array[0]);

    showArray(array,size);
    cout << string(1,'\n') <<  "The sum of the elements that come before the first 4 in the array is: " <<  pre4(array,size) << endl;
}

// Function Definition:
int pre4(int array[], int size){
    double sum = 0;

   	for (int i = 0; i < size; i++){
        if(array[i] == 4){
          for (int count = 0; count < i; count ++)
            sum += array[count];
                return sum;
        }
    }
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

Array: { 6, 8, 4 }

The sum of the elements that come before the first 4 in the array is: 14

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

Sample 2:

Array: { 6, 8, 7, 7, 7, 4 }

The sum of the elements that come before the first 4 in the array is: 35

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

Sample 3:

Array: { 4, 1, 1, 1, 1 }

The sum of the elements that come before the first 4 in the array is: 0

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

*/
