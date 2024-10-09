#include<iostream>
using namespace std;
void printchar(char ch='%',int n=22)
{
    for(int i=0;i<n;i++)
    {
        cout<<ch;
    }
    cout<<endl;
}
int main()
{
    printchar();
    return 0;
}