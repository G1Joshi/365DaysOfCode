#include<iostream>
using namespace std;
int prime(int);

int main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    if(prime(num))
        cout<<"Prime Number";
    else
        cout<<"Not a Prime";
    return 0;
}
int prime(int num)
{
    for(int i=2; i*i<=num; i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}