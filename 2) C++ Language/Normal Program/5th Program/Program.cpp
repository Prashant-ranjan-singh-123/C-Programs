#include <iostream>
using namespace std;
int main()
{
    cout << "-----------------------------------------------------------------------------------------------------------------------\n";
    cout << "***************This Program has been made by Prashant Ranjan Singh and it will calculate are of Triangle***************\n";
    cout << "-----------------------------------------------------------------------------------------------------------------------\n"
         << endl;
    char conf_1;
    cout << "Press 'Y' or 'y' if you know height and base of triangle or type 'N' or 'n': ";
    cin >> conf_1;
    if (conf_1 == 'Y' || conf_1 == 'y')
    {
        float base, hight, area;
        char conf_2;
        cout << "\nPlease enter height of triangle: ";
        cin >> hight;
        cout << "Please enter base of triangle: ";
        cin >> base;
        cout << "\n\n-------------------------------------------\n";
        cout << "Please check this values are correct or not\n";
        cout << "-------------------------------------------\n\n"
             << endl;
        cout << "Height of triangle is: " << hight << endl;
        cout << "Base of triangle is: " << base << endl;
        cout << "\n\n\nIf the value are correct then type 'Y' or 'y': ";
        cin >> conf_2;
        if (conf_2 == 'Y' || conf_2 == 'y')
        {
            area = 0.5 * hight * base;
            cout << "\n\n\n--------------------\nArea of triangle is: " << area << endl;
            cout << "--------------------\n";
        }
        else
        {
            cout << "\n\n-------------------------------------------------------------------------\n";
            cout << "Seems there's some an LOGICAL ERROR occuring, please contact EN20CS301308\n";
            cout << "-------------------------------------------------------------------------\n";
        }
    }
    else
    {
        cout << "\n\nPlease find Height and base length otherwise this program couldn't calculate area.";
    }

    return 0;
}
