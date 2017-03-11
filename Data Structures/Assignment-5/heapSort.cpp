// Name: Steven Hunt
// CIS 279 Assignment 5
// Topic: Heap Sort
// File: heapSort.cpp
// IDE: Codeblocks on Ubuntu 14.04 LTS

/*
 *  FUNCTIONS for heapSort.cpp
 *
 *      void heapSort ( string ab[ ], int size );
 *      - Pre Condition: ab is an array with size elements.
 *      - Post Condition: The elements of array ab have been rearranged so that ab[0] <= ab[1] <= ... <= ab[size-1].
 *
 *      void heapRebuild ( string ab[ ], int rt, int btm );
 *      - Postcondition: The elements have been rearranged so that ab now forms a heap.
*/

#include <string.h>     // Provides strcmp (Compares two strings)
#include <iostream>     // Provides cout

typedef char * string;

// Function Prototypes:
void heapSort ( string ab[ ], int size );
void heapRebuild ( string ab[ ], int rt, int btm );

// Start of main ( ) function:
int main ( ) {

    string a[ 6 ] = { "D", "B", "A", "C", "F", "E" };
    heapSort ( a, 6 );

    std::cout << std::endl;

    for ( int i = 0; i < 6; i ++ ) {

        std::cout << a[ i ] << " ";
    }

    std::cout << ": Sorted array" << "\n\n";

    std::cout << "---------------------------------------------------------- " << "\n\n";

    string b[ 6 ] = { "25", "30", "20", "80", "40", "60" };
    heapSort ( b, 6 );

    std::cout << std::endl;

    for ( int i = 0; i < 6; i ++ ) {

        std::cout << b[ i ] << " ";
    }

    std::cout << ": Sorted array" << std::endl;

} // End main ( )

// Function Definitions:

void heapSort ( string ab[ ], int size ) {

    string temp [ 1 ];

    for ( int i = 0; i < size; i ++ ) {

        std::cout << ab[ i ] << " ";
    }

    std::cout << ": Original array" << "\n\n";

    for ( int i = (size / 2); i >= 0; i -- ) {

        heapRebuild ( ab, i, size - 1 );
    }

    for ( int i = 0; i < size; i ++ ) {

        std::cout << ab[ i ] << " ";
    }

    std::cout << ": Initial rebuild to form heap" << "\n\n";

    std::cout << "Sorting and Rebuilding: " << std::endl;

    for ( int i = size - 1; i >= 1; i -- ) {

        temp[ 0 ] = ab[ 0 ];
        ab[ 0 ] = ab[ i ];
        ab[ i ] = temp[ 0 ];

        for ( int i = 0; i < 6; i ++ ) {

            heapRebuild ( ab, 0, i - 5 );
            std::cout << ab[ i ] <<  " ";
        }

        std::cout << std::endl;

        heapRebuild ( ab, 0, i - 1 );
  }
} // End heapSort ( )

void heapRebuild ( string ab[ ], int rt, int btm ) {


    int done, maxChild, n;
    string temp[ 1 ];

    done = 0;

    while ( ( rt * 2 <= btm ) && ( !done ) ) {

        if ( rt * 2 == btm ) {
            maxChild = rt * 2;
        }

        else if ( strcmp ( ab[ rt * 2 ], ab[ rt * 2 + 1 ] ) > 0 ) {
            maxChild = rt * 2;
        }

        else {
            maxChild = rt * 2 + 1;
        }

        if ( strcmp ( ab[ rt ], ab[ maxChild ] ) < 0 ) {

            temp[ 0 ] = ab[ rt ];
            ab[ rt ] = ab[ maxChild ];
            ab[ maxChild ] = temp[ 0 ];
            rt = maxChild;
        }

        else
            done = 1;
    }
} // End heapRebuild ( )

/* === OUTPUT ===

D B A C F E : Original array

F E D C A B : Initial rebuild to form heap

Sorting and Rebuilding:
B E D C A F
A D B C E F
A C B D E F
A B C D E F
A B C D E F

A B C D E F : Sorted array

----------------------------------------------------------

25 30 20 80 40 60 : Original array

80 60 40 30 25 20 : Initial rebuild to form heap

Sorting and Rebuilding:
20 60 40 30 25 80
20 40 25 30 60 80
20 30 25 40 60 80
20 25 30 40 60 80
20 25 30 40 60 80

20 25 30 40 60 80 : Sorted array

Process returned 0 (0x0)   execution time : 0.003 s
Press ENTER to continue.

*/
