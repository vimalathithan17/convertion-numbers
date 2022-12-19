//decimal to binary
#include<stdio.h>
void main()
{
	int a[32]={0},n,cn,i,ones_c[32]={0},twos_c[32]={0};
	printf("enter a number:");
	scanf("%d",&n);
	cn=n;
	i=31;
	while(n!=0)
	{
		a[i]=n%2;
		n/=2;
		i--;	
	}
	printf("32-bit binary representation of %d is:",cn);
	for(i=0;i<32;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<32;i++)
	{
		if(a[i]==1)
		{
			ones_c[i]=0;
			twos_c[i]=0;
		}
		else if(a[i]==0)
		{
			ones_c[i]=1;
			twos_c[i]=1;
		}
	}
	printf("\n1'scompliment of %d is:",cn);
	for(i=0;i<32;i++)
	{
		printf("%d",ones_c[i]);
	}
	i=31;
	while(1)
	{
		if(twos_c[i]==0)
		{
			twos_c[i]=1;
			break;
		}
		else if(twos_c[i]==1)
		{
			twos_c[i]=0;
		}
		i--;		
	}
	printf("\n2'scompliment of %d is:",cn);
	for(i=0;i<32;i++)
	{
		printf("%d",twos_c[i]);
	}	
}
