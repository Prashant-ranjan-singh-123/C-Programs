#include <iostream>
using namespace std;
class Rooms
{
public:
    int no_of_bedrooms, no_of_bathrooms;
    Rooms()
    {
        cout << "1) Enter no. of Room You want to book: ";
        cin >> no_of_bedrooms;
        cout << "2) Enter no. of Bathing Room you want: ";
        cin >> no_of_bathrooms;
    }
};
class House : private Rooms
{
public:
    float plot_area;
    House()
    {
        cout << "3) Enter plot area(in sq. feet): ";
        cin >> plot_area;
    }
    void display()
    {
        cout << "(#) No. of Room you booked is: " << no_of_bedrooms << endl;
        cout << "(#) No. of bathrooms you booked is: " << no_of_bathrooms << endl;
        cout << "(#) Plot area : " << plot_area << " sq. feet\n";
    }
};
void intro()
{
    cout << "\n---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n";
}
int main()
{
    intro();
    House h;
    cout << "\n-----------------------------\n";
    cout << "Details entered by the user:-" << endl;
    cout << "-----------------------------\n\n";
    h.display();
    return 0;
}
