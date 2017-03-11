// Name: Steven Hunt
// CIS 279 Assignment 3
// Topic: ADT Unsorted Linked List
// File: ItemType.cpp - Implimentation File

#include <iostream> // Provides in/out stream
#include <fstream> // Provides in/out file stream

#include "ItemType.h"

using namespace std;

// ItemType: Constructor.
ItemType :: ItemType ( ) {

    value = 0;
}

// ComparedTo: Determines the ordering of two ItemType objects based on their keys.
RelationType ItemType :: ComparedTo ( ItemType comparedWith ) const {

    if ( value < comparedWith.value )
        return LESS;

    else if ( value > comparedWith.value )
        return GREATER;

    else return EQUAL;
}

// Initialize: Initializes value.
void ItemType :: Initialize ( int number ) {

    value = number;
}

// Print: Prints value to stream out.
void ItemType :: Print ( ostream& out ) const {

    out << value << " ";

}
