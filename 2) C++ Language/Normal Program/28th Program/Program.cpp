#include <iostream>
using namespace std;
void intro()
{
    cout << "\n---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n";
}
template <typename t>
void max(t &num1, t &num2)
{
    (num1 > num2) ? cout << num1 << " is greater\n" : cout << num2 << " is greater\n";
}
template <typename t>
void min(t &num1, t &num2)
{
    (num1 > num2) ? cout << num2 << " is smaller\n" : cout << num1 << " is smaller\n";
}
int main()
{
    intro();
    string a, b;
    cout << "Enter 1 number : ";
    cin >> a;
    cout << "Enter 2 number : ";
    cin >> b;
    cout << "\n\n";
    max(a, b);
    min(a, b);
    return 0;
}