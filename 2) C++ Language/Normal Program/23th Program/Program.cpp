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
    virtual void test()
    {
        cout << "hello my name is prashant ranjan singh";
    }
};
class B : public A
{
public:
    void test()
    {
        cout << "Hello I am the virtual function made by Prashant Ranjan Singh running in derived class!! :)" << endl;
    }
};
int main(void)
{
    intro();
    B obj;
    obj.test();
    return 0;
}