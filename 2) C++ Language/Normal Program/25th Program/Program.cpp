#include <iostream>
#include <math.h>
using namespace std;
void intro()
{
    cout << "---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n ";
}
void functioning();
class account
{
public:
    string name;
    unsigned int acct_no;
    double balance = 0;
    bool cheque_book;
    account()

    {
        cout << "1) Enter name: ";
        cin >> name;
        cout << "2) Enter account no.: ";
        cin >> acct_no;
    }
    void deposit()

    {
        float money;
        cout << "3) Enter amount to be deposited: ";
        cin >> money;
        balance += money;
        cout << "\n\nAmount deposited successfully.(After depositing) \n\n\n";
        display();
    }
    void display()

    {
        cout << "-------------------\n ";
        cout << "Balance: Rs." << balance << endl;
        cout << "-------------------\n";
    }
};
class sav_acct : public account
{
public:
    sav_acct()

    {
        cheque_book = false;
        deposit();
    }
    void withdrawal()

    {
        float money;
        cout << "Enter amount for withdrawal: Rs.";
        cin >> money;
        if (money > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            balance = balance - money;
            cout << "\nWithdrawal Successful!\nAfter withdrawal:- " << endl;
            display();
        }
    }
    void calc_ci()
    {
        double t;
        cout << "Enter time(in years): ";
        cin >> t;
        balance = balance * (pow(1.04, t));
        cout << "Interest applied(Interest rate: 4% per yr.)\nNow," << endl;
        display();
    }
};
class cur_acct : public account
{
public:
    cur_acct()
    {
        cheque_book = true;
        balance = 500;
    }
    void withdrawal()
    {
        float money;
        cout << "Enter amount for withdrawal: Rs.";
        cin >> money;
        if (money > balance)
            cout << "Insufficient balance!" << endl;
        else
        {
            if ((balance - money) < 500)
            {
                char ch2;
                cout << "As there should be minimum Rs.500 in the account. So, service charge of Rs.50 will be applied."
                     << endl;
                cout << "Do you wish to continue?(Y/N)";
                cin >> ch2;
                if ((ch2 == 'Y') || (ch2 == 'y'))
                {
                    balance = balance - money - 50;
                    cout << "Withdrawal successful!\nAfter withdrawal:- " << endl;
                    display();
                }
            }
            else
            {
                balance = balance - money;
                cout << "After withdrawal:- " << endl;
                display();
            }
        }
    }
};
int main()
{
    intro();
    functioning();
    return 0;
}
void functioning()
{
    int ch;
    cout << "\t\tMain Menu\n\n\nTypes of account:-\n\n1) Savings account\n2) Current account\n3. Exit" << endl;
    cout << "------------------------------------\n";
    cout << "Enter your choice of account (1/2): ";
    cin >> ch;
    cout << "------------------------------------\n";
    while (true)
    {
        switch (ch)
        {
        case 1:
        {
            int ch2;
            cout << "\n\nCreating an account:-"
                 << "\n\n";
            sav_acct a1;
            while (true)
            {
                cout << "\n\nOperations:-\n\n1. Deposit\n2. Withdraw\n3. Display balance\n4. Apply Compound Interest\n5.Main Menu " << endl;
                cout << "\nEnter your choice (1-5): ";
                cin >> ch2;
                switch (ch2)
                {
                case 1:
                {
                    a1.deposit();
                    break;
                }
                case 2:
                {
                    a1.withdrawal();
                    break;
                }
                case 3:
                {
                    a1.display();
                    break;
                }
                case 4:
                {
                    a1.calc_ci();
                    break;
                }
                case 5:
                {
                    system("CLS");
                    main();
                    break;
                }
                default:
                    cout << "Enter valid choice!" << endl;
                }
            }
            break;
        }
        case 2:
        {
            int ch2;
            cout << "\n\nCreating an account:-"
                 << "\n\n";
            cur_acct a1;
            while (true)
            {
                cout << "\n\nOperations:-\n\n1. Deposit\n2. Withdraw\n3. Display balance\n4. Main Menu" << endl;
                cout << "\nEnter your choice (1-4): ";
                cin >> ch2;
                switch (ch2)
                {
                case 1:
                {
                    a1.deposit();
                    break;
                }
                case 2:
                {
                    a1.withdrawal();
                    break;
                }
                case 3:
                {
                    a1.display();
                    break;
                }
                case 4:
                {
                    system("CLS");
                    main();
                    break;
                }
                default:
                    cout << "Enter valid choice!" << endl;
                }
            }
            break;
        }
        case 3:
            exit(0);
        default:
            cout << "Enter valid choice!" << endl;
        }
    }
}