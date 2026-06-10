// Program Title: Inline Function to Calculate Square of a Number
// This program demonstrates the use of an inline function in C++ to compute squares.

#include<iostream> 
using namespace std;

// Inline function to calculate square of a number
// Inline functions suggest the compiler to replace function call with function code
inline int square(int x){
    return x * x;
}

int main(){
    // Calculate and display square of 5
    cout << "square of 5 is: " << square(5) << endl;

    // Calculate and display square of (6 + 1)
    // Expression (6+1) is evaluated first, then passed to the function
    cout << "square of (6+1) is: " << square(6+1) << endl;

    return 0;
}