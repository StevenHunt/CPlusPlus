// CIS 279 - Data Structures
// Topic: Abstract Data Types and C++ Classes
// Application: Calculator
// File: calculator.cpp

#include "calculator.h"
#include <climits>

namespace steven_hunt_A1{

   AddSubMult::AddSubMult():total(0)
   {
   }

   bool AddSubMult::addNum(int number)
   {
      if ( validInt(number) &&  validInt(total + number) )
      {
         total += number;
         return true;
      }
      else
      {
         return false;
      }

   }

   bool AddSubMult::subNum(int number)
   {
      if ( validInt(number) && validInt(total - number) )
      {
         total -= number;
         return true;
      }
      else
      {
         return false;
      }
   }

   bool AddSubMult::multNum(int number)
   {
      if (  validInt(number) && validInt(total * number) )
      {
         total *= number;
         return true;
      }
      else
      {
         return false;
      }

   }

   int AddSubMult::getTotal(void)const
   {
      return total;
   }

   bool AddSubMult::validInt(int number)
   {
      if ((number > 0) && (number <= INT_MAX))
        return true;
      return false;
   }
}//end namespace guard
