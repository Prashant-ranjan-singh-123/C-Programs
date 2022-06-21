#include <iostream>
using namespace std;
void intro()
{
    cout << "\n---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n";
}
class Person
{
protected:
    string name, dob;
    Person()
    {
        cout << "1) Enter Your Name: ";
        cin >> name;
        cout << "2) Enter date of birth(DD/MM/YYYY format): ";
        cin >> dob;
    }
};
class Employee : protected Person
{
protected:
    string doj;
    unsigned int salary;
    Employee()
    {
        cout << "3) Enter date of joining the job (DD/MM/YYYY): ";
        cin >> doj;
        cout << "4) Enter salary: Rs. ";
        cin >> salary;
    }
};
class Webdeveloper : protected Employee
{
public:
    string techstack;
    unsigned int no_of_projects;
    Webdeveloper()
    {
        cout << "5) Enter tech-stack: ";
        cin >> techstack;
        cout << "6) Enter no. of projects completed: ";
        cin >> no_of_projects;
    }
    void display()
    {
        cout << "(#) Name: " << name << endl;
        cout << "(#) Date of birth: " << dob << endl;
        cout << "(#) Date of joining: " << doj << endl;
        cout << "(#) Salary: Rs. " << salary << endl;
        cout << "(#) Tech Stack: " << techstack << endl;
        cout << "(#) No. of projects completed: " << no_of_projects << endl;
    }
};
int main()
{
    intro();
    Webdeveloper p1;
    cout << "\n\n------------------------------";
    cout << "\nDetails of the Web developer:-" << endl;
    cout << "------------------------------\n\n";
    p1.display();
    return 0;
}
