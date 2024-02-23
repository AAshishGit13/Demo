#include<stdio.h>
 int main()
{
    int a=2,b=3,*ap,*bp,sum;
    ap=&a;
    bp=&b;
    sum=*ap+*bp;
    printf("\n%d+%d=%d",*ap,*bp,sum);
    
}