/*

Program: p43functionPositiveOrNegative.cpp
Name: Steven Hunt
Description:
- Given 2 int values, return true if one is negative and one is positive.
- Except if the parameter "negative" is true, then return true only if both are negative.

posNeg(1, -1, false)    → Return true
posNeg(-1, 1, false)    → Return true
posNeg(-4, -5, true)    → Return true
posNeg(-2, -6, false)   → Return false

*/

#include <iostream>
#include <iomanip>
using namespace std;

// FUNCTION PROTOTYPE:
bool posNeg(int val1, int val2, bool negative);

int main ()
{
    cout << posNeg(1, -1, false) << endl;       // return true
    cout << posNeg(-1, 1, false) << endl;       // return true
    cout << posNeg(-4, -5, true) << endl;       // return true
    cout << posNeg(-2, -6, false) << endl;      // return false
}

bool posNeg(int val1, int val2, bool negative)
{
    bool t = true;
    bool f = false;
    cout << boolalpha;

    if ((val1 > 0 && val2 < 0) && (negative == false )){
        return t;
    }
    if ((val1 < 0 && val2 > 0) && (negative == false )){
        return t;
    }
    if ((val1 < 0 && val2 < 0) && (negative == true )){
        return t;
    }
    else {
        return f;
    }
}

/* === OUTPUT ===

true
true
true
false

*/
