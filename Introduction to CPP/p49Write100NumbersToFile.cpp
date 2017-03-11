/*
Program: p49Write100NumbersToFile.cpp
Name: Steven Hunt
Description: A program which outputs 100 random numbers between 1 - 100 in a file named "numbers.txt", 10 numbers per line.
*/

#include <iostream>
#include <iomanip>

// Used to read / write files
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{

    ofstream file; // file is the variable used to write to the file numbers.txt
    file.open("numbers.txt");

    // Checks for Error
    if (file.fail())
    {
        cout << "Error Opening File" << endl;
        exit(1);
    }

    cout << "Writing text to numbers.txt" << endl;

    file << "100 random numbers from 1 - 100, 10 numbers per line: " << endl << endl;

    for ( int x = 1, counter = 0; x < 101; x++, counter++)
    {

        if (counter == 10) // Once the counter reaches 10 characters, start printing a new line
        {
            counter = 0;
            file << '\n';
        }

        file << setw(4) <<  x;
    }

    file.close();

    cout << endl;

    cout << "File was successfully written! \n";

    return 0;

}

/* === OUTPUT ===

100 random numbers from 1 - 100, 10 numbers per line:

   1   2   3   4   5   6   7   8   9  10
  11  12  13  14  15  16  17  18  19  20
  21  22  23  24  25  26  27  28  29  30
  31  32  33  34  35  36  37  38  39  40
  41  42  43  44  45  46  47  48  49  50
  51  52  53  54  55  56  57  58  59  60
  61  62  63  64  65  66  67  68  69  70
  71  72  73  74  75  76  77  78  79  80
  81  82  83  84  85  86  87  88  89  90
  91  92  93  94  95  96  97  98  99 100

*/
