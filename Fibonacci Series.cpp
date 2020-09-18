#include<iostream>
using namespace std;

int main()
{
    int num, fact=1;
    cout<<"Enter Number: ";
    cin>>num;
    int a=0, b=1, c;
    cout<<"Factorial is: "<<a<<" "<<b<<" ";
    for(int i=0; i<num; i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    return 0;
}