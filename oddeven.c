#include<stdio.h>
void main()
{
int num;
clrscr();
pritnf("enter number");
scanf("%d",&num);
if(num%2==0)
{
printf("Num is even");
else
printf("Num is odd");
}
getch();
}