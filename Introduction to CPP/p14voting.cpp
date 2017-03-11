/*

Program: p14voting.cpp
Name: Steven Hunt
Description: The program will ask the user a series of questions, and determine if the user can vote. It will then display a message on 
whether or not the user is eligible, and if not it will explain why.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{

	string Citizen; // Citizenship
	string Registration; // Registered to vote
	int Age; // Age of potential voter

	cout << "How old are you: "; // Prompt user to input age
	cin >> Age; // Assigned to age

	cout << "Are you a U.S. citizen (Y or N): ";
	cin >> Citizen;

	cout<<"Are you registered to vote (Y or N): ";
	cin >> Registration;

    // Eligible to vote
	if ( Age >=  18 && Registration == "Y" && Citizen == "Y" ){ // If the user is > 18, Registered, and a Citizen!
		cout << "You are ready to vote!";
    }

    // Not eligible for 1 reason
    if ( (Age >= 18) && (Registration == "Y") && (Citizen == "N") ){
        cout << "You cannot vote, you must be a U.S. citizen!";
    }

    if ( (Age < 18) && (Registration == "Y") && (Citizen == "Y") ){
        cout << "You cannot vote, you must be at least 18 years old!";
    }

    if( (Age >= 18) && (Registration == "N") && (Citizen == "Y") ){
        cout << "You cannot vote, you must be registered first!";
    }

    // Not eligible for 2 reasons
    if( (Age < 18) && (Registration == "Y") && (Citizen == "N") ){
        cout << "You definitely cannot vote!" << endl << endl
        << "1. You aren't old enough." << endl
        << "2. You aren't a U.S. citizen." << endl;
    }

     if( (Age >= 18) && (Registration == "N") && (Citizen == "N") ){
        cout << "You definitely cannot vote!" << endl << endl
        << "1. You aren't registered to vote." << endl
        << "2. You aren't a U.S. citizen." << endl;
    }

     if( (Age < 18) && (Registration == "N") && (Citizen == "Y") ){
        cout << "You definitely cannot vote!" << endl << endl
        << "1. You aren't old enough." << endl
        << "2. You aren't registered to vote." << endl;
    }

    // Not eligible for all 3 reasons
    if( (Age < 18) && (Registration == "N") && (Citizen == "N") ){
        cout << "You definitely cannot vote!" << endl << endl
        << "1. You aren't old enough." << endl
        << "2. You aren't a U.S. citizen." << endl
        << "3. You haven't registered to vote." << endl;
    }

	return 0;

}

/* === OUTPUT ===

How old are you: 23
Are you a U.S. citizen (Y or N): Y
Are you registered to vote (Y or N): Y
You are ready to vote!

OR

How old are you: 16
Are you a U.S. citizen (Y or N): Y
Are you registered to vote (Y or N): N
You definitely cannot vote!

1. You aren't old enough.
2. You aren't registered to vote.

OR

How old are you: 67
Are you a U.S. citizen (Y or N): N
Are you registered to vote (Y or N): Y
You cannot vote, you must be a U.S. citizen!

*/
