//decimal to octal
#include<stdio.h>
void main()
{
	int a[100]={0},n,cn,i;
	printf("enter a number:");
	scanf("%d",&n);
	cn=n;
	i=99;
	while(n!=0)
	{
		a[i]=n%8;
		n/=8;
		i--;	
	}
	printf("octal equivalent of %d is:",cn);
	for(i=0;i<100;i++)
	{	
	    if(a[i]!=0)
	    {
	    	while(i<100)
	    	{
	    		printf("%d",a[i]);
				i++;	
			}  	
		}	
	}
}
