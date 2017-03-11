// CIS 279 - Data Structures
// Topic:  Abstract Data Types and C++ Classes
// Application:  Calculator
// File: calculator.h

/* 
 * CLASS PROVIDED:  AddSubMult (namespace STEVEN_HUNT_ADDSUBMULT)
 *
 * CONSTRUCTOR FOR THE AddSubMult CLASS:
 *   AddSubMult()
 *     Precondition:   None
 *     Postcondition:  Private member variable intialized to 0
 *
 * MUTATOR FUNCTIONS:
 *   bool addNum(int)
 *     Precondition:  Parameter is int or float data type
 *     Postcondition: total updated; true returned if valid int
 *                    else false returned
 *
 *   bool subNum(int)
 *     Precondition:  Parameter is int or float data type
 *     Postcondition: total updated; true returned if valid int
 *                    else false returned
 *
 *   bool multNum(int)
 *     Precondition:  Parameter is int or float data type
 *     Postcondition: total updated; true returned if valid int
 *                    else false returned
 *
 * CONSTANT MEMBER FUNCTION:
 *   int getTotal() const
 *     Precondition:   None
 *     Postcondition:  Private member value returned
 *
 * HELPER FUNCTION:
 *   bool validInt(int)
 *     Precondition:   Parameter is int or float data type
 *     Postcondition:  true returned if parameter and op(parameter, total)
 *                     within application allowable int range (0...INT_MAX)
 *
 */

#ifndef STEVEN_HUNT_ADDSUBMULT
#define STEVEN_HUNT_ADDSUBMULT

const int INT_MAX = 10;

namespace steven_hunt_A1{
   class AddSubMult {

   public:
      // Constructor
      AddSubMult();

      //Mutators
      bool addNum(int);
      bool subNum(int);
      bool multNum(int);

      //Constant member function
      int getTotal(void)const;

      //Helper method
      bool validInt(int); //validates if num is an int

   private: // hidden data from outside world
      int total; // current calculator amount
   };
}

#endif // STEVEN_HUNT_ADDSUBMULT
