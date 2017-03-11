/*

Program: p45passByRefereceExample.cpp
Name: Steven Hunt

*/

#include <iostream>
#include <iomanip>
using namespace std;

// Parameter "&referenceParameter" REFERS to the variable "localVar"
void input(int &referenceParameter);
void input2(int nonReferenceParameter);

int main ()

{

    int localVar = 10;
    int localVar2 = 100;
    cout << "local Variable = " << localVar << endl; // shows "localVar = 10"
    cout << "local Variable 2 = " << localVar2 << endl;

    input (localVar);   // Passing "localVar" by REFERENCE...
    // ... means that the value of "localVar" will change...
    // ... when we change "referenceParameter" inside the input( ) function

    input2 (localVar2);

    cout << "Local Variable changed by input ( &referenceParameter ) = " << localVar << endl; // Shows "localVar = 50"

    cout << "Local Variable 2, unchanged by input2 ( nonReferenceParameter ): " << localVar2 << endl; // Still shows 100,
    return 0;

}

// Changes the value of "localVar" in the main
void input (int &referenceParameter)
{

    cout << "Passing by reference: ";
    cin >> referenceParameter; // Suppose the user enters 50

}

void input2 (int nonReferenceParameter)
{

    cout << "Not passing by reference: ";
    cin >> nonReferenceParameter; // Suppose the user enters 50

}

/* === OUTPUT ===

locaVar = 10
Please enter a new value: 4
localVar = 4

Process returned 0 (0x0)   execution time : 3.780 s
Press ENTER to continue.

*/
