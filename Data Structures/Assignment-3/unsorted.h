// Name: Steven Hunt
// CIS 279 Assignment 3
// Topic: ADT Unsorted Linked List
// File: unsorted.h - Header File 

/*
 * CLASS PROVIDED: UnsortedType
 *
 * DATA STRUCTURE: NodeType
 *
 * DATA STRUCTURE MEMBERS of NodeType:
 *     ItemType info: Users data.
 *     NodeType* link: Link to next node in list.
 *
 * CONSTRUCTOR:
 *     UnsortedType ( );
 *
 * DESTRUCTOR:
 *     ~ UnsortedType ( );
 *
 * PUBLIC OPERATIONS for the UnsortedType class:
 *     void MakeEmtpy ( );
 *     - Precondition: None.
 *     - Postconidition: List is empty.
 *
 *     int GetLength ( ) const;
 *     - Precondition: List has been initialized.
 *     - Postcondition: Function value = number of elements in list.
 *
 *     bool IsFull ( ) const;
 *     - Precondition: List has been initialized.
 *     - Postcondition: Function value = ( list is full ).
 *
 *     ItemType GetItem ( ItemType& item, bool& found );
 *.    - Precondition: List has been initialized and key member of item is initialized.
 *     - Postcondition: If there is an element someItem whose keymatches item’s key, then found = true and copy of
 *	    someItem is returned; otherwise found = false and item is returned.
 *
 *     void PutItem ( ItemType item );
 *     - Precondition: List has been initialized, list is not full, and item is not in list.
 *     - Postcondition: Item is in the list.
 *
 *     void DeleteItem ( ItemType item );
 *     - Precondition: List has been initialized.
 *     - Postcondition: One and only one element in list has a key matching item’s key.
 *
 *     void ResetList ( );
 *     - Precondition: List has been initialized.
 *     - Postcondition: Current position is prior to list.
 *
 *     ItemType GetNextItem ( );
 *     - Precondition: List has been initialized, current position is defined, and the element at current position is not the last in the list.
 *     - Postcondition: Current position is updated to next position and returns a copy of the element at the current position.
 *
 * PRIVATE MEMBER VARIABLES for the UnsortedType class:
 *
 *     nodeType* listData; : Pointer to node.
 *
 *     nodeType* currentPos; : Pointer to node.
 *
 *     int length; : Length of list.
 *
 */

#include "ItemType.h"

struct NodeType {

    ItemType info;
    NodeType* next;
};

class UnsortedType {

    public:
        // Constructor and Destructor:
        UnsortedType ( );
        ~UnsortedType ( );

        // Public Operations:
        void MakeEmpty ( );
        int GetLength ( ) const;
        bool IsFull ( ) const;
        ItemType GetItem ( ItemType& item, bool& found );
        void PutItem ( ItemType item );
        void DeleteItem ( ItemType item );
        void ResetList ( );
        ItemType GetNextItem ( );

    private:
        // Private Member Variables:
        NodeType* listData;
        NodeType* currentPos;
        int length;

}; // End UnsortedType class
