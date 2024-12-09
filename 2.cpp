#include <iostream>
using namespace std;

// Define a simple class
class Student {
public:
    string name;  // Public member variable
    int age;      // Public member variable

    // Member function to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Create an object of the Student class
    Student student;
    cout<<"practical no. 2"<<endl;  
    // Assign values to the object
    student.name = "Alice";
    student.age = 20;

    // Display student details using the member function
    student.displayDetails();

    return 0;
}

