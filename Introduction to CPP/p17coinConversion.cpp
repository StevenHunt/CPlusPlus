/*

Program: p17coinConversion.cpp
Name: Steven Hunt
Description: A program that will convert any given number of total cents ( under 100 ), into the correct number of: 
quarters, dime, nickels, and pennies.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main ()

{

    int totalCoins; // Total amount of coins inputed by user
    int q; // Quarters
    int d; // Dimes
    int n; // Nickels
    int p; // Pennies

    cout << "Please enter the number of coins (under 100): "; // User inputs amount of coins
    cin >> totalCoins; // Assigning totalCoin variable to users input

    cout << endl; // Space

    //Number of Quarters
    q = totalCoins / 25; // integar division, cuts off the decimal
    if (q>0){
        cout << "# of Quarters: " << q << " x 25c = " << q*25 << " cents total! " << endl; // Output
        totalCoins = totalCoins - q*25; // Decreaseing totalCoins after Quarters accounted for
    }

    // Number of Dimes
      d = totalCoins / 10; // integar division, cuts off the decimal
    if (d>0){
        cout << "# of Dimes: " << d << " x 10c    = " << d*10 << " cents total! " << endl; // Output
        totalCoins = totalCoins - d*10; // Decreaseing totalCoins after Dimes accounted for
    }

    // Number of Nickels
      n = totalCoins / 5; // integar division, cuts off the decimal
    if (n>0){
        cout << "# of Nickels: " << n << " x 5c   = " << n*5 << " cents total! " << endl; // Output
        totalCoins = totalCoins - n*5; // Decreaseing totalCoins after Nickels accounted for
    }

    // Number of Pennies
      p = totalCoins / 1; // integar division, cuts off the decimal
    if (p>0){
        cout << "# of Pennies: " << p << " x 1c   = " << p*1 << " cents total! " << endl; // Output
        totalCoins = totalCoins - p*1; // Decreaseing totalCoins after Pennies accounted for

    }


    return 0;


}

/* === OUTPUT ===

Please enter the number of coins (under 100): 93

# of Quarters: 3 x 25c = 75 cents total!
# of Dimes: 1 x 10c    = 10 cents total!
# of Nickels: 1 x 5c   = 5 cents total!
# of Pennies: 3 x 1c   = 3 cents total!

OR

Please enter the number of coins (under 100): 39

# of Quarters: 1 x 25c = 25 cents total!
# of Dimes: 1 x 10c    = 10 cents total!
# of Pennies: 4 x 1c   = 4 cents total!

OR

Please enter the number of coins (under 100): 8

# of Nickels: 1 x 5c   = 5 cents total!
# of Pennies: 3 x 1c   = 3 cents total!

OR

Please enter the number of coins (under 100): 50

# of Quarters: 2 x 25c = 50 cents total!

*/
