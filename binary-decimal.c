//binary to decimal
#include<stdio.h>
void main()
{
	int bin,deci=0,m=1;
	printf("enter a binary number:");
	scanf("%d",&bin);
	while(bin!=0)
	{
		deci+=(bin%10)*m;
		bin/=10;
		m*=2;
	}
	printf("decimal equivalent is %d",deci);
}
