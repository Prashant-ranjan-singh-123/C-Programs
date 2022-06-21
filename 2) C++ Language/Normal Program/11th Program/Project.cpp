#include <iostream>
#include <math.h>
using namespace std;
class MathsOperation
{
private:
    long int x, y, r;

public:
    MathsOperation()
    {
        cout << "Please enter he value of x: ";
        cin >> x;
        cout << "Please enter he value of y: ";
        cin >> y;
    }
    void display()
    {
        cout << r << endl;
    }
    void addition()
    {
        r = 0;
        r = x + y;
        cout << "1) X + Y = ";
        display();
    }
    void multiply()
    {
        r = 0;
        r = x * y;
        cout << "2) X * Y = ";
        display();
    }
    void power()
    {
        r = 0;
        r = pow(double(x), y);
        cout << "3) X^Y = ";
        display();
    }
};
void Decoration()
{
    cout << "\n\n-----------------------------------------------------------------------------------------------------------------------\n";
    cout << "**********This program will do mathmatical operations with the help of function made by Prashant Ranjan Singh**********\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------\n\n";
}
void result()
{
    cout << "\n\n--------------------------------------\n";
    cout << "****************Result****************";
    cout << "\n--------------------------------------\n\n";
}
void End()
{
    cout << "\n\n\t\t\t-----------------------\n";
    cout << "\t\t\t**********END**********";
    cout << "\n\t\t\t-----------------------\n";
}
int main()
{
    Decoration();
    MathsOperation math;
    result();
    math.addition();
    math.multiply();
    math.power();
    End();
    return 0;
}
