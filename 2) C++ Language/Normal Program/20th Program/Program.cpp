#include <iostream>
using namespace std;
void intro()
{
    cout << "\n---------------------------------------------\n";
    cout << "This Program is made by Prashant Ranjan Singh\n";
    cout << "---------------------------------------------\n\n";
}
void print(int i)
{
    cout << " 1) The Number which you entered is an integer which is: " << i << "\n\n";
}
void print(double f)
{
    cout << " 2) The Number which you entered is an float which is: " << f << "\n\n";
}
void print(char const *c)
{
    cout << " 3) The Number which you entered is an char which is: " << c << "\n\n";
}
int main()
{
    intro();
    print(15);
    print(25.10);
    print("twenty");
    return 0;
}