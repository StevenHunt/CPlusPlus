/*

Program: p34typesOfFunctions.cpp
Name: Steven Hunt
Description: Types of functions

*/

#include <iostream>
using namespace std;

// FUNCTION PROTOTYPES:
void showMessage();
void aParameter(int parameter_variables);
int returnValue(int num1, int num2);
// == END OF FUNCTION PROTOTYPES


int main () // THE main() FUNCTION STARTS THE PROGRAM

{
    // FUNCTION "CALL", "CALL" EXECUTES THE DEFINITION
    showMessage();

    aParameter(10); // 10 is the 'ARGUMENT'
    // calling aParameter(10), makes the parameter_variable = 10

    int add = returnValue(10,15);
    cout << "add = " << add << endl;
    return 0;
}

// A FUNCTION THAT 'SHOWS' SOMETHING (cout <<)
// FUNCTION DEFINITION:

void showMessage()
{
    cout << "Hello World!!" << endl;
}

// A FUNCTION THAT 'SHOWS' SOMETHING (cout <<)
// FUNCTION DEFINITION:

void aParameter(int parameter_variable)
{
    cout << "parameter_variable = " << parameter_variable << endl;
}

// A FUNCTION THAT "RETURNS" SOMETHING "return"
// FUNCTION DEFINITION:

int returnValue(int num1, int num2)
{
    int sum;
    sum = num1 + num2;
    return sum;
}

/* === OUTPUT ===

Hello World!!
parameter_variable = 10
add = 25

Process returned 0 (0x0)   execution time : 0.004 s
Press ENTER to continue.

*/
