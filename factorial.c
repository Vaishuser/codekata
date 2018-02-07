#include<stdio.h>
void main()
{
    int i,n,f=1,p;
    
    scanf("%d",&n);
    
    
    for(i=0;n!=0;i++,n--)    
    {
        f=f*n;
        
    }
     printf("%d",f);
}
    
    