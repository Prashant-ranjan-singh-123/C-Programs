#include <stdio.h>
void main()
{
 int a[10000],i,n,key;
 printf("Enter size of the array : ");
 scanf("%d", &n);
 printf("Enter elements in array : ");
 for(i=0; i<n; i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Enter the key : ");
 scanf("%d", &key);
 int boolian = 0;
 for(i=0; i<n; i++)
 {
 if(a[i]==key)
 {
    boolian = 1;
    break;
 }
 }
 if (boolian == 0)
 {
    printf("element not found");
 }
 else
 {
    printf("element present");
 }
}