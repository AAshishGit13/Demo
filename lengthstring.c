#include<stdio.h>
int main()
{
      char a[200];

      int i=0,length;
      printf("\nEnter the string\n");
      gets(a);
      while(a[i]!='\0')
                            i++;
            printf("\n The length of the entered string is %d",i);
       

}