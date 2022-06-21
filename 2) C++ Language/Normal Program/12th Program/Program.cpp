#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    Person(string name_1, int age_1)
    {
        name = name_1;
        age = age_1 ;
    }
    Person(string name_2)
    {
        name = name_2 ;
        age = 18;
    }
    void display()
    {
        cout << "-~-~-~-~-~-~-~-\n";
        cout << "Displaying Data\n";
        cout << "-~-~-~-~-~-~-~-\n\n";
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
};
void End()
{
    cout << "\n\n*************************************\n";
    cout << "*****************END*****************";
    cout << "\n*************************************";
}
void paramatised_constructor_taking_age()
{
    int age_1;
    string name_1;
    cout << "\n\n****************************************\n";
    cout << "Paramatrised Constructor age taking Case\n";
    cout << "****************************************\n\n";
    cout << "Enter name : ";
    getline(cin, name_1);
    cout << "Enter age : ";
    cin >> age_1;
    cout << "\n\n";
    Person p(name_1, age_1);
    p.display();
}
void paramatised_constructor_default_case()
{
    string name_2;
    cout << "\n\n*************************************\n";
    cout << "Paramatrised Constructor Default Case\n";
    cout << "*************************************\n\n";
    cout << "Enter name : ";
    cin.clear();
    cin.ignore(5000000, '\n');
    getline(cin, name_2);
    cout << "\n\n";
    Person p2(name_2);
    p2.display();
}
void Starting()
{
    cout << "-------------------------------------------------------------------\n";
    cout << "This program will print age of person made by Prashant Ranjan Singh\n";
    cout << "-------------------------------------------------------------------\n";
}
int main()
{
    Starting();
    paramatised_constructor_taking_age();
    paramatised_constructor_default_case();
    End();
    return 0;
}