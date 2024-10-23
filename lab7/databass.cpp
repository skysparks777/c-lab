#include<iostream>
using namespace std;
class person
{   public:
    string name;
    int age;
    string dob;
    person():name("NA"),age(0),dob("NA")
    {}
    person(string n,int a,string d ):name(n),age(a),dob(d)
    {}
    void get_pdetails()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter dob:";
        cin>>dob;
    }
    void show_pdetails()
    {   cout<<"Printing the details:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Dob:"<<dob<<endl;
    }
};
class student:public person
{public:
int regno;
string semester;
float cgpa;

void get_sdetails()
{
    get_pdetails();
    cout<<"Enter Regno:";
    cin>>regno;
    cout<<"Enter  semester:";
    cin>> semester;
    cout<<"Enter  CGPA:";
    cin>> cgpa;
}
void show_sdetails()
{
    show_pdetails();
    cout<<"Regno is:"<<regno<<endl;
     cout<<"Semester is:"<< semester<<endl;
    cout<<"CGPA is:"<< cgpa<<endl;
}
};
class teacher:public person
{public:
int emid;
string subject;
int salary;

void get_tdetails()
{
    get_pdetails();
    cout<<"Enter emid :";
    cin>>emid;
    cout<<"Enter subject:";
    cin>> subject;
    cout<<"Enter  salary :";
    cin>> salary;
}
void show_tdetails()
{
    show_pdetails();
     cout<<"Enter emid :"<<emid<<endl;
    cout<<"Enter subject:"<<subject<<endl;
    cout<<"Enter  salary :"<<salary<<endl;
}
};
int main()
{
    student s1;
    s1.get_sdetails();
    s1.show_sdetails();
    teacher t1;
    t1.get_tdetails();
    t1.show_tdetails();
}