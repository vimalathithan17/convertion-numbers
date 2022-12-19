//decimal to binary
#include<stdio.h>
#include<ctype.h>
void main()
{
	char hex[10]={0};
	int deci=0,m=1,i=0;
	printf("enter a hexadecimal number:");
	scanf("%s",hex);
	for(i=0;i<10;i++)
	{
		if(hex[i]!='\0')
		printf("%c-\n",hex[i]);
	}
}
