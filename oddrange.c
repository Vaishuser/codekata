#include<stdio.h>
void main()
{
int a,b;
printf("Enter number");
scanf("%d %d",&a,&b);
for(;a<(b-1);)
{
if((++a)%2==1)
{
printf("%d",a);
}
}
}
