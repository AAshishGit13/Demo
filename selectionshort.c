#include<stdio.h>
void main ()
{
    int n,i,j,small,loc,temp,a[100];
    printf("\n enter the size of array:\n");
    scanf("%d",&n);
    printf("\n enter the elements \n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("\n entered array is \n:");
         for(i=0;i<n;i++)
         {
            printf("%d\t",a[i]);
         }
         for(i=0;i<n-1;i++)
         {
            small=a[i];
            loc=i;
            for(j=i+1;j<n;j++)
            {
                if(a[j]<small)
                {
                    small=a[j];
                    loc=j;
                }
            }
            a[loc]=a[i];
            a[i]=small;
         }
         printf("\n the shorted array is \n");
         for(i=0;i<n;i++)
         {
            printf("%d\t",a[i]);
         }
}