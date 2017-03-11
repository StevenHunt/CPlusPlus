// Name: Steven Hunt
// CIS 279 Assignment 3
// Topic: ADT Unsorted Linked List
// File: listDr.cpp - Driver File

/*
 * FUNCTIONS for listDr:
 *     void PrintList ( ofstream& out, UnsortedType& uLL );
 *     - Precondition: List has been initialized and dataFile is open for writing.
 *     - Postconidition: Each component in the list has been written to dataFile which is still open.
 */

#include <iostream> // Provides in/out stream
#include <fstream>  // Provides in/out file stream

#include "unsorted.h"

using namespace std;

// Function Prototype:
void PrintList(ofstream& out, UnsortedType& uLL);

int main() {

    // Initializing Variables:
    string testInstruct;
    int num;
    bool inList;
    int numInstruct = 1;
    ItemType item;
    UnsortedType uLL;

    // Declaring in/out file stream variables:
    ifstream in;
    ofstream out;

    cout << "Opening listData.txt..." << string(2,'\n');
    in.open("listData.txt");

    if ( !in ) {

        cout << "No such file in directory. " << endl;
        exit(2);
    }

    cout << "Reading in test data from listData.txt..." << string(2,'\n');

    out.open("a3testStevenHunt");

    in >> testInstruct;

    // Checking listData instructions:
    while ( testInstruct != "Quit" ) {

        if ( testInstruct == "MakeEmpty" )
            uLL.MakeEmpty ( );

        else if ( testInstruct == "GetLength")
            out << "The length of the list is determined to be " << uLL.GetLength ( ) << " by GetLength(); " << endl;

        else if ( testInstruct == "IsFull" )
            if ( uLL.IsFull ( ) )
                out << "The list is determined to be full by IsFull(); " << endl;
            else
                out << "The list is not determined to be full by IsFull(); "  << endl;

        else if ( testInstruct == "GetItem" ) {
            in >> num;
            item.Initialize ( num );
            item = uLL.GetItem ( item, inList );
            item.Print( out );

                if ( inList )
                    out << "was found in the list by GetItem(); " << endl;
                else
                    out <<  "was not found in the list by GetItem(); "  << endl;
        }

        else if ( testInstruct == "PutItem" ) {
            in >> num;
            item.Initialize ( num );
            uLL.PutItem ( item );
            item.Print ( out );
            out << "was put in the list by PutItem(); " << endl;
        }

        else if ( testInstruct == "DeleteItem" ) {
            in >> num;
            item.Initialize ( num );
            uLL.DeleteItem ( item );
            item.Print ( out );
            out << "was deleted from the list by DeleteItem(); " << endl;
        }

        else if ( testInstruct == "PrintList" )
            PrintList ( out, uLL );

        else if ( testInstruct == "Error" )
            out << "Data Error! " << endl;

        else
            cout << testInstruct << "isn't a valid input. " << endl;

        cout <<  "Reading data: " << numInstruct << endl;
        in >> testInstruct;
        numInstruct++;

    } // End while loop

    cout << endl << "Test run completed and the results are now written to a3testStevenHunt.txt"  << endl;

    // Closing both files:
    in.close();
    out.close();

    return 0;
}

// Function Definition:

// PrintList: Print items one at a time to the output stream.
void PrintList ( ofstream& dataFile, UnsortedType& uLL ) {

    int length;
    ItemType item;

    // Reset and get length of list
    uLL.ResetList ( );
    length = uLL.GetLength ( );

    for ( int count = 1; count <= length; count ++ ) {

        item = uLL.GetNextItem ( );
        item.Print ( dataFile );
    }

    dataFile << endl;
}

/* === OUTPUT ===

Opening listData.txt...

Reading in test data from listData.txt...

Reading data: 1
Reading data: 2
Reading data: 3
Reading data: 4
Reading data: 5
Reading data: 6
Reading data: 7
Reading data: 8
Reading data: 9
Reading data: 10
Reading data: 11
Reading data: 12
Reading data: 13
Reading data: 14
Reading data: 15
Reading data: 16
Reading data: 17
Reading data: 18
Reading data: 19
Reading data: 20
Reading data: 21
Reading data: 22

Test run completed and the results are now written to a3testStevenHunt.txt

Process returned 0 (0x0)   execution time : 0.003 s
Press ENTER to continue.

----------------------------------

a3testStevenHunt.txt file:

The length of the list is determined to be 0 by GetLength();
5 was put in the list by PutItem();
7 was put in the list by PutItem();
6 was put in the list by PutItem();
9 was put in the list by PutItem();
9 6 7 5
1 was put in the list by PutItem();
1 9 6 7 5
4 was not found in the list by GetItem();
5 was found in the list by GetItem();
9 was found in the list by GetItem();
10 was not found in the list by GetItem();
The list is not determined to be full by IsFull();
5 was deleted from the list by DeleteItem();
The list is not determined to be full by IsFull();
1 was deleted from the list by DeleteItem();
6 was deleted from the list by DeleteItem();
9 was deleted from the list by DeleteItem();
7

Data Error!

*/

