#include<iostream>
using namespace std;

int main()
{
    int n, num, rev=0;
    cout<<"Enter Number: ";
    cin>>n;
    num=n;
    while(n)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    if(rev==num)
        cout<<"Palindrome Number";
    else
        cout<<"Not a palindrome";
    return 0;
}