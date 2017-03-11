/*

Program: p39showStars.cpp
Name: Steven Hunt
Description:
- Write the definition of a function with one parameter numStars.
- The program will ask the user how many stars they would like to show, and display the amount of stars.

*/

#include <iostream>
#include <iomanip>
using namespace std;

// FUNCTION PROTOTYPE:
void showStars(int numStars);

int main () // Start of main() function

{

    // Initializing local variable N
    int N;

    cout << "How many stars would you like to show: ";
    cin >> N;

    showStars(N); // Calling function showStars with parameter as user input N

}

// Function Definitions:
void showStars(int numStars)
{
   cout << endl;

   for (int k = 1; k <= numStars; k++) // Initializing k at 1, k increases until it reaches numStars parameter variable (user input)
    {
        for (int i = 1; i <= k; i++) // Initializing i at 1, i increases until it reaches value k
            cout << '*';
            cout << endl;
    }
}

/* === OUTPUT ===

How many stars would you like to show: 6

*
**
***
****
*****
******

Process returned 0 (0x0)   execution time : 2.856 s
Press ENTER to continue.

*/
