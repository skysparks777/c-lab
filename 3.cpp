#include <iostream>
using namespace std;

// Define the Book class
class Book {
private:
    string title;
    string author;

public:
    // Constructor to initialize the title and author
    Book(string t, string a) {
        title = t;
        author = a;
        cout << "Book Created: " << title << " by " << author << endl;
    }

    // Destructor to display message when object is destroyed
    ~Book() {
        cout << "Book Destroyed: " << title << endl;
    }

    // Method to display book details
    void displayDetails() {
        cout << "Title: " << title << ", Author: " << author << endl;
    }
};

int main() {
    cout<<"Practical no.3"<<endl;
    // Create a Book object, invoking the constructor
    Book book1("1984", "George Orwell");

    // Display book details
    book1.displayDetails();

    // When the object goes out of scope, the destructor is automatically called
    return 0;
}
