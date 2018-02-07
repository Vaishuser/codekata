#include<stdio.h>
void main()
{
int n,count=0,i=0;
scanf("%d",&n);
while(i<=n)
{
count+=i;
i++;
}
printf("%d",count);
}