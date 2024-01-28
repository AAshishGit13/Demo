#include<stdio.h>

int  main()

{

int f1,f2,f3,i,n;

f1=0;

f2=1;

printf("\n Enter the number of terms to be generated : ");

scanf("%d",&n);


printf("\nFibonacci series of %d numbers\n",n);


printf("\n%d\t%d",f1,f2);

for(i=2;i<n;i++)

{

f3=f1+f2;

printf("\t%d",f3);

f1=f2;

f2=f3;

}


 

}

