#include<stdio.h>
 int main()
{
    int a[10],i,j,n,mid,temp,flag=0;
    int low=0,high ,item;
    printf("\nenter the numbers of elements:");
    scanf("%d",&n);
    high=n-1;
    printf("\n enter the elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-i-1;j++)
      {
        if (a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
      }
    }
    printf("\n enter the elements to be search:");
    scanf("%d",&item);
    while(low<=high)
    {
        mid=(low+high)/2;
        if (a[mid]==item)
        {
            printf("\n  %d is found in the list \n",item);
            flag=1;
            break;
        }
        else{
            if(item>a[mid])
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    if(flag==0)
    {
        printf("\n  %d is not found\n",item);

    }

}