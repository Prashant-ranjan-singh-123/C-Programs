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
    int a = 90;
    A()
    {
        cout << "Constructor for class A" << endl;
    }
};
class B
{
public:
    int b = 80;
    B()
    {
        cout << "Constructor for class B" << endl;
    }
};
class C : public A, public B
{
public:
    int c = 60;
    C()
    {
        cout << "Constructor for class C" << endl;
        cout << "\n\n";
        cout << "Class C inherits from class A and class B" << endl;
    }
};
int main()
{
    intro();
    C obj;
    cout << "a = " << obj.a << endl;
    cout << "b = " << obj.b << endl;
    cout << "c = " << obj.c << endl;
    return 0;
}