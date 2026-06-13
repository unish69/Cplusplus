#include<iostream>
using namespace std;

/* 
   Title: Write a C++ program that calculates the area of shapes
   using function overloading and default arguments.
*/

// Function to calculate area of a circle
// Uses default argument (radius = 1 if no value is passed)
double area(double radius = 1){
    return 3.14159 * radius * radius;
}

// Function to calculate area of a rectangle
// Takes two parameters: length and breadth
double area(double length, double breadth){
    return length * breadth;
}

int main(){

    // Calling circle function using default argument
    // Since no value is passed, radius = 1 is used
    cout << "Area of Circle is (using default argument 1): " 
         << area() << endl;

    // Calling rectangle function by passing length and breadth
    cout << "Area of Rectangle is: " 
         << area(5.0, 10.0) << endl;

    return 0;
}