#include <iostream>
using namespace std;
void factorial_calculator()
{
    int num;
    unsigned long long int sum = 1;
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Invalid Argument";
    }
    else if (num == 0)
    {
        sum = 0;
        cout << "Factorial of " << num << " is: " << sum;
    }
    else if (num <= 65)
    {
        for (int i = 1; i <= num; i++)
        {
            sum = sum * i;
        }
        cout << "Factorial of " << num << " is: " << sum;
    }
    else
    {
        cout << "This program cant calculate factorial smaller then 0 and larger then 65";
    }
}
int main()
{
    factorial_calculator();
    return 0;
}