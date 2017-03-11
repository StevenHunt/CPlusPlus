/*

Program: p38twoParametersReturnsFloat.cpp
Name: Steven Hunt
Description:
- Write a definition for a function that RETURNS a float and has TWO float PARAMETERS.
- The function returns larger of its two parameters.

*/

#include <iostream>
#include <iomanip>
using namespace std;

// FUNCTION PROTOTYPE:
float larger(float valA, float valB);

int main ()

{
    // Initializing Local Variables:
    float num1 =1;
    float num2 =2;
    float temp;

    cout << "The larger of " << num1 << " and " << num2 << " is: " << larger(num1,num2) << endl << endl;

    temp = larger(num1, num2); // float temp = larger(1,2)

    cout << "The larger of " << num2 << " and " << num1 << " is: " << temp << endl;

}

// FUNCTION DEFINITION:ŝ
float larger(float valA, float valB)
{
float temp;
temp = 2;

return temp;
}

/* === OUTPUT ===

The larger of the two numbers 1 and 2 is: 2
The larger of the two numbers 2 and 1 is: 2

*/
