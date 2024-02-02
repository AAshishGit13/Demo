#include<stdio.h>

 int main()
{
	char s1[200],s2[100];
	void rev(char *p1,char *p2);
	printf("\nEnter the string\n");
	gets(s1);
	rev(s1,s2);
	printf("\nThe original string is %s ",s1);
	printf("\nThe reversed string is %s ",s2);
	 
}
void rev(char *p1,char *p2)
{
	int len=0;
	while(*p1!='\0')
	{
		p1++;
		len++;
	}
	p1--;
	while(len>0)
	{
		*p2=*p1;
		p2++;
		p1--;
		len--;
	}
	*p2='\0';
}

