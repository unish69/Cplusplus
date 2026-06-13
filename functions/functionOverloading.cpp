#include <iostream>
using namespace std;

// Title: Demonstration of Function Overloading to Calculate Area

// Function to calculate area of a circle
// Takes one argument: radius
double area(double radius){
    // Area of circle = π * r^2
    return 3.14159 * radius * radius;
}

// Function to calculate area of a rectangle
// Takes two arguments: length and breadth
double area(double length, double breadth){
    // Area of rectangle = length * breadth
    return length * breadth;
}

int main(){
    // Calculate and display area of a circle with radius 5
    cout << "AREA OF CIRCLE WHEN RADIUS = 5 IS " << area(5.0) << endl;

    // Calculate and display area of a rectangle with length 4 and breadth 5
    cout << "AREA OF RECTANGLE WHEN LENGTH = 4 AND BREADTH = 5 IS " << area(4.0, 5.0) << endl;

    return 0;
}