#include <iostream>
using namespace std;
class Person
{
public:
    string my_name;
    unsigned int my_age;
    Person(const Person &obj)
    {
        my_name = obj.my_name;
        my_age = obj.my_age;
    }
    Person(string name, unsigned int age = 18)
    {
        my_name = name;
        my_age = age;
    }
    Person()
    {
        my_name = "2nd Unknown Person";
        my_age = 25;
    }
    void display()
    {
        cout << "Name: " << my_name << endl;
        cout << "Age: " << my_age << endl;
    }
};
void intro()
{
    cout << "-------------------------------------------------------------------------\n";
    cout << "Person with property using copy constructor made by Prashant Ranjan Singh\n";
    cout << "-------------------------------------------------------------------------\n\n";
}
int main()
{
    intro();
    Person p1("Prashant Ranjan Singh", 19);
    Person p2("Unknown Person");
    Person p3 = p1;
    Person p4;
    p1.display();
    cout << endl;
    p2.display();
    cout << endl
         << "Using Copy Constructor:-\n";
    p3.display();
    cout << endl
         << "Multiple Constructor:-\n";
    p4.display();
    return 0;
}
