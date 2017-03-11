// CIS 279 - Data Structures
// Topic: Abstract Data Types and C++ Classes
// Application: Calculator
// File: calcdriver.cpp

#include "calculator.h"
#include <iostream>
using namespace std;
using namespace steven_hunt_A1;

int main {

   AddSubMult calcDemo;

   // Test:  Operation, Input, Expected Output
   // Add, 10, 10
   if (calcDemo.addNum(10))
      cout << "Operation: Add, Input 10, Total " << calcDemo.getTotal()
           << endl;
   else
      cout << "Operation: Add, Input 10 failed, Total" << endl;

   // Add, 20, 30
   if (calcDemo.addNum(20))
      cout << "Operation: Add, Input 20, Total " << calcDemo.getTotal()
           << endl;
   else
      cout << "Operation: Add, Input 20 failed, Total" << endl;

   // Sub, 5, 25
   if (calcDemo.subNum(5))
      cout << "Operation: Sub, Input 5, Total " << calcDemo.getTotal()
           << endl;
   else
      cout << "Operation: Sub, Input 5 failed, Total" << endl;

   // Mul, 2, 50
   if (calcDemo.multNum(2))
      cout << "Operation: Mul, Input 2, Total " << calcDemo.getTotal()
           << endl;
   else
      cout << "Operation: Mul, Input 2 failed, Total" << endl;

    // Add, 30, 80
   if (calcDemo.addNum(30))
      cout << "Operation: Add, Input 30, Total " << calcDemo.getTotal()
           << endl;
   else
      cout << "Operation: Add, Input 30 failed, Total " << calcDemo.getTotal()
           << endl;

   // Testing Add, 0, No Change
   if (calcDemo.addNum(0))
      cout << "Operation: Add, Input 0, Total " << calcDemo.getTotal() << endl;
   else
      cout << "Operation: Add, Input 0 failed, Total " << calcDemo.getTotal()
           << endl;

   // Add, INT_MAX
   if (calcDemo.addNum(INT_MAX))
      cout << "Operation: Add, Input INT_MAX, Total " << calcDemo.getTotal()
           << endl;
   else
      cout << "Operation: Add, Input INT_MAX failed, Total " <<
           calcDemo.getTotal() << endl;

   // Testing Add, -1, Err
   if (calcDemo.addNum(-1))
      cout << "Operation: Add, Input -1, Total " << calcDemo.getTotal() << endl;
   else
      cout << "Operation: Add, Input -1 failed, Total " << calcDemo.getTotal()
           << endl;

     // Sub, -1
   if (calcDemo.subNum(-1))
      cout << "Operation: Sub, Input -1, Total " << calcDemo.getTotal() << endl;
   else
      cout << "Operation: Sub, Input -1 failed, Total " << calcDemo.getTotal()
           << endl;

   // Mul, -1
   if (calcDemo.multNum(-1))
      cout << "Operation: Mul, Input -1, Total " << calcDemo.getTotal() << endl;
   else
      cout << "Operation: Mul, Input -1 failed, Total " << calcDemo.getTotal()
           << endl;

   // Testing Add, .5, Err
   if (calcDemo.addNum(.5))
      cout << "Operation: Add, Input .5, Total " << calcDemo.getTotal() << endl;
   else
      cout << "Operation: Add, Input .5 failed, Total " << calcDemo.getTotal()
           << endl;

   return 0;
}

/* 

====== OUTPUT =====

Operation: Add, Input 10, Total 10
Operation: Add, Input 20, Total 30
Operation: Sub, Input 5, Total 25
Operation: Mul, Input 2, Total 50
Operation: Add, Input 30, Total 80
Operation: Add, Input 0 failed, Total 80
Operation: Add, Input INT_MAX failed, Total 80
Operation: Add, Input -1 failed, Total 80
Operation: Sub, Input -1 failed, Total 80
Operation: Mul, Input -1 failed, Total 80
Operation: Add, Input .5 failed, Total 80
Press any key to continue . . .

*/
