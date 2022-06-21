// date :26-08-2021
// lab1
// ex3- fcatorial of number
#include <iostream>
using namespace std;
int main()
{
    int num,fact=1;
    cout<<"Enter number to calculate its factorial : ";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        fact*=i;
    }
    cout<<"Factorial of "<<num<<" is "<<fact;
    return 0;
}
 