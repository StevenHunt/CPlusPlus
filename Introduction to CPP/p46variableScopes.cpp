/*

Program: p46variableScopes.cpp
Name: Steven Hunt
Description:
- Example of Global and Local variables.
- "Scope" refers to "where a variable can be used

If variable is declared inside of a function:
- then the variable is "Local" and it belons only to that function
- such variable can be "seen" only by the function where it as declared.
- The "Scope" of a "Local" variable is its function.
- Parameter variables are Local and have a score of only their function.
( A local variable can only be used inside the function where it was declared )

If a variable is declared outside ( and before ) all other functions
- then the variable is "Global", and it belons to all functions
- changing a "Global" variable in one function, changes it for all functions
- The "Scope" of a "Global" variable are all functions
( A global variable can be used inside all functions )


*/

#include <iostream>

using namespace std;

int Global_Variable = 1; // Declared before and outside all other functions

// FUNCTION PROTOTYPE:
void aFunction(int parameterVariable); // Declared inside the ( )


int main ()

{
    int Local_Variable = 5; // Declared inside the main()
    cout << "=== Inside the main(): " << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // Shows 5
    cout << "Global_Variable = " << Global_Variable << endl; // Shows 1

    Global_Variable = 10;

    cout << "Global_Variable = " << Global_Variable << endl; // Now shows 10

    cout << endl;

    aFunction(50);

    cout << endl << endl << endl; // For display purposes to see

    cout << "=== Back inside the main(): " << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // Shows 5
    cout << "Global_Variable = " << Global_Variable << endl; // Now shows 100

    return 0;
}

// FUNCTION DEFINITION:

void aFunction(int parameterVariable)
{
    // Different Local_Variable from the one in main()
    // Does not change Local_Variable in main()

    int Local_Variable = parameterVariable; // Declared inside aFunction(int parameterVariable)
    cout << "==== Inside aFunction()" << endl;
    cout << "Local_Variable = " << Local_Variable << endl; // Shows 50
    cout << "Global_Variable = " << Global_Variable << endl; // Shows 10
    Global_Variable = 100; // Will change the 2nd Global_Variable in the main() since it comes after aFunction()
    cout << " === End Inside aFunction() === " << endl;
}

/* === OUTPUT ===

== Inside the main*(:
Local_Variable = 5
Global_Variable = 1
Global_Variable = 10


 ==== Inside aFunction()
Local_Variable = 50
Global_Variable = 10
 === End Inside aFunction() ===

 === BACK INSIDE THE main():
Local_Variable = 5
Global_Variable = 100

Process returned 0 (0x0)   execution time : 0.003 s
Press ENTER to continue.

*/
