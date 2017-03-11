/*
Program: p44showCrosses.cpp
Name: Steven Hunt
Description:
- Write a VOID function with a NAME "crosses" and a PARAMETER "numCrosses".
- The function outputs as many rows as there are crosses, each row having one less cross than the previous.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// FUNCTION PROTOTYPE:
void crosses(int numCrosses);

int main () // Start of main() function

{
    // Initialize Local Variable:
    int n;

    cout << "How many crosses would you like to show: "; // Prompt user for input
    cin >> n; // Assign variable n to user input

    crosses(n); // Call function crosses with variable n as the parameter numCrosses
}

// FUNCTION DEFINITION:
void crosses(int numCrosses)
{
   cout << endl;

   for (int k = numCrosses; k >= 1; k--) // Initial variable k = parameter variable (user input), and when k is great than 1, decrease k by 1
    {
        for (int i = 1; i <= k; i++) // Performs the steping process: decreases each row by 1 until last row is 1
            cout << '+';
            cout << endl;
    }
}

/* === OUTPUT ===

How many crosses would you like to show: 6

++++++
+++++
++++
+++
++
+

Process returned 0 (0x0)   execution time : 1.570 s
Press ENTER to continue.

*/
