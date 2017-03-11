/*

Program: p37voidNoReturnsTwoParameters.cpp
Name: Steven Hunt
Description:
- The function checks to see if num1 is evenly divisible by num2.
- The function shows a smessage num1 is "Divisible" or "Not Divisble" by num2.

*/

#include <iostream>
#include <iomanip>
#include <math.h> // for fmod()

using namespace std;

// FUNCTION PROTOTYPES:
void isDivisible(float num1,float num2);

int main ()

{
    cout << "Function call 1: " << endl;
    isDivisible(4,2);
    cout << endl;
    cout << "Function call 2: " << endl;
    isDivisible(4,3);
    cout << endl;
    cout << endl;
    cout << "Function call 3: " << endl;
    isDivisible(10,5);
    cout << endl;
    cout << "Function call 4: " << endl;
    isDivisible(25,9);
    cout << endl;

}

void isDivisible(float num1, float num2)
{

    if ( int(num1) % int(num2) == 0)   // Used int() to cast
        cout << "The number " << num1 << " is divisible by " << num2 << "." << endl;
    else
        cout << "The number " << num1 << " is not divisible by " << num2 << ".";

}

/* === OUTPUT ===

Function call 1:
The number 4 is divisible by 2.

Function call 2:
The number 4 is not divisible by 3.

Function call 3:
The number 10 is divisible by 5.

Function call 4:
The number 25 is not divisible by 9.

Process returned 0 (0x0)   execution time : 0.003 s
Press ENTER to continue.

*/
