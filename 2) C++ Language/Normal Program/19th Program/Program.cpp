#include <iostream>
using namespace std;
void intro()
{
    cout << "\n---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n";
}
class A
{
public:
    int x, y;
    void getdata()
    {
        cout << "\n1) Enter value of x: ";
        cin >> x;
        cout << "\n2) Enter value of y: ";
        cin >> y;
    }
};
class B : public A
{
public:
    void product()
    {
        cout << "\nProduct of X and Y = " << x * y << "\n\n";
    }
};
class C : public A
{
public:
    void sum()
    {
        cout << "\nSum of X and Y= " << x + y;
    }
};
int main()
{
    intro();
    B obj1;
    C obj2;
    obj1.getdata();
    obj1.product();
    obj2.getdata();
    obj2.sum();
    return 0;
}