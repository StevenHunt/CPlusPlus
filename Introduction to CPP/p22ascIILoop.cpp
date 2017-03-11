/*

Program: p22ascIILoop.cpp
Name: Steven Hunt
Description:
- A program that displays the characters in the ASCII table from ! to ~ ( 33 - 126 )
- It diplays 10 characters per line and the characters are seperated by exactly once space

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{
    int asciiNumber; // ASCII Number variable
    char asciiCharacter = asciiNumber;

    /*
    - Start ASCII at ! = 33
    - Start counter for line control at 0
    - End ASCII at ~ = 126
    - Increase both counter and ASCII characters by 1
    */
    for ( char asciiCharacter = 33, counter = 0; asciiCharacter < 127; asciiCharacter++, counter++)
    {

        if (counter == 10) // Once the counter reaches 10 characters, start printing a new line
        {
            counter = 0;
            cout << endl;
        }

        cout << setw(2) << asciiCharacter; // Print ASCII characters, padded by 2.

    }

    return 0;

}

/* === OUTPUT ===

 ! " # $ % & ' ( ) *
 + , - . / 0 1 2 3 4
 5 6 7 8 9 : ; < = >
 ? @ A B C D E F G H
 I J K L M N O P Q R
 S T U V W X Y Z [ \
 ] ^ _ ` a b c d e f
 g h i j k l m n o p
 q r s t u v w x y z
 { | } ~

*/
