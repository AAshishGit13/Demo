#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b,res;
    printf("greatest common diviser\n");
    printf("enter the value of a and b:");
    scanf("%d%d",&a,&b);
    res=gcd(a,b);
    printf("gcd of %dand%d is %d",a,b,res);
    return 0;
}
int gcd(int a,int b)
    {
        if(a==b)
        {
            return(a);
        }
        else
        {
            if(a>b)
            return(gcd(a-b,b));
            else
            return(gcd(a,b-a));
        }
    }
