#include <iostream>
using namespace std;
void symbol()
    {
        for(int i=0 ; i<20; i++)
        {
            cout<<"#"<<endl;
        }
    }
void symbol(char c)
{
    for(int i=0 ; i<20; i++)
        {
            cout<<"#"<<endl;
        }
}
void symbol(char c, int a)
{
    for(int i=0 ; i<20; i++)
        {
            cout<<"#"<<endl;
        }
}
int main()
{
    char b;
    symbol();
    cout<<"enter the character"<<endl;
    cin>>b;
    symbol(b);
    int x;
    cout<<"Enter the character and no. of time to be printed"<<endl;
    cin>>b;
    b<<x;
    symbol(b,x);
return 0;
}