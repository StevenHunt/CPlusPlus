/*

Program: p15letterGrades.cpp
Name: Steven Hunt
Description: A program that will prompt the user for their grade percentage, and output their letter grade.

A is 90% or above

B is between 80% and 90%

C is between 70% and 80%

D is between 60% and 70%

F is under 60%

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
    float grade; // Grade in percent form

    cout << "Please enter the percentage of your grade: ";
    cin >> grade;

    cout << endl;


    if (grade >= 90){ // Checking to see if the student has an A
        cout << "You have an 'A' ";
    }

    else if (grade <= 89 && grade >=80 ){
        cout << "You have a 'B' ";
    }

    else if (grade <= 79 && grade >= 70){
        cout << "You have a 'C' ";
    }

    else if (grade <= 69 && grade >= 60){
        cout << "You have a 'D' ";
    }

    else {
        cout << "You have an 'F' ";
    }

    return 0;


}

/* === OUTPUT ===

Please enter the percentage of your grade: 93

You have an 'A'

OR

Please enter the percentage of your grade: 81

You have a 'B'

OR

Please enter the percentage of your grade: 77

You have a 'C'

OR

Please enter the percentage of your grade: 60

You have a 'D'

OR

Please enter the percentage of your grade: 59

You have an 'F'

*/
