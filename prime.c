#include<stdio.h>
void main()
{
int n,c=0,i;
printf("Enter number");
scanf("%d",&n); 
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{   
printf("prime\n");
}
else
{   
printf("not a prime\n");
}   

}
