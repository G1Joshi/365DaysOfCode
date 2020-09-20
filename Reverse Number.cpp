#include<iostream>
using namespace std;

int main()
{
    int num, rem, rev=0;
    cout<<"Enter Number: ";
    cin>>num;
    while(num)
    {
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    cout<<"Reverse: "<<rev;
    return 0;
}