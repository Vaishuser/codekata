#include<stdio.h>
void main()
{
    int n,a[100],k,i=0,count=0;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
  
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    

    scanf("%d",&k);
    
    printf("\n\n");
   
   
    for(i=0;i<k;i++)
    {
        count=count+a[i];
}
    
    printf("%d",count);

}