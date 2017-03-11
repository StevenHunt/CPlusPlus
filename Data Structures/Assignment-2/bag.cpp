// Name: Steven Hunt
// CIS 297 Assignment 2
// Topic: ADT Container Class
// Application: Bag
// File: bag.cpp - Implimentation File

#include <iostream> // Provides cin and cout
#include <algorithm> // Provides copy function
#include <cassert> // Provides assert function (Used with public memebers)

#include "bag.h" // With bag_type defined as an int (size_t)

using namespace std;
namespace Steven_Hunt_A2 {

    const Bag::size_type Bag::CAPACITY;

    // Implimentation of erase:
    Bag::size_type Bag::erase ( const bag_type& selection ){

        size_type index = 0;
        size_type allRemoved = 0;

        while ( index < space_taken ){
            if ( data[index] == selection ){
                space_taken --;
                data[index] = data[space_taken];
                ++ allRemoved;
            }
            else
                ++ index;
        }
        return allRemoved;
    }

    // Implimentation of remove_one:
    bool Bag::remove_one ( const bag_type& selection ){
        size_type index; // Location of selection in the data array;

        // Set index to the location of selection in the data array, which could be as small as 0 or as large as space_taken -1.
        // If selection is not in the array, then index will be set equal to space_taken.
        index = 0;
        while (( index < space_taken ) && ( data[index] =! selection ))
            ++ index;

        if ( index == space_taken )
            return false;

        -- space_taken;
        data[index] = data[space_taken];
        return true;
    }

    // Implimentation of insert:
    void Bag::insert ( const bag_type& entry ){
        assert ( size( ) < CAPACITY );

        data[space_taken] = entry;
        ++ space_taken;
    }

    // Overload operator:
    void Bag::operator += ( const Bag& addend ){

        assert ( size( ) + addend.size( ) <= CAPACITY );

        copy ( addend.data, addend.data + addend.space_taken, data + space_taken );
        space_taken += addend.space_taken;
    }

    // Implimentation of count:
    Bag::size_type Bag::count ( const bag_type& selection ) const{

        size_type answer;
        size_type i;
        answer = 0;

            for ( i = 0; i < space_taken; i++ )
                if ( selection == data[i] )
                    answer ++;
                return answer;
    }
}
