/*
Program: p47SwapExample.cpp
Name: Steven Hunt
Description: Swap example : Using a temporary variable.

*/


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // Initialize Variables:
    int v1 = 5;
    int v2 = 10;
    int temp;

    cout << "Before swap: v1 = " << v1 << ", v2 = " << v2 << endl;

    temp = v1; // temp = 5
    v1 = v2;   // v1 = 10
    v2 = temp;  // v2 = 5

    cout << "After swap: v1 = " << v1 << ", v2 = " << v2 << endl;

    return 0;

}


/* === OUTPUT ===

Before swap: v1 = 5, v2 = 10
After swap: v1 = 10, v2 = 5

Process returned 0 (0x0)   execution time : 0.002 s
Press ENTER to continue.

*/
