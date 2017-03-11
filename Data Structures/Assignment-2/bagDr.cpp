// Name: Steven Hunt
// CIS 297 Assignment 2
// Topic: ADT Container Class
// Application: Bag
// File: bagDr.cpp - Driver

#include <iostream> // Provides cin and cout
#include <cstdlib>  // Provides EXIT_SUCCESS

#include "bag.h" // With bag_type defined as an int (size_t)

using namespace std;
using namespace Steven_Hunt_A2;

int main( ) {

    // Creating Bag 'c'
    Bag c;
    cout << "Bag 'c' with capacity set to: " << c.CAPACITY << string(2,'\n');

    // Inserting a 'four' into the bag
    c.insert(4);
    cout << "*** Inserting a 'four' into the bag..." << string(2,'\n');

    // Display bag size:
    cout << "The size of the bag is: " << c.size( ) << string(2,'\n');

    // Populating the bag to Capacity
    c.insert(3);
    c.insert(1);
    c.insert(5);
    c.insert(9);
    c.insert(2);
    c.insert(1);
    c.insert(18);
    c.insert(11);
    c.insert(4);
    c.insert(9);
    c.insert(14);
    c.insert(5);
    c.insert(15);
    c.insert(5);
    c.insert(0);
    c.insert(20);
    c.insert(5);
    c.insert(8);
    c.insert(18);

    cout << "*** Now randomly populating the bag to capacity..." << string(2,'\n');

    // Display bag size:
    cout << "The size of the bag is: " << c.size( ) << endl;

   // Display the number of 'fours' in the bag
    cout << "The amount of 'fours' in the bag: " << c.count(4) << string(2,'\n');

    // Remove a 'four' from the bag
    c.remove_one(4);
    cout << "*** Removing ONE 'four' from the bag..." << string(2,'\n');

    // Display bag size:
    cout << "The size of the bag is: " << c.size( ) << endl;

    // Display the number of 'fours' in the bag
    cout << "The amount of 'fours' in the bag: " << c.count(4) << endl;

    // Display the number of 'fives' in the bag
    cout << "The amount of 'fives' in the bag: " << c.count(5) << string(2,'\n');

    // Remove all 'fives' from the bag
    c.erase(5);
    cout << "*** Removing ALL 'fives' from the bag..." << string(2,'\n');

    // Display the number of 'fives' in the bag
    cout << "The amount of 'fives' in the bag: " << c.count(5) << endl;

    // Display bag size:
    cout << "The size of the bag is: " << c.size( ) << string(2,'\n');

    // Removing all items from the bag
    c.clear( );
    cout << "*** Removing ALL items from the bag..." << string(2,'\n');

    // Display bag size:
    cout << "The size of the bag is: " << c.size( ) << string(2,'\n');

    // Repopulating the now empty bag with 4 numbers
    c.insert(3);
    c.insert(9);
    c.insert(4);
    c.insert(5);
    cout << "*** Repopulating the bag with 4 numbers... " << string(2,'\n');

    // Display bag size:
    cout << "The size of the bag is: " << c.size( ) <<  endl;

    return EXIT_SUCCESS;
} // End main()

/* ===== OUTPUT from sample program =====

Bag 'c' with capacity set to: 20

*** Inserting a 'four' into the bag...

The size of the bag is: 1

*** Now randomly populating the bag to capacity...

The size of the bag is: 20
The amount of 'fours' in the bag: 2

*** Removing ONE 'four' from the bag...

The size of the bag is: 19
The amount of 'fours' in the bag: 1
The amount of 'fives' in the bag: 4

*** Removing ALL 'fives' from the bag...

The amount of 'fives' in the bag: 0
The size of the bag is: 15

*** Removing ALL items from the bag...

The size of the bag is: 0

*** Repopulating the bag with 4 numbers...

The size of the bag is: 4

Process returned 0 (0x0)   execution time : 0.003 s
Press ENTER to continue.
*/
