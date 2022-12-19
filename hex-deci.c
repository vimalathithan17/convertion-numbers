//hex to decimal
#include<stdio.h>
#include<ctype.h>
void main()
{
	char hex[20]={0};
	int deci=0,m=1,i=19;
	printf("enter a hexadecimal number:");
	scanf("%s",hex);
	while(i>=0)
	{
		if(hex[i]!='\0')
		{
			while(i>=0)
			{
				switch(toupper(hex[i]))
				{
					case '0':
						deci+=0*m;
						break;
					case '1':
						deci+=1*m;
						break;
					case '2':
						deci+=2*m;
						break;
					case '3':
						deci+=3*m;
						break;
					case '4':
						deci+=4*m;
						break;
					case '5':
						deci+=5*m;
						break;
					case '6':
						deci+=6*m;
						break;
					case '7':
						deci+=7*m;
						break;
					case '8':
						deci+=8*m;
						break;
					case '9':
						deci+=9*m;
						break;
					case 'A':
						deci+=10*m;
						break;
					case 'B':
						deci+=11*m;
						break;
					case 'C':
						deci+=12*m;
						break;
					case 'D':
						deci+=13*m;
						break;
					case 'E':
						deci+=14*m;
						break;
					case 'F':
						deci+=15*m;
						break;	
				}
				m*=16;
				i--;
			}
		}
		i--;
	}
	printf("decimal equivalent is %d",deci);
}
