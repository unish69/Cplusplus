// Program Title: Inline Function to Find Maximum of Two Numbers
// This program demonstrates the use of an inline function in C++ to find the maximum of two numbers.

#include<iostream>
using namespace std;

// Inline function to return the maximum of two numbers
// The ternary operator (condition ? true_value : false_value) is used here
inline int max(int a, int b){
    return (a > b) ? a : b;
}

int main(){
    // Find and display maximum of 10 and 20
    cout << max(10, 20) << endl;

    // Find and display maximum of 100 and 50
    cout << max(100, 50) << endl;

    return 0;
}