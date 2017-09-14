#include<stdio.h>

void main()
{
 unsigned int i,n,j;
 scanf("%d",&n);
 unsigned int ar[n];
 for(i=0;i<5;i++)
 {
  scanf("%d",&ar[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if((ar[i]+ar[j])==0)
   {
    printf("%d %d",ar[i],ar[j]);
    printf("\n");
    break;
   }
  }
}
}