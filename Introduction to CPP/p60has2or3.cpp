/*
Program: p60has2or3.cpp
Name: Steven Hunt
Description:
- Given an int array and its size, return true only if the array contains a 2 or 3, unless the array has both then return false.
- Array size = sizeof(array) / sizeof(array[0])
*/

#include <iostream>
#include <algorithm>
using namespace std;

// Function Prototype:
bool has2or3(int n[], int size);
void showArray(int n[], int size);

int main() { // Start of main()

    // Array n[]
    int n[] = {7,3,5};

    // Initializing Variables:
    int arraySize =  sizeof(n) / sizeof(n[0]);

    // Output:
    showArray(n,arraySize);

    cout << "True or False: " << has2or3(n, arraySize); cout << endl;

}
// Function Definition:
bool has2or3(int n[], int size){ // Function checks to see if array contains a 2 or a 3 and returns accordingly.

    cout.setf(std::ios::boolalpha); // Allow bool to show 'true/false' and not '1/0'

    for (int i = 0; i < size; i++){
        if (n[i] == 3 && n[i] == 2){
            return false;
        }
        else if (n[i] == 3 || n[i] == 2){
            return true;
        }
        else{
            return false;
        }
    }
}

void showArray(int n[], int size) // Function to cleanly display the array.
{
    int i;
    cout << "Array = {";
    for (i = 0; i < size - 1; i++)
        cout << n[i] << ",";
    cout << n[i] << "}" << endl;
}

/* === OUTPUT ===

Sample 1:

Array = {4,5,6,7}
True or False: false

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue.

Sample 2:

Array = {4,2,3,5}
True or False: false

Process returned 0 (0x0)   execution time : 0.002 s
Press ENTER to continue.

Sample 3:

Array = {7,3,5}
True or False: true

Process returned 0 (0x0)   execution time : 0.001 s
Press ENTER to continue


*/
