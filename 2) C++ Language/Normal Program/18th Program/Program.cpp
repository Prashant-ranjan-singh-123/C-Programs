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
    int x;
};
class B : public A
{
public:
    B()
    {
        x = 25;
    }
};
class C
{
public:
    int y;
    C()
    {
        y = 36;
    }
};
class D : public B, public C
{
public:
    void sum()
    {
        cout << "Multiply= " << x * y;
    }
};
int main()
{
    intro();
    D obj1;
    obj1.sum();
    return 0;
}