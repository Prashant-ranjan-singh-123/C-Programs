// date : 26-08-2021
// lab1
// ex2- add/subtract/multiply/divide

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum, product, difference, division;
    // num1=2;
    // num2=10;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    cout << "\nSum = " << sum;

    difference = num1 - num2;
    cout << "\nDifference = " << difference;

    product = num1 * num2;
    cout << "\nProduct = " << product;

    division = num1 / num2;
    cout << "\nDivision = " << division;
    return 0;
}
