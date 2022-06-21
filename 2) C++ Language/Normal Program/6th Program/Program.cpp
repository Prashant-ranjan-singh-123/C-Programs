#include<iostream>
using namespace std;
int main()
{
 cout<<"------------------------------------------------------------------------------------------------------\n";
 cout<<"***************This Program will calculate area of circle made by Prashant Ranjan Singh***************\n";
 cout<<"------------------------------------------------------------------------------------------------------\n"<<endl;
 char conf_1;
 cout<<"Press 'Y' or 'y' if you know the radius or diameter or type 'N' or 'n': "; 
 cin>>conf_1;
 cout<<"\n\n";
 if (conf_1 == 'Y' || conf_1 == 'y')
 {
 char conf_2;
 cout<<"If you know radius of circle then press 'R' or 'r' or if you know diameter then press 'D' or 'd': ";
 cin>>conf_2;
 cout<<"\n\n";
 if (conf_2 == 'r' || conf_2 == 'R')
 {
 float radius, area, pi=3.14159;
 cout<<"Please enter the radius of circle (in cm): ";
 cin>>radius;
 cout<<"\n\n---------------------------------------------------\n";
 area = pi * radius * radius;
 cout<<"Area of circle of radius "<<radius<<"cm is: ";
 cout<<area;
 cout<<" square cm.";
 cout<<"\n---------------------------------------------------\n\n";
 }
 else if (conf_2 == 'd' || conf_2 == 'D') 
 {
 float diameter, area, pi=3.14159;
 cout<<"Please enter the diameter of circle (in cm): ";
 cin>>diameter;
 cout<<"\n\n---------------------------------------------------\n";
 area = (pi * diameter * diameter)*0.25;
 cout<<"Area of circle of diameter "<<diameter<<"cm is: ";
 cout<<area;
 cout<<" square cm.";
 cout<<"\n---------------------------------------------------\n\n";
 }
 else
 {
 cout<<"Re run this program and please put valid input"<<endl;
 }
 }
 else
 {
 cout<<"\n---------------------------------------------------------------------------------------\n";
 cout<<"Please find Radius or Diameter of circle otherwise this program couldn't calculate area."<<endl;
 cout<<"---------------------------------------------------------------------------------------\n";
 }
 return 0;
 }