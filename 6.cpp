#include <iostream>
using namespace std;

int main() {
    int* ptr;  // Pointer to an integer

    // Dynamically allocate memory for a single integer
    ptr = new int;
    cout<<"Practical no. 6"<<endl;
    // Input a value into the allocated memory
    cout << "Enter a number: ";
    cin >> *ptr;

    // Output the value stored at the allocated memory location
    cout << "You entered: " << *ptr << endl;

    // Deallocate the memory using delete
    delete ptr;

    cout << "Memory has been deallocated." << endl;

    return 0;
}
