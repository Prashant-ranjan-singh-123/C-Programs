#include <iostream>
using namespace std;
void intro()
{
    cout << "\n---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n";
}
class Height
{
public:
    int feet, inch;
    Height()
    {
        feet = 0;
        inch = 0;
    }
    Height(int f, int i)
    {
        feet = f;
        inch = i;
    }
    Height operator+(Height &d2)
    {
        Height h3;
        h3.feet = feet + d2.feet;
        h3.inch = inch + d2.inch;
        return h3;
    }
};
int main()
{
    intro();
    Height h1(4, 3);
    cout << "1) Height is 4 feet & 3 inches\n";
    Height h2(6, 2);
    cout << "2) Height is 6 feet & 2 inches\n";
    Height h3;
    h3 = h1 + h2;
    cout << "\n\nSum of Feet & Inches: " << h3.feet << " and " << h3.inch << " inches" << endl;
    return 0;
}
