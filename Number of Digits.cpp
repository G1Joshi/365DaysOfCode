#include<iostream>
using namespace std;

int main()
{
    int num, count=0;
    cout<<"Enter Number: ";
    cin>>num;
    while(num)
    {
        count++;
        num/=10;
    }
    cout<<"Number of digits: "<<count;
    return 0;
}