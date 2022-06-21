#include <iostream>
using namespace std;
void intro()
{
    cout << "\n---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n";
}
class shape
{
public:
    virtual double area() = 0;
};
class circle : public shape
{
    double r;

public:
    circle()
    {
        cout << "\n\n(#)Enter radius of circle: ";
        cin >> r;
    }
    double area()
    {
        return 3.14 * r * r;
    }
};
class square : public shape
{
    double side;

public:
    square()
    {
        cout << "\n\n(#)Enter side length of square: ";
        cin >> side;
    }
    double area()
    {
        return side * side;
    }
};
int main()
{
    intro();
    int choice;
    cout << "--------------------------\n";
    cout << "Chose any one to find area\n";
    cout << "--------------------------\n\n";
    cout << "1)For calculating area of Circle\n";
    cout << "2)For calculating area of Square\n\n";
    cout << "Choice [1/2]: ";
    cin >> choice;
    if (choice == 1)
    {
        circle cobj;
        cout << "\nArea of circle : " << cobj.area() << endl;
    }
    else if (choice == 2)
    {
        square sobj;
        cout << "\nArea of square : " << sobj.area() << endl;
    }
    else
        cout << "Entered wronge choice... " << endl;
    return 0;
}