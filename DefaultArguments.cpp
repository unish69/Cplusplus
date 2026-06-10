//"Demonstration of Default Arguments in C++ Functions"
#include<iostream>
using namespace std;

// Function with default arguments
// If no arguments are passed, c = '*' and count = 3 will be used
void display(char c='*', int count = 3){
    // Loop runs 'count' times
    for(int i=1; i<=count; ++i){
        cout << c;   // prints the character 'c'
    }
}

int main(){
    int count = 5;  // local variable used when passing argument

    // Case 1: No arguments passed
    // Uses default values: c='*', count=3
    cout << "NO ARGUMENT PASSED: ";
    display();

    cout << endl;

    // Case 2: Only first argument passed
    // c='#', count still uses default value = 3
    cout << "FIRST ARGUMENT PASSED: ";
    display('#');

    cout << endl;

    // Case 3: Both arguments passed
    // c='$', count=5 (value of local variable)
    cout << "BOTH ARGUMENT PASSED: ";
    display('$', count);

    cout << endl;

    return 0;
}