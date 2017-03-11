/*
Program: p48ReadWrite.cpp
Name: Steven Hunt
Description: Read / Write sample program
*/

#include <iostream>
#include <iomanip>

// Used to read / write files
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{

    ifstream inStream; // create variable inStream which is of the ifstream type, input file stream (ifstream) allows us to write to files. ( Use to READ from a file )
    ofstream outStream; // outStream is the variable we'll use to WRITE to a file
    int val;

    inStream.open ("telemetry.txt"); // open the "telemetry.txt" file, and associate inStream with it
    if (inStream.fail()) // check to see if the file exists, this is true if "telemtery.txt" doesn't exist (we failed to open it)
    {
        cout << "Input file opening failed. \n";
        exit (1); // exit exits the whole program, return returns out of a function
    }

    outStream.open ("results2.txt"); // Not necessary, c++ does it automatically.
    {
        if(outStream.fail())
        {
            cout << "Output file opening failed. \n";
            exit(1);
        }
    }

    outStream << "Square of telemetry data: " << endl;  // Writing " " in outStream which is connected to results.txt, so were writing " " to results.txt
    while (!inStream.eof()) // While loop that continues until we get done reading the end of file (.eof)
    {
        // Basically reading a number from the "telemetry.txt" file, squaring it, and writing it to the outStream "results.txt" file
        inStream >> val; // get data from "telemetry.txt" and put it into variable val
        outStream << val * val << endl; // then output the product of val * val to "results.txt"
    }

    // closing the 2 files
    inStream.close();
    outStream.close();

}

/* === OUTPUT ===

Without "telemetry.txt" file created:

Input file opening failed.

Process returned 1 (0x1)   execution time : 0.003 s
Press ENTER to continue.

------------------------

telemetry.txt file:
4
5
10
1

results.txt file:

Square of telemetry data:
16
25
100
1

*/
