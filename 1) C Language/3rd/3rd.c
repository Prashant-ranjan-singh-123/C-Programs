#include<stdio.h> 
int main() 
{ 
int n; 
printf("Enter a 3-digit number: "); 
scanf("%d",&n); 
printf("%d",n/100+n/10%10+n%10); 
}