/*
Program: p66classExample.cpp
Name: Steven Hunt
Description: Class Example
*/

#include <iostream>
#include <iomanip>
using namespace std;

class DayOfYear{
    public:
        void output();
        int month;
        int day;
};

void DayOfYear::output(){
    cout << "Month: " << month << ", Day: " << day << "\n\n";
}

int main(){
    DayOfYear today, birthday;

    cout << "Enter todays date (Number format): \n\n";

    cout << "Month: ";
        cin >> today.month;
    cout << "Day: ";
        cin >> today.day;

    cout << "Today's date: \n";
    today.output();

    cout << "Enter your birthday (Number format): \n\n";

    cout << "Month: ";
        cin >> birthday.month;
    cout << "Day: ";
        cin >> birthday.day;

    cout << "Your birthday is: \n";
    birthday.output();

    if (today.month == birthday.month && today.day == birthday.day)
        cout << "Happy Birthday!! \n\n";
    else
        cout << "Happy Unbirthday!! \n\n";

    return 0;
}


/* === OUTPUT ===

Enter todays date (Number format):

Month: 05
Day: 21
Today's date:
Month: 5, Day: 21

Enter your birthday (Number format):

Month: 05
Day: 21
Your birthday is:
Month: 5, Day: 21

Happy Birthday!!


Process returned 0 (0x0)   execution time : 6.305 s
Press ENTER to continue.
*/
