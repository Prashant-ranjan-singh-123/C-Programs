#include<iostream>
using namespace std;
int main()
{
cout<<"-------------------------------------------------------------------------------------------------------\n";
cout<<"**************************** Swap Using 2 Variable By Prashant Ranjan Singh****************************\n";
cout<<"-------------------------------------------------------------------------------------------------------\n\n";
int num1, num2;
cout<<"Please enter first number: ";
cin>>num1;
cout<<"Please enter second number: ";
cin>>num2;
cout<<"\n\n\t\t\t\t----------------\n\t\t\t\tChecking Process\t\t\t\t\n\t\t\t\t----------------"<<endl<<endl;
cout<<"First Numbered you enter is (x): "<<num1;
cout<<"\nSecond Number you entered is (y): "<<num2<<endl;
char confirmation;
cout<<"\nType 'Y' or 'y' if its correct ot Type 'N' or 'n' if its incorrect- ";
cin>>confirmation;
if (confirmation == 'y' || confirmation == 'Y')
{
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
cout<<"\n\n\t\t\t\t----------------\n\t\t\t\t After Swapping \t\t\t\t\n\t\t\t\t----------------\n"<<endl;
cout<<"First number (x):" <<num1<<endl;
cout<<"Second number (y):" << num2;
}

else 
{
cout<<"Please Rerun this program and try once again or contact EN2CS301308 for checkup";
}
cout<<"\n\n\t\t\t\t----------------\n\t\t\t\t END \t\t\t\t\n\t\t\t\t----------------"<<endl<<endl;

return 0;
}