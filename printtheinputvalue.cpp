// Program to input and display a number

#include <iostream>
using namespace std;

int main() {

    // Declare a variable to store the number
    int a;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> a;

    // Display the entered number
    cout << "The number is: " << a << endl;

    // Pause the screen before closing (Windows only)
    system("pause");

    // End of program
    return 0;
}