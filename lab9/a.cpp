/// 20-11-2024

#include <iostream>
#include <string>
using namespace std;

// Class definition for Student
class Student {
    string name;
    int rollno;

public:
    void get_details() {
        cout << "Enter Name: ";
        cin.ignore(); // Clear input buffer
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollno;
    }

    void show_details() const {
        cout << "Name: " << name << ", Roll No: " << rollno << endl;
    }
};

int main() {
    // Static object
    Student s1;
    cout << "Enter details for static object:\n";
    s1.get_details();
    cout << "\nStatic Object Details:\n";
    s1.show_details();

    // Dynamic object
    Student* ptr = new Student;
    cout << "\nEnter details for dynamic object:\n";
    ptr->get_details();
    cout << "\nDynamic Object Details:\n";
    ptr->show_details();
    delete ptr; // Freeing up memory

    return 0;
}

