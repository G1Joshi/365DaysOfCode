#include<iostream>
using namespace std;

int main()
{
    int num, n, r, sum=0;
    cout<<"Enter Number: ";
    cin>>num;
    n=num;
    while(n)
    {
        r=n%10;
        sum+=(r*r*r);
        n=n/10;
    }
    if(num==sum)
        cout<<"Armstrong Number";
    else
        cout<<"Not a Armstrong";
    return 0;
}