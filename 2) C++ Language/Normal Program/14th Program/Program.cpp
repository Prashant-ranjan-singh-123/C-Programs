#include <iostream>
using namespace std;
class House
{
public:
    float plot_area;
    House()
    {
        cout << "----------------------------\n";
        cout << "*****Constructor Called*****\n";
        cout << "----------------------------\n\n";
        cout << "House object created, constructor called succesflly" << endl;
        plot_area = 2100;
    }
    void display()
    {
        cout << "\n\n---------------------------------------------\n";
        cout << "This Program is made by Prashant Ranjan Singh\n";
        cout << "---------------------------------------------\n";
        cout << "Plot area before execution of destructor: " << plot_area << " sq. feet\n\n\n";
    }
    ~House()
    {
        cout << "----------------------------\n";
        cout << "*****Distructure called*****\n";
        cout << "----------------------------\n\n";
        plot_area = 0;
        cout << "Plot area after execution of destructor: " << plot_area << " sq. feet\n";
        cout << "House object destroyed." << endl;
    }
};

int main()
{
    House h;
    h.display();
    return 0;
}
