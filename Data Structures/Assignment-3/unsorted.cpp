// Name: Steven Hunt
// CIS 279 Assignment 3
// Topic: ADT Unsorted Linked List
// File: unsorted.cpp - Implimentation File

#include <iostream> // Provides in/out stream

#include "unsorted.h"

using namespace std;

// UnsortedType: Constructor
UnsortedType :: UnsortedType ( )  {

    length = 0;
    listData = NULL;
}

// MakeEmpty: Initializes list to empty state
void UnsortedType :: MakeEmpty ( ) {

    NodeType* temp;

    while ( listData != NULL ) {
        temp = listData;
        listData = listData -> next;
        delete temp;
    }
    length = 0;
}

// GetLength: Determines the number of elements in list
int UnsortedType :: GetLength ( ) const {

    return length;
}

// IsFull:  Determines whether list is full
bool UnsortedType :: IsFull ( ) const {

    NodeType* loc;
    try {
        loc = new NodeType;
        delete loc;
        return false;
    }
    catch ( bad_alloc exception ) {
        return true;
    }
}

// GetItem: Get list element whose key matches item’s key (if present)
ItemType UnsortedType :: GetItem ( ItemType& item, bool& found ) {

    NodeType* loc;
    bool searchMore;

    loc = listData;
    found = false;
    searchMore = ( loc != NULL );

    while ( searchMore && !found ) {    // while not found and has more to search
        switch ( item.ComparedTo ( loc -> info ) ) {
            case LESS:
            case GREATER: loc = loc -> next; searchMore = ( loc != NULL ); // Next location, until last
                break;
            case EQUAL: found = true; item = loc -> info; // Found, item = location
                break;
        }
    }
    return item;
}

// PutItem: Puts item into list (Places item in the length position, and increments length)
void UnsortedType :: PutItem ( ItemType item ) {

    NodeType* loc;

    loc = new NodeType;
    loc -> info = item;
    loc -> next = listData;
    listData = loc;
    length++;
}

// DeleteItem: Deletes the element whose key matches item’s key (finds the item and deletes it)
void UnsortedType :: DeleteItem ( ItemType item ) {

    NodeType* loc = listData;
    NodeType* temp;

    if ( item.ComparedTo ( listData -> info ) == EQUAL ) {

        temp = loc;
        listData = listData -> next;
    }
    else {
        while ( item.ComparedTo ( ( loc -> next ) -> info ) != EQUAL )
            loc = loc -> next;
            temp = loc -> next;
            loc -> next = ( loc -> next ) -> next;
    }
    delete temp;
    length--;
}

// ResetList: Initializes current position for an iteration through the list
void UnsortedType :: ResetList ( ) {

    currentPos = NULL;
}

// GetNextItem: Gets the next element in list
ItemType UnsortedType :: GetNextItem ( ) {

    ItemType item;
    if ( currentPos == NULL )
        currentPos = listData;
    else
        currentPos = currentPos -> next;
        item = currentPos -> info;
    return item;
}

// ~UnsortedType: Deconstructor
UnsortedType :: ~UnsortedType ( ) {

    NodeType* temp;

    while ( listData != NULL ) {
        temp = listData;
        listData = listData -> next;
        delete temp;
    }
}
