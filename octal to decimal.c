//octal to decimal
#include<stdio.h>
void main()
{
	int octal,deci=0,m=1;
	printf("enter a octal number:");
	scanf("%d",&octal);
	while(octal!=0)
	{
		deci+=(octal%10)*m;
		octal/=10;
		m*=8;
	}
	printf("decimal equivalent is %d",deci);
}
