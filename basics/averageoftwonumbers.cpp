// Program to find the average of two numbers

#include <iostream>

using namespace std;

int main() {
    // Declare variables to store the two numbers and their average
    float a, b, c;

    // Take the first number as input
    cout << "ENTER FIRST NUMBER: ";
    cin >> a;

    // Take the second number as input
    cout << "ENTER SECOND NUMBER: ";
    cin >> b;

    // Calculate the average of the two numbers
    c = (a + b) / 2;

    // Display the calculated average
    cout << "AVERAGE IS = " << c << endl;

    // Pause the screen before closing (Windows only)
    system("pause");

    // Indicate successful program execution
    return 0;
}