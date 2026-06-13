// Program to check whether a student has passed or failed

#include <iostream>
#include <string>

using namespace std;

// Inline function to determine pass or fail status
inline void student(string name, int marks) {
    
    // Check if marks are 40 or above
    if (marks >= 40) {
        cout << name << " passed" << endl;
    }
    else {
        cout << name << " failed" << endl;
    }
}

int main() {

    // Declare variables for student name and marks
    string nam;
    int mark;

    // Input student's name
    cout << "Enter Student First Name: ";
    getline(cin, nam);

    // Input student's marks
    cout << "Enter Marks (0-100): ";
    cin >> mark;

    // Call function to check result
    student(nam, mark);

    // Pause the screen before closing (Windows only)
    system("pause");

    // End of program
    return 0;
}