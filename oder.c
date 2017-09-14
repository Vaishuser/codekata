#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   long int ar[20],i,j,n,temp,c;
   long int sum=0;
   clrscr();
   scanf("%ld",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&ar[i]);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(ar[j]>ar[i])
 {
  temp=ar[i];
  ar[i]=ar[j];
  ar[j]=temp;
 }
 }
}
for(i=0;i<n-1;i++)
{
  temp=ar[i+1];
  c=0;
  while(temp!=0)
  {
    temp=temp/10;
    c++;
  }
  sum=(sum*pow(10,c))+ar[i+1];
}
printf("\n%ld",sum);
getch();
}






