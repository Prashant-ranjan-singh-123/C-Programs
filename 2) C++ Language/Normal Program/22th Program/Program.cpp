#include <iostream>
using namespace std;
void intro()
{
    cout << "\n---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n";
}
class base
{
public:
    virtual void print()
    {
        cout << "This will print derived class" << endl;
    }
    void show()
    {
        cout << "2) This will print base class." << endl;
    }
};
class derived : public base
{
public:
    void print()
    {
        cout << "1) Print derived class." << endl;
    }
    void show()
    {
        cout << "show derived class" << endl;
    }
};
// main function
int main()
{
    intro();
    base *bptr;
    derived d;
    bptr = &d;
    bptr->print();
    bptr->show();
    return 0;
}