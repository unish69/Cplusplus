#include<iostream>
#include<cstring>
using namespace std;

// Class to represent a Student
class Students{
    public:
    
    // Static variable to count total number of students
    static int studentcount;
    
    char name[50]; // Student name
    int roll;      // Student roll number

    // Constructor - automatically called when object is created
    Students(){
        studentcount++; // Increment count every time a new student is created
    }
};

// Initialize static variable outside the class
int Students::studentcount = 0;

int main(){
    // Creating first student object
    Students s1;
    strcpy(s1.name, "UNISH"); // Assign name
    s1.roll = 1;              // Assign roll number

    // Creating second student object
    Students s2;
    strcpy(s2.name, "HSINU"); // Assign name
    s2.roll = 2;              // Assign roll number

    // Display total number of students
    cout<<"Number of students is: "<<Students::studentcount<<endl;
    
    // Display name and roll of each student
    cout<<"Name and roll of student 1 is: "<<s1.name<<"  "<<s1.roll<<endl;
    cout<<"Name and roll of student 2 is: "<<s2.name<<" "<<s2.roll<<endl;

    return 0;
}