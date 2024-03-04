//* Program to find binomial co-efficient */
#include <stdio.h>
int binomial(int,int);
void main()
{
int n,r,ncr;
printf(“Enter n and r values\n“);
scanf(“%d %d”,&n,&r);
ncr=factNo/(fact(n-r)*fact(r));
printf(“\n Binomial coefficient :  %d”,ncr);
}
int fact(int n)
{
if(n==0)
return(1);
else
return(n*fact(n-1));
}