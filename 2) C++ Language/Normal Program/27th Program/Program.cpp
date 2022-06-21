#include <iostream>
using namespace std;
void intro()
{
    cout << "\n---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n";
}
template <class R>
R addition(R c_1, R c_2)
{
    R c_3;
    c_3 = c_1 + c_2;
    return c_3;
}
int main()
{
    intro();
    int a, b;
    float a_1, a_2;
    cout << "Enter the value of A: ";
    cin >> a;
    cout << "Enter the value of B: ";
    cin >> b;
    cout << "Sum: " << addition(a, b) << endl;
    cout << "\n\nEnter the value of C: ";
    cin >> a_1;
    cout << "Enter the value of D: ";
    cin >> a_2;
    cout << "Sum: " << addition(a_1, a_2) << endl;
    return 0;
}
