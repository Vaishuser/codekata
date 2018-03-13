#include<stdio.h>
void main()
{

int a,b,i,c;
scanf("%d %d",&a,&b);


for(;a<b;a++)
{
    c=0;
    
for(i=1;i<b;i++)
{
         
        if(a%i==0)
        {
         c++;
        }

}

     if(c==2)
     {
     printf("%d\n",a);
     }


}    
        
         
        
      
}
