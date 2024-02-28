/*Program to demonstrate the malloc () function*/

#include<stdio.h>

#include<conio.h>

#include<stdlib.h>

 int main()

{

     int n,*ptr,i,sum=0;

      printf("Enter nummber of elements\n");

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

          printf("Contents\n");

         for(i=0;i<n;i++)

         printf("%d\t",*(ptr+i));

         printf("Sum=%d\n",sum);

        

}

}   