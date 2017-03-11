/*
    Program name: p6sumAndProductRounded.cpp
    Student name: Steven Hunt
    Description: Write a program that reads in two decimal numbers and then outputs their
    sum and their product.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {

    double a,b,c,d; // Variables a, b, c, d.

    cout << "Please enter number 1: ";
    cin >> a; // Assigning variable a to number 1

    cout << "Please enter number 2: ";
    cin >> b; // Assigning variable b to number 2

    c = a + b; // Making variable c equal to the sum of both variable a (1) and b (2)
    cout << fixed << setprecision(1) << "Sum is: " << c << endl; // Setting the decimal precision to 1 place

    d = a * b; // Making variable d equal to the product of both variable a (1) and b (2)
    cout << fixed << setprecision(2) << "Product is: " << d << endl; // Setting the decimal precision to 2 places

    return 0;

}

/* === OUTPUT ===

Please enter number 1: 10.2
Please enter number 2: 2.4
Sum is: 12.6
Product is: 24.48

*/
