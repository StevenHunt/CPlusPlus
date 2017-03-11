// Name: Steven Hunt
// CIS 297 Assignment 2
// Topic: ADT Container Class
// Application: Bag
// File: bag.h - Header File

/*
 *
 * CLASS PROVIDED: Bag ( part of the namespace Steven_Hunt_1 )
 *
 * TYPEDEFS and MEMBER CONSTANTS for the Bag class:
 *     typedef ____ bag_type
 *     - Bag::bag_type is the data type of the items in the bag.
 *
 *     typedef ____ size_type
 *     - Bag::size_type is the data type of any variable that keeps track of how many items are in the bag.
 *     - Program is using data type size_t which is an int data type that can hold only non-negative numbers.
 *
 *     static const size_type CAPACITY = _____
 *     - Bag::CAPACITY is the maximum number of items that the bag can store. ( 20 for this program ).
 *
 * CONSTRUCTOR:
 *     Bag()
 *     - Precondition: Empty
 *     - Postcondition: The class implimentation passes the Test Run Requirements.
 *
 * MODIFICATION MEMBER FUNCTIONS for the Bag class.
 *     size_type erase(const bag_type& selection)
 *     - Precondition: None
 *     - Postconidition: All copies of selection have been removed from the bag.
 *
 *     bool remove_one ( const bag_type& selection )
 *     - Precondition: None
 *     - Postcondition: If selection is in the bag, then one copy has been removed, otherwise the bag is unchaged.
 *
 *     void clear ();
 *     - Precondition: None
 *     - Postcondition: Removes all entries from the bag.
 *
 *     void insert ( const bag_type& entry )
 *.    - Precondition: size() < CAPACITY.
 *     - Postcondition: A new copy of the entry has been added to the bag.
 *
 *     void operator += ( const Bag& addend )
 *     - Precondition: size() + addend.size() <= CAPACITY.
 *     - Postcondition: Each item in addend has been added to this bag.
 *
 * CONSTANT MEMBER FUNCTIONS for the Bag class:
 *     size_type size() const
 *     - Precondition: None
 *     - Postcondition: The return value is the total number of items in the bag.
 *
 *     size_type count ( const bag_type& selection )
 *     - Precondition: None
 *     - Postcondition: The return value is number of times that the selected value is in the bag.
 *
 * VALUE SEMANTICS for the Bag class:
 *     Assignments and the copy constructor may be used with Bag objects.
 */

#ifndef STEVEN_HUNT_BAG_H
#define STEVEN_HUNT_BAG_H

#include <cstdlib> // Provides size_t

namespace Steven_Hunt_A2
{

    class Bag {

        public:

            // TYPEDEFS and MEMBER CONSTANTS:
            typedef int bag_type;
            typedef std::size_t size_type;
            static const size_type CAPACITY = 20;

            // CONSTRUCTOR: Defined inline
            Bag( ) { space_taken = 0; }

            // MODIFICATION MEMBER FUNCTIONS:
            size_type erase ( const bag_type& selection );
            bool remove_one ( const bag_type& selection );
            void clear ( ) { space_taken = 0; }
            void insert ( const bag_type& entry );
            void operator += ( const Bag& addend );

            // CONSTANT MEMBER FUNCTIONS:
            size_type size( ) const { return space_taken; }
            size_type count ( const bag_type& selection) const;

        private:

            bag_type data[CAPACITY]; // Array
            size_type space_taken;   // How much space is taken in the array
    }; // End Bag class

} // End namespace Steven_Hunt_A2

#endif // STEVEN_HUNT_BAG_H
