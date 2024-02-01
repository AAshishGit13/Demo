#include<stdio.h>
int main()
{
     int n,i,a[100],osum=0,esum=0;                    
     printf("\nEnter the number count : ");
     scanf("%d",&n);
     printf("\nEnter the numbers\n");
     for(i=0;i<n;i++)             
     scanf("%d",&a[i]);
     for(i=0;i<n;i++)
     {
    if(a[i]%2==0)
    esum=esum+a[i];
      else
      osum=osum+a[i];
     }
 printf("\n\nThe sum of even numbers is %d",esum);
 printf("\n\nThe sum of odd numbers is %d",osum);
}