/*
Program: p53ArrayInputOutput.cpp
Name: Steven Hunt
Description:
- A program which asks the user how many numbers they would like to enter.
- The user enters those numbers into an array, and the program shows them.

** I had to add c++11 support to codeblocks IDE in order for this code to compile. **

*/

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <new>
using namespace std;

int main ()
{

    // Initializing Variables
    int i;
    int n;

    int * p; // p is a pointer to an int

    cout << "How many numbers would you like to enter: ";
    cin >> i;

    p = new (nothrow) int[i]; // Wont throw an exception on failure, but return null pointer instead

    if (p == nullptr)
        cout << "Error!";
    else
    {
        for (n = 0; n < i; n++)
        {
            cout << "Enter number: ";
            cin >> p[n];
        }

        cout << endl;

        cout << "You have entered: ";
        for (n = 0; n < i; n++)
            cout << p[n] << ", ";
        delete[] p;
    }
      return 0;
}

/* === OUTPUT ===

How many numbers would you like to enter: 5
Enter number: 10
Enter number: 11
Enter number: 6
Enter number: 4
Enter number: 0

You have entered: 10, 11, 6, 4, 0,
Process returned 0 (0x0)   execution time : 11.638 s
Press ENTER to continue.

*/
