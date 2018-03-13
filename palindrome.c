#include<stdio.h>
void main()
{
int n,a,b,c;
printf("Enter number");
scanf("%d",&n);
a=n%10;
b=n%100;
c=a*100+b;
if(n==c)
{
printf("Palindrome");
}
else
{
printf("Not a palindrome");
}
}

