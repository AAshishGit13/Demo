#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

void main()

{

      int n,*ptr,i,m,sum=0;

      

     printf("enter nummber of elements\n");

     scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

     if(ptr==NULL)

     {

          printf("Allocation failed\n");

         exit(0);

     }

    else

   {

           printf("Total memory allocated for %d elements =%d bytes\n",n,(n*sizeof(int)));

         printf("Contents initially\n");

       for(i=0;i<n;i++)

      printf("%d\t",*(ptr+i));

      printf("Enter the elements\n");

      for(i=0;i<n;i++)

      {

           scanf("%d",(ptr+i));

          sum=sum+ *(ptr+i);

    }

            printf("How many additional elements\n");

           scanf("%d",&m);

            ptr=(int*)realloc(ptr,m*sizeof(int));

           printf("Revised memory allocated for %d elements = %d bytes\n",(n+m),(n+m)*sizeof(int));

           printf("Enter %d elements\n",m);

         for(i=n;i<(m+n);i++)

         {

                 scanf("%d",ptr+i);

              sum=sum+ *(ptr+i);

       }

        printf("Contents\n");

          for(i=0;i<(n+m);i++)

                     printf("%d\t",*(ptr+i));

          printf("Sum=%d\n",sum);

          

   }

 }