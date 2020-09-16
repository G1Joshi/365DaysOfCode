#include<iostream>
using namespace std;

int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%i", &number);
    if(number%2)
        printf("%d is odd number\n", number);
    else
        printf("%d is even Number\n", number);
    return 0;
}