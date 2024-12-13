#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers (overloaded function)
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two floating-point numbers (overloaded function)
float add(float a, float b) {
    return a + b;
}

int main() {
    int x = 5, y = 10, z = 15;
    float p = 2.5f, q = 3.5f;
    cout<<"Practical no. 7"<<endl;
    // Calling different overloaded functions
    cout << "Sum of two integers: " << add(x, y) << endl;
    cout << "Sum of three integers: " << add(x, y, z) << endl;
    cout << "Sum of two floating-point numbers: " << add(p, q) << endl;

    return 0;
}
