#include <iostream>
using namespace std;
class between_0_to_10000
{
private:
    float sallary;

public:
    int gross_salary(float sallary)
    {
        float TA, DA, gross_sallary;
        char more_info;
        TA = 0.10 * sallary;
        DA = 0.05 * sallary;
        gross_sallary = sallary - (TA) - (DA);
        cout << "\n\nYour Gross salary is: " << gross_sallary;

        cout << "\n\n---------------------------------------------------------------------------------------------------------------\n";
        cout << "**********Travelling Allowance (TA) and Dearness Allowance (DA) checkup made by Prashant Ranjan Singh**********";
        cout << "\n---------------------------------------------------------------------------------------------------------------\n\n\n";
        cout << "If you want to see TA & DA press 'Y' or 'y' if no then type 'N' or 'n': ";
        cin >> more_info;
        if (more_info == 'Y' || more_info == 'y')
        {
            cout << "\n\nTravelling Allowance (12%)= " << TA << ", Dearness Allowance (6%)= " << DA;
            cout << "\n\n{"
                 << "salary (" << sallary << ") - Travelling Allowance (" << TA << ") - Dearness Allowance (" << DA << ") = " << sallary - (TA) - (DA) << "." << endl;
        }

        else if (more_info == 'N' || more_info == 'n')
        {
            cout << "\n\n\t*******We appreciate that you belive in this program, hope you will suggest this program to others*******" << endl;
        }
        else
        {
            cout << "Invalid Character" << endl;
        }

        return 0;
    }
};
class between_10000_to_infinity
{
    float sallary;

public:
    int gross_salary(float sallary)
    {
        float TA, DA, gross_sallary;
        char more_info;
        TA = 0.12 * sallary;
        DA = 0.06 * sallary;
        gross_sallary = sallary - (TA) - (DA);
        cout << "\n\nYour Gross salary is: " << gross_sallary;
        cout << "\n\n---------------------------------------------------------------------------------------------------------------\n";
        cout << "**********Travelling Allowance (TA) and Dearness Allowance (DA) checkup made by Prashant Ranjan Singh**********";
        cout << "\n---------------------------------------------------------------------------------------------------------------\n\n\n";
        cout << "If you want to see TA & DA press 'Y' or 'y' if no then type 'N' or 'n': ";
        cin >> more_info;
        if (more_info == 'Y' || more_info == 'y')
        {
            cout << "\n\nTravelling Allowance (12%)= " << TA << ", Dearness Allowance (6%)= " << DA;
            cout << "\n\n{"
                 << "salary (" << sallary << ") - Travelling Allowance (" << TA << ") - Dearness Allowance (" << DA << ") = " << sallary - (TA) - (DA) << "." << endl;
        }

        else if (more_info == 'N' || more_info == 'n')
        {
            cout << "\n\n\t*******We appreciate that you belive in this program, hope you will suggest this program to others *******" << endl;
        }
        else
        {
            cout << "Invalid Character" << endl;
        }

        return 0;
    }
};
int main()
{
    float sallary;
    cout << "Please Enter your Salary: ";
    cin >> sallary;
    if (sallary > 0 && sallary <= 10000)
    {
        between_0_to_10000 ga_calculator;
        ga_calculator.gross_salary(sallary);
    }
    else if (sallary > 10000)
    {
        between_10000_to_infinity ga_calculator;
        ga_calculator.gross_salary(sallary);
    }
    else
    {
        cout << "\nInvalid Salary";
    }
    return 0;
}