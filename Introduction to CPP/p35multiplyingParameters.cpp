/*

Program: p35multiplyingParameters.cpp
Name: Steven Hunt
Description: Manipulating parameters in void function. 

*/

#include <iostream>
#include <iomanip>

using namespace std;

// FUNCTION PROTOTYPE:
void weightOfPeople(int numberPeople, double weightPerPerson); // Declared inside the ( )


int main ()

{

    weightOfPeople(5, 180.55);

    return 0;
}

// FUNCTION DEFINITION:

void weightOfPeople(int numberPeople, double weightPerPerson)
{
    // Different Local_Variable from the one in main()
    // Does not change Local_Variable in main()

    int people = numberPeople;
    double weight = weightPerPerson; // Declared insdie aFunction(int parameterVariable)

    cout << "The total weight of " << people << " people, \n";
    cout << "each person weighing " << weight << " lbs \nis ";
    cout << fixed << setprecision(1) << people * weight << " lbs \n";

}

/* == OUTPUT ==

The total weight of 5 people,
each person weighing 180.55 lbs
is 902.8 lbs

Process returned 0 (0x0)   execution time : 0.004 s
Press ENTER to continue.

*/

