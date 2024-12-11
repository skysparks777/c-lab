#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Method to be inherited by derived classes
    void speak() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overriding the speak method in the derived class
    void speak() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    cout<<"practical no. 4"<<endl;
    // Create an object of the base class
    Animal animal;
    animal.speak();  // Calls base class method

    // Create an object of the derived class
    Dog dog;
    dog.speak();  // Calls derived class method

    return 0;
}
