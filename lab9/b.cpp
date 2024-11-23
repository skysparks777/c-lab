/// 20-11-2024

#include <iostream>
#include <string>
using namespace std;
class Student {
    string name;
    int rollno;

public:
    void get_details() {
        cout << "Enter Name: ";
        cin.ignore(); 
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollno;
    }

    void show_details() const {
        cout << "Name: " << name << ", Roll No: " << rollno << endl;
    }
};

int main() {
    int num;
    cout << "Enter the number of students: ";
    cin >> num;

    // Dynamic array of objects
    Student* students = new Student[num];

    cout << "\nEnter details for each student:\n";
    for (int i = 0; i < num; ++i) {
        cout << "Student " << i + 1 << ":\n";
        students[i].get_details();
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < num; ++i) {
        cout << "Student " << i + 1 << ": ";
        students[i].show_details();
    }

    delete[] students; // Freeing up memory
    return 0;
}
