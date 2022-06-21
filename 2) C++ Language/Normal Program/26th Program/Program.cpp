#include <iostream>
using namespace std;
void intro()
{
    cout << "\n---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n";
}
class Marks
{
public:
    virtual double get_percentage() = 0;
};
class A : public Marks
{
    double m1, m2, m3;

public:
    A(double m1, double m2, double m3)
    {
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
    double get_percentage()
    {
        return (m1 + m2 + m3) / 3;
    }
};
class B : public Marks
{
    double m1, m2, m3, m4;

public:
    B(double m1, double m2, double m3, double m4)
    {
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
        this->m4 = m4;
    }
    double get_percentage()
    {
        return (m1 + m2 + m3 + m4) / 4;
    }
};
int main()
{
    intro();
    A aobj(56, 78.66, 90.345);
    cout << "Percentage of student A : " << aobj.get_percentage() << endl;
    B bobj(70, 66, 89, 50);
    cout << "Percentage of student B : " << bobj.get_percentage() << endl;
    return 0;
}
