// Name: Steven Hunt
// CIS 279 Assignment 3
// Topic: ADT Unsorted Linked List
// File: ItemType.h - Header File

/*
 * CLASS PROVIDED: ItemType ( Class encapsulating the type of items in the list ).
 *
 * DEFINITIONS provided by user:
 *
 *     MAX_ITEMS: A constant specifying the maximum capacity of items allowed on the list.
 *
 *     RelationType: An enumeration type that consists of LESS, GREATER, and EQUAL.
 *
 * CONSTRUCTOR:
 *     ItemType ( );
 *
 * PUBLIC MEMBER FUNCTIONS for the ItemType class:
 *     RelationType ComparedTo ( ItemType ) const;
 *     - Precondition: Self and item have their key members initialized.
 *     - Postcondition: LESS if the key of self is less than the key of item, GREATER if the key of self is greater than the key of item, or EQUAL if the keys are equal.
 *
 *     void Print ( ostream& ) const;
 *     - Precondition: Out is open.
 *     - Postcondition: Values been sent to stream out.
 *
 *     void Initialize ( int number );
 *
 * PRIVATE MEMBER VARIABLES for the ItemType class:
 *
 *     int value;
 */

#include <fstream> // Provides in/out file stream

using namespace std;

const int MAX_ITEMS = 5;

enum RelationType {

    LESS,
    GREATER,
    EQUAL
};

class ItemType {

    public:
        // Constructor:
        ItemType ( );

        // Public Member Functions:
        RelationType ComparedTo ( ItemType ) const;
        void Print ( ostream& ) const;
        void Initialize ( int number );

    private:
        // Private Member Variables:
        int value;
};
