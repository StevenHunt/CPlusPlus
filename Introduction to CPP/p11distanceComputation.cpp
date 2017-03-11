/*

Program: p11distanceComputation.cpp
Name: Steven Hunt
Description: Write a program that allows the user to enter a time in seconds, and then outputs distance
of how far (feet) an object will land. The program must make sure that the time is positive.

Distance = (acceleration * time^2) / 2

Assume acceleration = 32 ft/sec^2

*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main ()

{
    // Initializing variables
    float t;    // Time
    float d;    // Distance
    float ts;   // Time squared

    cout << "Please enter the time in seconds: ";
    cin >> t;

    ts = t * t; // TimeSquared = Time * Time
    d = ( 32 * ts ) / 2;  // Distance formula

    if (t <= 0){ // Checking to see if the user input a positive time
    cout << "Error! Time must be positive!";
    }
    else {
        cout << "Distance = 32 * ( " << t << "^2 ) / 2 = " << d << " feet" << endl;
    }
    return 0;
}

/* === OUTPUT ===

Please enter the time in seconds: 0
Error! Time must be positive!
Please enter the time in seconds: 5
Distance = 32 * ( 5^2 ) / 2 = 400 feet

*/
