/*
    Program name: p2output.cpp
    Student name: Steven Hunt
    Description: Write a program that prints out "CS!" in large block letters inside a border of *** followed,
    by two blank lines and the message "Computer Science is Cool Stuff" as shown below:
    
************************************************

            C C C           S S S          !
          C       C        S     S         !
         C                S                !
        C                  S               !
        C                   S S S S        !
        C                          S       !
         C                S        S       !
          C               S       S
            C C C           S S S          O

*************************************************

            Computer Science is Cool Stuff!!
*/

#include <iostream>
using namespace std;

int main()                                                                  // Program starts
{
    cout << " ************************************************* " << endl ; // endl shows a new line
    cout << "\n" ;                                                          // \n shows a new line
    cout << "        C C C           S S S          !  \n" ;
    cout << "      C       C        S     S         !  \n" ;
    cout << "     C                S                !  \n" ;
    cout << "    C                  S               !  \n" ;
    cout << "    C                   S S S S        !  \n" ;
    cout << "    C                          S       !  \n" ;
    cout << "     C                S        S       !  \n" ;
    cout << "      C               S       S           \n" ;
    cout << "        C C C           S S S          O  \n" ;
    cout << "\n" ;
    cout << " ************************************************** " ;
    cout << endl ;
    cout << "        Computer Science is Cool Stuff!!     " ;

    return 0;                                                               // End of program
}


/* === OUTPUT ===

 *************************************************

        C C C           S S S          !
      C       C        S     S         !
     C                S                !
    C                  S               !
    C                   S S S S        !
    C                          S       !
     C                S        S       !
      C               S       S
        C C C           S S S          O

 **************************************************

        Computer Science is Cool Stuff!!

 */
