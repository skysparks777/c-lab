#include <iostream>
using namespace std;

class A {
public:
    int dm1, dm2;
     A() : dm1(0), dm2(0) {} // Default constructor
     A(int i, int j) : dm1(i), dm2(j) {}// Parameterized constructor
    void fun1() {
        cout << "Function 1 of class A" << endl;
    }
    void fun2() {
        cout << "Function 2 of class A" << endl;
    }
};

class B : public A {
public:
    int dm3;
    B() : dm3(0) {}// Default constructor
    B(int a, int b, int c) : A(a, b), dm3(c) {}// Parameterized constructor
    void fun3() {
        cout << "Function 3 of class B" << endl;
    }
    void fun1() {
        cout << "Function 1 overridden in class B" << endl;
    }
    void fun4() {
        cout << "Function 4 of class B" << endl;
    }
};

int main() {
    A objA(0, 0);
    B objB(0, 0, 0);
    objA.fun1();
    objA.fun2();
    objB.fun1();
    objB.fun2();
    objB.fun3();
    objB.fun4();
    objB.A::fun2();

    return 0;
}
