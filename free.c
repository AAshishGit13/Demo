/*Program to demonstrate the free () function*/

#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

 int main()

{

       int *p1,*p2;

      p1=(int*)malloc(10*sizeof(int));

       p2=(int*)calloc(10,sizeof(int));

        free(p1);

        free(p2);

}