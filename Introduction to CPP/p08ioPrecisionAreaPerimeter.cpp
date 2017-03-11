/*

Program: p8ioPrecisionAreaPerimeter.cpp
Name: Steven Hunt
Description: Write a program which asks the user for the width and height of a rectangle,
and then calculates and shows the area and perimeter of the shape rounded to 1 decimal place.

1. INPUT: Ask the user to enter float variables Width and Hight of a rectangle.
2. PROCESSING: Compute the Area and Perimeter of the rectangle.
3. OUTPUT: Show the Area and Perimeter of the rectangle rounded to 1 decimal.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{

    // Initializing the Variables
    float h; // Height variable
    float w; // Width variable
    float a; // Area variable
    float p; // Perimeter variable

    cout << "Please enter height: "; // Prompting user to input the height
    cin >> h; // Assigning variable h to the height

    cout << "Please enter width: "; // Prompting user to input width
    cin >> w; // Assigning variable w to the width

    a = h * w; // Calculating Area = Height x Width
    cout << fixed << setprecision(1) << "Area = " << h << " * " << w << " = " << a << endl; // Setting decimal to 1 place, and producing Area output

    p = 2 * (h + w); // Calculating Perimeter = 2 x ( Height + Width )
    cout << fixed << setprecision(1) << "Perimeter = 2 * (" << h << " + " << w << ") = " << p << endl; // Setting decimal to 1 place, and producing Perimeter output

    return 0;

}

/* === OUTPUT ===

Please enter height: 10.1
Please enter width: 12.2
Area = 10.1 * 12.2 = 123.2
Perimeter = 2 * (10.1 + 12.2) = 44.6

*/
