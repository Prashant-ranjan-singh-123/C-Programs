#include <iostream>
using namespace std;
int main()
{
    cout << "--------------------------------------------------------------------------\n";
    cout << "***************This Program will calculate Simple Intrest***************";
    cout << "\n--------------------------------------------------------------------------\n"
         << endl;
    float P, R, T, Simple_intrest;
    cout << "please enter Initial Principal Balance: ₹";
    cin >> P;
    cout << "please enter the Annual Interest Rate: ";
    cin >> R;
    cout << "please enter the Time (in years): ";
    cin >> T;
    Simple_intrest = (P * R * T) / 100;
    cout << "\n\nSimple intrest is : " << Simple_intrest << endl;
    cout << "Total amount you need to pay after " << T << " year is: " << P + Simple_intrest << endl;
    cout << "\n\n\t\t\t\t\t------------------------------\n";
    cout << "\t\t\t\t\t************END***************";
    cout << "\n\t\t\t\t\t------------------------------\n";
    return 0;
}