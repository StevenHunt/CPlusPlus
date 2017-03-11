// Name: Steven Hunt
// CIS 279 Assignment 4
// Topic: Recursion and Trees Application - Building a Word Index
// File: indexDr.cpp - Driver File
// IDE: Codeblocks on Ubuntu 14.04 LTS

#include <iostream>   // Provides in/out stream
#include <fstream>    // Provides in/out file stream
#include <cstddef>    // Provides null pointer
#include <string>     // Provides string class
#include <cctype>     // Provides isalnum and tolower

#include "index.h"

/*
 * FUNCTIONS for indexDr
 *     string GetString (ifstream&)
 *     - Post Condition:
 *          - Using isalnum, this functions checks whether the letter is alphanumeric or not.
 *          - Letters are linked together until a non-alphnumeric letter is read or eof.
 *          - Letters are also changed from uppercase to lowercase.
*/

using namespace std;
using namespace Steven_Hunt_1;

// Function Prototype:
string GetString ( ifstream& );

int main ( ) {

    ListType list;
    string letters;

 	// Input & output file variables:
    ifstream iFile;
    ofstream oFile;

    // In order to allow the publisher the additional flexibility to consider ‘qualifying words’, let the user enter the minimum number of characters:
    int minWordLength;
    cout << "Enter the minimum amount of letters a word must be to be processed: ";
    cin >> minWordLength;

    // File Label:
 	string label_Files, label_Specs;
 	label_Files = "- Input File: index.in \n- Program Files: indexDr.cpp, index.h, index.cpp";
 	label_Specs = "Program Specification: This file was created by the above program which read in the specified input file, broke it down into words, processed the words, and outputed the results to this file. It processes each word, checks its length, compares it to all the words already processed and either adds it to the list of words, or increases it's frequency + 1.";

    cout << endl;

    // Initializing progress bar variables:
    const int SIZE = 60; // Size of bar.
	double temp = 0; // Temp finds percent done.
	int percent = 0, var = 10000000000; // Percent trunciates the decimal.

	// Opening input file:
    iFile.open ( "loremIpsum.in" );

    // Creating output file:
    oFile.open ( "a4indexStevenHunt" );

    cout << "Opening and reading file: index.in" << endl;
    cout << "Writing data to output file: a4indexStevenHunt" << string(2,'\n');

	// Read in words. If the word is larger than specified minimum length then put into list.
	// If word is already present, increase count member.
    letters = GetString ( iFile );
    while ( iFile ) {

        if ( letters.length() >= minWordLength )
        list.PutOrIncrement ( letters );
        letters = GetString ( iFile );
    }

    // For-loop for progress bar: Manipulated code from enduser000 ( cplusplus forum member ).
	cout << "1% " << '[';

	for ( int i = SIZE - 2; i > 0; i-- )
        cout << ' ';
        cout << ']';

	for ( int i = 0; i < SIZE - 1; i++ )
        cout << '\b';

	// Variable 'a' is the actual bar length, used to find percent complete.
	for ( int a = 1; a < SIZE - 1; a++ ) {

		temp = ((( double ) a) / (( double ) SIZE)) * 100;
		percent = temp;

		if ( a <= SIZE - 3 ) {

			for ( int i = a - 1; i > 0; i-- )
                cout << '=';
                cout << ' ';

			for ( int i = SIZE - a - 1; i > 0; i-- )
                cout << ' ';
                cout << "] ";

            // Add another space if it's a single digit.
			if ( !( percent / 10 ) )
                cout << "  " << percent << '%';

			else
                cout << ' ' << percent << '%';

			for ( int i = SIZE + 5; i > 0; i-- )
                cout << '\b';

			for ( int i = var / SIZE; i > 0; i-- ) {
			}
		}
		else {
			for ( int i = a; i > 0; i--)
                cout << '=';
                cout << "=] 100%";

			for ( int i = var / SIZE; i > 0; i-- ) {
			}
		}
	}

	cout << endl;

    // Printing output labels to output file:
    oFile << label_Files << string(2,'\n');
    oFile << label_Specs << string(2,'\n');

    // Printing to ouput file:
    list.PrintList ( oFile );

    // Closing files:
    oFile.close();
    iFile.close();

    return 0;

} // End of main ( )


// Function Definitions:

// GetString:
string GetString ( ifstream& inFile ) {

    // Set letters to empty string:
    char letter;
    string letters = "";

    // Gets a letter, checks if alphanumeric, and converts uppercase to lowercase.
    inFile.get(letter);
    while (inFile && !isalnum(letter))
        inFile.get(letter);

    if (!inFile)
        return letters;

    else {
        do {
            letter = tolower ( letter );
            letters = letters + letter;
            inFile.get ( letter );
        }
        while ( isalnum ( letter ) && inFile );
    }

    return letters;
}


/* 'Progress Bar' increments as percentage increases...

--------- OUTPUT ---------

Enter the minimum amount of letters a word must be to be processed: 5

Opening and reading file: myFile.in
Writing data to output file: a4indexStevenHunt

1% [===========================================================] 100%

Process returned 0 (0x0)   execution time : 7.221 s
Press ENTER to continue.

*/
