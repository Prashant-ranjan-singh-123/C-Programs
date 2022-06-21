#include <iostream>
using namespace std;
void decoration()
{
    cout << "\n\n----------------------------------------------------------------------------------------------\n";
    cout << "**********This program will Calculate Electricity Bill made by Prashant Ranjan Singh**********\n";
    cout << "----------------------------------------------------------------------------------------------\n\n";
}
class Bill_calculator
{
public:
    float current_month_bill, last_month_bill;
    Bill_calculator()
    {
        cout << "Please enter the Current month unit: ";
        cin >> current_month_bill;
        cout << "\nPlease enter the Last month unit: ";
        cin >> last_month_bill;
    }
    int bill_calculator()
    {
        float check;
        check = current_month_bill - last_month_bill;
        if (check >= 0 && check <= 100)
        {
            const int rate = 2;
            float total_cost;
            char conf;
            total_cost = check * rate;
            cout << "\n\n\n--------------------------------------------\n";
            cout << "Total amount you need to pay is: " << total_cost << " Rupees" << endl;
            cout << "--------------------------------------------\n";

            cout << "\n\n\nDid you want to know why you get this rate (y/n): ";
            cin >> conf;
            if (conf == 'Y' || conf == 'y')
            {

                cout << "\n\n*******************************************************************************************************************\n";
                cout << "You consumed " << check << " unit, your unit consumption came in this range (0-100 range) so your unit rate is 2 rupees/unit";
                cout << "\n*******************************************************************************************************************";
            }
            else if (conf == 'N' || conf == 'n')
            {
                cout << "\n\n\n------------------------------------------------------------\n";
                cout << "Thanks for your valuable time, please pay bill in time limit";
                cout << "\n------------------------------------------------------------";
            }
            else
            {
                cout << "invalid character";
                exit(0);
            }
        }
        else if (check >= 101 && check <= 200)
        {
            const int rate = 3;
            float total_cost;
            char conf;
            total_cost = check * rate;
            cout << "\n\n\n--------------------------------------------\n";
            cout << "Total amount you need to pay is: " << total_cost << " Rupees" << endl;
            cout << "--------------------------------------------\n";
            cout << "\n\n\nDid you want to know why you get this rate (y/n): ";
            cin >> conf;
            if (conf == 'Y' || conf == 'y')
            {

                cout << "\n\n*******************************************************************************************************************\n";
                cout << "You consumed " << check << " unit, your unit consumption came in this range (101-200 range) so your unit rate is 3 rupees/unit";
                cout << "\n*******************************************************************************************************************";
            }
            else if (conf == 'N' || conf == 'n')
            {
                cout << "\n\n\n------------------------------------------------------------\n";
                cout << "Thanks for your valuable time, please pay bill in time limit";
                cout << "\n------------------------------------------------------------";
            }
            else
            {
                cout << "invalid character";
                exit(0);
            }
        }

        else if (check >= 201 && check <= 300)
        {
            const int rate = 4;
            float total_cost;
            char conf;
            total_cost = check * rate;
            cout << "\n\n\n--------------------------------------------\n";
            cout << "Total amount you need to pay is: " << total_cost << " Rupees" << endl;
            cout << "--------------------------------------------\n";

            cout << "\n\n\nDid you want to know why you get this rate (y/n): ";
            cin >> conf;
            if (conf == 'Y' || conf == 'y')
            {

                cout << "\n\n*******************************************************************************************************************\n";
                cout << "You consumed " << check << " unit, your unit consumption came in this range (201-300 range) so your unit rate is 4 rupees/unit";
                cout << "\n*******************************************************************************************************************";
            }
            else if (conf == 'N' || conf == 'n')
            {
                cout << "\n\n\n------------------------------------------------------------\n";
                cout << "Thanks for your valuable time, please pay bill in time limit";
                cout << "\n------------------------------------------------------------";
            }
            else
            {
                cout << "invalid character";
                exit(0);
            }
        }
        else if (check > 300)
        {
            int rate = 5;
            float total_cost;
            char conf;
            total_cost = check * rate;
            cout << "\n\n\n--------------------------------------------\n";
            cout << "Total amount you need to pay is: " << total_cost << " Rupees" << endl;
            cout << "--------------------------------------------\n";

            cout << "\n\n\nDid you want to know why you get this rate (y/n): ";
            cin >> conf;
            if (conf == 'Y' || conf == 'y')
            {

                cout << "\n\n****************************************************************************************************************\n";
                cout << "You consumed " << check << " unit, your unit consumption came in this range (>300 range) so your unit rate is 5 rupees/unit";
                cout << "\n****************************************************************************************************************";
            }
            else if (conf == 'N' || conf == 'n')
            {
                cout << "\n\n\n------------------------------------------------------------\n";
                cout << "Thanks for your valuable time, please pay bill in time limit";
                cout << "\n------------------------------------------------------------";
            }
            else
            {
                cout << "Invalid character";
                exit(0);
            }
        }
        else if (check < 0)
        {

            cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "Current Unit can't be less then Last month unit, plese check the data once.";

            cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
        }

        return 0;
    }
};
void End()
{
    cout << "\n\n\n\t\t\t-----------------------\n";
    cout << "\t\t\t**********END**********";
    cout << "\n\t\t\t-----------------------\n";
}
int main()
{
    decoration();
    Bill_calculator bill;
    bill.bill_calculator();
    End();
    return 0;
}
