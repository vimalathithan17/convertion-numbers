//decimal to hex
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
		if(n%16<10)
		{
			a[i]=n%16;	
		}
		else
		{
			switch(n%16)
			{
				case 10:
					a[i]=65;
					break;
				case 11:
					a[i]=66;
					break;
				case 12:
					a[i]=67;
					break;
				case 13:
					a[i]=68;
					break;
				case 14:
					a[i]=69;
					break;
				case 15:
					a[i]=70;
					break;		
			}
		}
		n/=16;
		i--;	
	}
	printf("hexadecimal equivalent of %d is:",cn);
	for(i=0;i<100;i++)
	{	
	    if(a[i]!=0)
	    {
	    	while(i<100)
	    	{
	    		if(a[i]<10)
	    		{
	    			printf("%d",a[i]);
				}
				else
				{
					printf("%c",a[i]);	
				}
				i++;	
			}  	
		}	
	}
}
