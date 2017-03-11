/*

Program: p9QuarterDimeNickel.cpp
Name: Steven Hunt
Description: Write a program that allows the user to enter a number of quarters, dimes, and nickels and then outputs
the monetary value of the coins in cents.

*/

# include <iostream>
# include <iomanip>
using namespace std;

int main ()
{

    int Q, D, N, T; // Declaring Variables

    cout << "Please enter quarters: "; // Prompt user to enter the number of quarters they have
    cin >> Q; // Assign quarters to variable Q

    cout << "Please enter dimes: "; // Prompt user to enter the number of dimes they have
    cin >> D; // Assign dimes to variable D

    cout << "Please enter nickels: "; // Prompt user to enter the number of nickels they have
    cin >> N; // Assign nickels to variable N

    T = (Q * 25)+ (D * 10) + (N * 5); // Calculating Total (T)
    cout << fixed << setprecision(0) << "You have: " << Q << " * (25) + " << D << " * (10) + " << N << " * (5) = " << T << " cents" << endl; // Outputs total

    return 0;
}

/* === OUTPUT ===

Please enter quarters: 2
Please enter dimes: 4
Please enter nickels: 6
You have: 2 * (25) + 4 * (10) + 6 * (5) = 120 cents

Process returned 0 (0x0)   execution time : 7.031 s
Press ENTER to continue.

*/
