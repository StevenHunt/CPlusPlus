/*

Program: p19astrologyProgram.cpp
Name: Steven Hunt
Description: A program that asks for the users birthday ( day and month), then tells the zodiac sign that will be 
compatible with their sign.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{

    unsigned int date; // Users birthday ( day )
    unsigned int month; // Users birthday ( month )

    cout << "Enter your birthday (Month): ";
    cin >> month;

    cout << "Enter your birthday (Day): ";
    cin >> date;

    cout << endl;

    if (( date >= 20 && date < 31 && month == 1 ) || ( date <= 18 && date >= 1 && month == 2 )) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Aquarius!" << endl;
    cout << "Aquarius is compatible with: Gemini, Libra, and Aquarius!";
    }

    else if (( date >= 19 && date < 31 && month == 2 ) || ( date <= 20 && date >= 1 && month == 3 )) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Pisces!" << endl;
    cout << "Pisces is compatible with: Cancer, Scorpio, and Pisces!";
    }

    else if (( date >= 21 && date < 31 && month == 3 ) || ( date <= 19 && date >= 1 && month == 4)) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Aries!" << endl;
    cout << "Aries is compatible with: Aries, Leo, and Sagittarius!";
    }

    else if (( date >= 20 && date < 31 && month == 4) || ( date <= 20 && date >= 1 && month == 5)) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Taurus!" << endl;
    cout << "Taurus is compatible with: Taurus, Virgo, and Capricorn!";
    }

    else if (( date >= 21 && date < 31 && month == 5 ) || ( date <= 20 && date >= 1 && month == 6 )) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Gemini!" << endl;
    cout << "Gemini is compatible with: Gemini, Libra, and Aquarius!";
    }

    else if (( date >= 21 && date < 31 && month == 6) || ( date <= 22 && date >= 1 && month == 7 )) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Cancer!" << endl;
    cout << "Cancer is compatible with: Cancer, Scorpio, and Pisces!";
    }

    else if (( date >= 23 && date < 31 && month == 7 ) || ( date <= 22 && date >= 1 && month == 8 )) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Leo!" << endl;
    cout << "Leo is compatible with: Aries, Leo, and Sagittarius!";
    }

    else if (( date >= 23 && date < 31 && month == 8 ) || ( date <= 22 && date >= 1 && month == 9 )) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Virgo!" << endl;
    cout << "Virgo is compatible with: Taurus, Virgo, and Capricorn!";
    }

    else if (( date >= 23 && date < 31 && month == 9 ) || ( date <= 22 && date >= 1 && month == 10 )) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Libra!" << endl;
    cout << "Libra is compatible with: Gemini, Libra, and Aquarius!";
    }

    else if (( date >= 23 && date < 31 && month == 10 ) || ( date <= 21 && date >= 1 && month == 11 )) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Scorpio!" << endl;
    cout << "Scorpio is compatible with: Cancer, Scorpio, and Pisces!";
    }

    else if (( date >= 22 && date < 31 && month == 11 ) || ( date <= 21 && date >= 1 && month == 12 )) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Sagittarius!" << endl;
    cout << "Sagittarius is compatible with: Aries, Leo, and Sagittarius!";
    }

    else if (( date >= 22 && date < 31 && month == 12 ) || ( date <= 19 && date >= 1 && month == 1 )) {
    cout << "Your birthday '" << month << "/" << date << "' has a Zodiac Sign of Capricorn!" << endl;
    cout << "Capricorn is compatible with: Taurus, Virgo, and Capricorn!";
    }

    else {
    cout<<"Error! You have entered wrong input. " << endl;
    }

    return 0;

}


/* === OUTPUT ===

Enter your birthday (Month): 5
Enter your birthday (Day): 21

Your birthday '5/21' has a Zodiac Sign of Gemini!
Gemini is compatible with: Gemini, Libra, and Aquarius!


OR

Enter your birthday (Month): 1
Enter your birthday (Day): 4

Your birthday '1/4' has a Zodiac Sign of Capricorn!
Capricorn is compatible with: Taurus, Virgo, and Capricorn!

*/
