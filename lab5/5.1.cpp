
// function outside the class 9-10-2024 //

#include <iostream>
using namespace std;

class SwimmingC
{
public:
    string name;
    int oldC;
    int age;
    string no;

    // Default constructor
    SwimmingC() : name(""), oldC(0), age(0), no("") 
    {}

    // Parameterized constructor
    SwimmingC(string n, int o, int a, string X) : name(n), oldC(o), age(a), no(X) 
    {}

    // Method for input
    void input_form()
    {
        cout << "Enter the details for swimming competition: \n";
        cout << "Enter your full name: ";
        cin>>name;
        cout << "Enter the number of competitions participated in previously: ";
        cin >> oldC;
        cout << "Enter your current legal age: ";
        cin >> age;
        cout << "Assurance you don't take steroids (yes I don't (y)/no I do (n)): ";
        cin >> no;
    }
    void show_details()
    {
        cout << "Details you entered for the swimming competition: \n";
        cout << "Name: " << name << endl;
        cout << "Number of competitions participated in previously: " << oldC << endl;
        cout << "Legal age: " << age << endl;
        cout << "Steroids assurance: " << no << endl;
    }
};

// Function to update competition data
void update_compD(SwimmingC &p, int newOldC)
{
    p.oldC = newOldC;
}

int main()
{
    SwimmingC p1("abc", 20, 16, "n"), p2;
    p1.show_details();
    update_compD(p1, 21,"y");
    p1.show_details();

    return 0;
}
