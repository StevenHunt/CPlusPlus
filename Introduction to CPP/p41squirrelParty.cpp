/*
Program: p41squirrelParty.cpp
Name: Steven Hunt
Description:
- When squirrels get together for a party, they like to have acorns.
- A squirrel party is successful when the number of acorns is between 40 and 60, inclusive.
- Unless it is a weekend, in which case there is no upper limit on the number of acorns.

Write a function which Returns "Successful Party" if the party was a success, or "No Luck" otherwise.
*/

#include <iostream>
#include <iomanip>
using namespace std;

// PROTOTYPE FUNCTION:
string squirrelParty (int acorns, bool isWeekend);

int main ()
{
   cout << squirrelParty(30, false) << endl;
   string storeString;
   storeString = squirrelParty(50, false);
   cout << storeString << endl;
   cout << squirrelParty(70, true) << endl;
}

string squirrelParty (int acorns, bool isWeekend)
{
    string A = "No Luck";
    string B = "Successful Party";

    if (( acorns >= 40 ) && (isWeekend = true)){
        return B;
        }
    if (( acorns >= 40 && acorns <= 60) && (isWeekend = false)){
        return B;
    }
    else if( acorns < 40 ){
        return A;
    }
}

/* === OUTPUT ===

No Luck
Successful Party
Successful Party

*/
