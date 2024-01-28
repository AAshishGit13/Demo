#include<stdio.h>
 int main()
{
    int n,i,j,temp,num[10];
    printf("\nenter the no of arrays:");
    scanf("%d",&n);
    printf("\n enter the %d integers in the array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d\t",&num[i]);
    }
    printf("\n elements in the array before sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-(i+1);j++)
        {
            if(num[j]>=num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    printf("\nelements in the array after sorting:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",num[i]);
    }

}