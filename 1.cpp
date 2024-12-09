#include <iostream>
using namespace std;

int main() {
    int num = 10;  // Declare an integer variable
    int *ptr = &num;  // Declare a pointer and store the address of num
     cout<<"practical no. 1"<<endl;   
    // Display the value and address
    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;

    // Access value using pointer
    cout << "Value using pointer: " << *ptr << endl;

    // Modify value using pointer
    *ptr = 20;
    cout << "Modified value of num: " << num << endl;

    return 0;
}

