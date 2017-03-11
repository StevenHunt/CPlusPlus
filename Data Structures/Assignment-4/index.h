// Name: Steven Hunt
// CIS 279 Assignment 4
// Topic: Recursion and Trees Application - Building a Word Index
// File: index.h - Header File
// IDE: Codeblocks on Ubuntu 14.04 LTS

/*
 * DEFINED CONSTANT:
 *
 *     MAX_WORD_LENGTH: A constant specifying the maximum word length allowed.
 *
 * DATA STRUCTURE: WordType
 *     Members: Data stored in the node type.
 *          - string word;
 *          - int count;
 *
 * DATA STRUCTURE: TreeNode
 *     Members:
 *          - WordType info; : Place to store data in the node.
 *          - TreeNode* left; : Left tree node (child).
 *          - TreeNode* right; : Right tree node (child).
 *
 * CLASS PROVIDED: ListType ( part of the namespace Steven_Hunt_1 )
 *
 * CONSTRUCTOR: Creates empty tree.
 *     ListType ( );
 *
 * PUBLIC OPERATIONS for ListType class:
 *     void PutOrIncrement ( string letters );
 *     - Precondition: Root of the tree exists.
 *     - Postcondition: Info is added to the tree or frequency incremented if already exists.
 *
 *     void PrintList ( ofstream& );
 *     - Precondition: Output file has been opened for writing.
 *     - Postcondition: Items in the tree based list have been printed to output file.
 *
 * PRIVATE MEMBERS for ListType class:
 *
 *     TreeNode* root; : Root node (Top node of the tree structure).
*/


#ifndef STEVEN_HUNT_LISTTYPE_H
#define STEVEN_HUNT_LISTTYPE_H

namespace Steven_Hunt_1 {


    const int MAX_WORD_LENGTH = 20;

    struct WordType {

        public:
            std::string word;
            int count;
    };

    struct TreeNode {

        WordType info;
        TreeNode* left;
        TreeNode* right;
    };

    class ListType {

        public:
            ListType ( );
            void PutOrIncrement ( std::string letters );
            void PrintList ( std::ofstream& );

        private:
            TreeNode* root;

    }; // End ListType class

} // End namespace Steven_Hunt_1

#endif // STEVEN_HUNT_LISTTYPE_H

