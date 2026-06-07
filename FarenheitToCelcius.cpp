// Program to convert temperature from Fahrenheit to Celsius

#include <iostream>

using namespace std;

int main() {

    // Variable declaration
    int fahrenheit;
    float celsius;

    // Input Fahrenheit temperature
    cout << "ENTER TEMPERATURE IN FAHRENHEIT: ";
    cin >> fahrenheit;

    // Convert to Celsius
    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    // Output Celsius temperature
    cout << "CELSIUS = " << celsius << endl;

    return 0;
}