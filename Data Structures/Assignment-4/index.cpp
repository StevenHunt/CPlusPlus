// Name: Steven Hunt
// CIS 279 Assignment 4
// Topic: Recursion and Trees Application - Building a Word Index
// File: index.cpp - Implimentation File
// IDE: Codeblocks on Ubuntu 14.04 LTS

#include <fstream>    // Provides in/out file stream
#include <cstddef>    // Provides NULL
#include <string>     // Provides string class

#include "index.h"

using namespace std;
namespace Steven_Hunt_1 {

    // ListType: Constructor creates an empty tree by setting the root to NULL.
    ListType :: ListType () {

        root = NULL;
    }

    // Process: Processes info on the tree and incrementing it's frequency.
    void Process ( TreeNode*& tree, string letters ) {

        // If tree is null, process letters into tree.
        if ( tree == NULL ) {
            tree = new TreeNode;
            tree -> info.word = letters;
            tree -> info.count = 1;
            tree -> left = NULL;
            tree -> right = NULL;
        }

        // Increment frequency of word if it's been processed before.
        else if ( tree -> info.word == letters )
            tree -> info.count++;

        // Process in left or right subtrees if word hasn't been processed before.
        else if ( tree -> info.word > letters )
            Process ( tree -> left, letters );
        else
            Process ( tree -> right, letters );
    }

    // PutOrIncrement: Calls the resursive function Process to process letters into tree.
    void ListType :: PutOrIncrement ( string letters ) {

        Process ( root, letters );
    }

    // Print: Prints info member of items in tree.
    void Print ( TreeNode*& tree, ofstream& outFile ) {

        if ( tree != NULL ) {
            Print ( tree -> left, outFile ); // Print left subtree.

            outFile << tree -> info.word;
            outFile << " = " << tree -> info.count;
            outFile << endl;

            Print ( tree -> right, outFile ); // Print right subtree.
        }
    }

    // PrintList: Calls the recursive function Print to print the list to the output file.
    void ListType :: PrintList ( ofstream& outFile ) {

        Print ( root, outFile );
    }

} // End namespace Steven_Hunt_1
