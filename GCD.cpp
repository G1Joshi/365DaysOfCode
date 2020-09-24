#include<iostream>
using namespace std;
int gcd(int, int);

int main()
{
    int a, b;
    cout<<"Enter two Numbers: ";
    cin>>a>>b;
    cout<<"GCD: "<<gcd(a, b);
    return 0;
}
int gcd(int a, int b)
{
    return !(a%b) ? b : gcd(b, a%b);
}