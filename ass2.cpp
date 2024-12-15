#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

// Class for student details
class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student() : rollNo(0), name(""), marks(0.0) {}

    void inputDetails() {
        cout << "Enter Roll Number: ";
        while (!(cin >> rollNo)) {
            cout << "Invalid input. Please enter a valid roll number: ";
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
        cin.ignore(); // To ignore the newline character after the integer input

        cout << "Enter Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        while (!(cin >> marks)) {
            cout << "Invalid input. Please enter valid marks: ";
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }
    }

    void displayDetails() const {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;
    }

    void saveToFile(ofstream &outfile) const {
        outfile << rollNo << endl;
        outfile << name << endl;
        outfile << marks << endl;
    }

    void loadFromFile(ifstream &infile) {
        infile >> rollNo;
        infile.ignore(); // To ignore the newline character after the integer input
        getline(infile, name);
        infile >> marks;
    }

    int getRollNo() const {
        return rollNo;
    }
};

// Function prototypes
void addStudent(const string &filename);
void displayAllStudents(const string &filename);
void searchStudent(const string &filename);

int main() {
    string filename = "students.txt";
    int choice;

    do {
        cout << "\nStudent Management System\n";
        cout << "1. Add Student (chose 1)\n";
        cout << "2. Display All Students(chose 2)\n";
        cout << "3. Search Student(chose 3)\n";
        cout << "4. Exit(chose 4)\n";
        cout << "Enter your choice: ";

        while (!(cin >> choice) || choice < 1 || choice > 4) {
            cout << "Invalid choice! Please enter a number between 1 and 4: ";
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        }

        switch (choice) {
            case 1:
                addStudent(filename);
                break;
            case 2:
                displayAllStudents(filename);
                break;
            case 3:
                searchStudent(filename);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
        }
    } while (choice != 4);

    return 0;
}

void addStudent(const string &filename) {
    Student student;
    student.inputDetails();

    ofstream outfile(filename, ios::app); // Open file in append mode
    if (!outfile) {
        cerr << "Error opening file for writing!" << endl;
        return;
    }

    student.saveToFile(outfile);
    outfile.close();
    cout << "Student details added successfully.\n";
}

void displayAllStudents(const string &filename) {
    ifstream infile(filename);
    if (!infile) {
        cerr << "Error opening file for reading!" << endl;
        return;
    }

    Student student;
    cout << "\nAll Student Records:\n";
    while (!infile.eof()) {
        student.loadFromFile(infile);
        if (infile) { // Check if the read was successful
            student.displayDetails();
        }
    }
    infile.close();
}

void searchStudent(const string &filename) {
    int rollNoToSearch;
    cout << "Enter Roll Number to search: ";
    while (!(cin >> rollNoToSearch)) {
        cout << "Invalid input. Please enter a valid roll number: ";
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }

    ifstream infile(filename);
    if (!infile) {
        cerr << "Error opening file for reading!" << endl;
        return;
    }

    Student student;
    bool found = false;
    while (!infile.eof()) {
        student.loadFromFile(infile);
        if (infile && student.getRollNo() == rollNoToSearch) {
            student.displayDetails();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with Roll Number " << rollNoToSearch << " not found.\n";
    }

    infile.close();
}