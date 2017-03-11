/*
Program: p61intCountNum.cpp
Name: Steven Hunt
Description:
- Given an array of integers, return how many times the number 2 appears in the array.
- You don't know the array size (how many numbers are in the array). The program should work for an array of ANY size.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototype:
int countNum(int array[], int size, int num);
void showArray(int array[], int size);

int main(){

    // Array:
    int array[] = {4,3,1,2,2,1,3,4};

    // Initializing Variables:
    int size = sizeof(array) / sizeof(array[0]);
    int num = 2;

    showArray(array,size);

    cout << endl << num << " appears " << countNum(array, size, num) << " times in the array!" << endl;

    return 0;
}

// Function Definition:
int countNum(int array[], int size, int num){ // Function to count the number of twos in a particular array.
    int counter = 0;
    for (int i = 0; i < size; i++)
        if(array[i] == num)
            counter ++;

    return counter;
}

void showArray(int array[], int size) // Function to cleanly display the arrays.
{
    int i;
    cout << "Array: { ";
    for (i = 0; i < size - 1; i++)
        cout << array[i] << ", ";
    cout << array[i] << " }" << endl;
}


/* === OUTPUT ===

Sample 1:

Array: { 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 }

2 appears 2 times in the array!

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

Sample 2:

Array: { 2, 2, 2, 2, 3, 3, 3, 3 }

2 appears 4 times in the array!

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

Sample 3:

Array: { 4, 3, 1, 1, 3, 4 }

2 appears 0 times in the array!

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

*/
