import java.util.*;
import java.io.*;
Class Element
{
   public Static void main(String args[])
{
System.out.println("Enter the number");
Scanner s=new Scanner(System.in);
int n=s.nextInt();
int[] Arr=new int[n];
System.out.println("Enter the Elements");
for(int i=0;i<n;i++)
{
Arr[i]=s.nextInt();
}
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
for(int k=0;k<n;k++)
{
if((Arr[i]+Arr[j]==Arr[k])
System.out.println("Element="+Arr[i]+Arr[j]+Arr[k]);
}
}
}
