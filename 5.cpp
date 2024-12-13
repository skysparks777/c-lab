#include <iostream>
using namespace std;

// Forward declaration of the friend function
class Box;
void printVolume(Box &b);

// Class Box
class Box {
private:
    double length;
    double width;
    double height;

public:
    // Constructor to initialize the box's dimensions
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Declaring the printVolume function as a friend
    friend void printVolume(Box &b); 
};

// Friend function definition
void printVolume(Box &b) {
    double volume = b.length * b.width * b.height;
    cout << "Volume of Box: " << volume << endl;
}

int main() {
    cout<<"Practical no. 5"<<endl;
    // Create an object of Box class
    Box box(5.0, 3.0, 2.0);

    // Call the friend function to access private members of Box class
    printVolume(box);

    return 0;
}
