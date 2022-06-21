#include <iostream>
#include <fstream>
using namespace std;
void intro()
{
    cout << "\n---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n";
}
int main()
{
    intro();
    fstream ob;
    ob.open("test.txt", ios::out);
    ob << "hello the one who is reading this\n";
    ob << ", this File is made for Assignment given By Arpit DEO Sir";
    ob.close();
    ob.open("test.txt", ios::in);
    while (!ob.eof())
    {
        string str;
        ob >> str;
        cout << str << " ";
    }
    ob.close();
    return 0;
}
