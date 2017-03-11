/*
Program: p67finalExam.cpp
Name: Steven Hunt
Description: A program that makes an array of 25 random integers each from 3 to 7.

1. shows the original array,
2. shows the array in reverse,
3. shows the lowest value in the array,
4. shows the highest value in the array,
5. shows the sum of all numbers in the array,
6. shows the average of all number in the array
7. shows how many times the number 5 appears in the array
8. shows the difference between the First and Last elements of the array
9. shows the elements of the array before a specified index
10. shows the message "I am now done with CSS1! :)"
*/

#include <iostream> // Library used for standard input / output stream objects
#include <cstdlib> // Library used for random number generator
#include <ctime> // Library used for to get and maipulate date and time information
using namespace std;

// FUNCTION PROTOTYPES:
int randInt (int min, int max);
void showArray (int a[], int size);
void showReverse (int a[], int size);
int lowest (int a[], int size);
int highest (int a[], int size);
int sumArray (int a[], int size);
float averageVal (int a[], int size);
int count5 (int a[], int size);
int firstMinusLast (int a[], int size);
void showBeforeIndex(int a [], int size, int index);
void done ();

int main () // Start of main() function
{
    // Seeding random number generator with time 0.
    srand(time(0));

    // Initializing Variables and Array:
    const int y = 26;
    int a[y];

    cout << "Making an array of 25 random integers from 3 to 7!";

    // Calling Functions:
    cout << string(2,'\n'); showArray(a,y);
    cout << string(2,'\n'); showReverse(a,y);
    cout << string(2,'\n'); lowest(a,y);
    cout << string(2,'\n'); highest(a,y);
    cout << string(2,'\n'); sumArray(a,y);
    cout << string(2,'\n'); averageVal(a,y);
    cout << string(2,'\n'); count5(a,y);
    cout << string(2,'\n'); firstMinusLast(a,y);
    cout << string(2,'\n'); showBeforeIndex(a,y,4);
    cout << string(2,'\n'); done();
    cout << string(2,'\n');
}

// Function Definitions:

// Function that returns random numbers between max and min:
int randInt( int min, int max){
    return rand() % (max - min) + min;
}

// Function that shows the array in the format "int a [] = { 3, 7, 4, ... ,5, 6, 3, 4, 7 } "
void showArray(int a[], int size){
    int i;
    cout << "Original Array a[]: {";
    for (i = 0; i < size - 1; i++){
        int n = randInt(3,8);
            a[i] = n;
        cout << a[i] << ",";
    }
    cout << "}";
}

// Function that shows the array in reverse using the format "int a [] = { 7, 4, 3, 6, 5, ... , 4, 7, 3 } "
void showReverse(int a[], int size){
    int temp;
    int i;
    for (i = 0; i < size/2; ++i){
        temp = a[size-i-1];
        a[size-i-1] = a[i];
        a[i] = temp;
    }
    cout << "Reversed Array a[]: {";
    for (i = 1; i < size; ++i){
        cout << a[i] << ",";
    }
    cout << "}";
}

// Function that finds and returns the lowest value in the array:
int lowest(int a[], int size){
    int low = a[25];
    for (int i = 1; i < size; i++){
        if (low > a[i])
            low = a[i];
    }
    cout << "The lowest value is: " << low;
}

// Function that finds and returns the highest value in the array:
int highest ( int a[], int size ){
    int high = a[0];
    for (int i = 1; i < size; i++){
        if(high < a[i])
            high = a[i];
   }
  cout << "The highest value is: " << high;
}

// calculates and returns the sum of all values in the array:
int sumArray ( int a[], int size ){
    int sum = 0;
    for (int i = 1; i < size; i++){
        sum += a[i];
    }
    cout << "The sum of the array values is: " << sum;
}

// calculates and returns the average of all values in the array:
float averageVal ( int a[], int size ){
    float sum = 0;
    for (int i = 1; i < size; i++){
        sum += a[i];
    }
    float average = sum/25;
    cout << "The average of the array values is: " << average;
}

// Function that returns how many times the number 5 appears in the array:
int count5 ( int a[], int size ){
 int counter = 0;
    for (int i = 0; i < size; i++){
        if(a[i] == 5)
            counter ++;
    }
    cout << "The number 5 appears " << counter << " times.";
}

// Function that returns the difference between the First Array Element - Last Array Element:
int firstMinusLast ( int a[], int size ){
    int firstLast = a[25] - a[1];
    cout << "The first array element (" << a[25] << ") - the last array element (" << a[1] << ") is: " << firstLast;
}

// Function that shows all the array values before a specified index:
void showBeforeIndex( int a[], int size, int index){

    cout << "The array values before index " << index << " are: {" << a[index + 21] << ", " << a[index + 20] << ", " <<  a[index + 19] << "}";
}

// Function that shows message:
void done (){
    cout << "I am now done with CSS1! :)" << string(2,'\n');
    cout << "Thanks for the help!";
}

/* === OUTPUT ===

Making an array of 25 random integers from 3 to 7!

Original Array a[]: {4,5,6,7,5,4,6,3,4,4,3,3,3,3,4,4,5,6,6,5,5,3,4,6,7,}

Reversed Array a[]: {7,6,4,3,5,5,6,6,5,4,4,3,3,3,3,4,4,3,6,4,5,7,6,5,4,}

The lowest value is: 3

The highest value is: 7

The sum of the array values is: 115

The average of the array values is: 4.6

The number 5 appears 5 times.

The first array element (4) - the last array element (7) is: -3

The array values before index 4 are: {4, 5, 6}

I am now done with CSS1! :)

Thanks for the help!


Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

*/
