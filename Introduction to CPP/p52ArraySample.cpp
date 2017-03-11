/*
Program: p52ArraySample.cpp
Name: Steven Hunt
Description: Array Example
*/

#include <iostream>
#include <iomanip>

#include <stdlib.h>

using namespace std;

int main ()
{
    int i;
    int velocity[5]; // ARRAY DECLARATION
    float distance[] = {10, 23.4, 20, 40.86}; // ARRAY DECLARATION AND INITIALIZATION

    float time[4]; // ARRAY DECLARATION WILL HAVE 4 ELEMENTS
    time[0] = 100; // Element 1 has index 0 and value 100
    time[1] = 200; // Element 2 has index 1 and value 200
    time[2] = 300; // Element 3 has index 2 and value 300
    time[3] = 400; // Element 4 has index 3 and value 400

    for (int i = 0; i < 4; i++)
    {
        cout << "Time: " << time[i] << endl;
    }

    cout << endl;

// --------------------------------------------------------------------------------------

    // velocity[] array has 5 elements: velocity[0], velocity[1], velocity[2], velocity[3], velocity[4]

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter velocity #" << i+1 << " : ";
        cin >> velocity[i]; // ARRAY INPUT
    }

    cout << endl;
    cout << "The velocities you entered: " << endl;

    for (i = 0; i < 5; i++)
    {
        cout << velocity[i] ; // ARRAY OUTPUT
        if (i<4)
            cout << ", ";
    }

    cout << endl;

    return 0;

}


/* === OUTPUT ===

Time: 100
Time: 200
Time: 300
Time: 400

Enter velocity #1 : 1
Enter velocity #2 : 2
Enter velocity #3 : 3
Enter velocity #4 : 4
Enter velocity #5 : 5

The velocities you entered:
1, 2, 3, 4, 5

Process returned 0 (0x0)   execution time : 2.299 s
Press ENTER to continue.

*/
