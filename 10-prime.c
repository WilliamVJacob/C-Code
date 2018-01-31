// WAP to print prime number till 99
#include<stdio.h>
void main()
{
	int i,c=0;
	for (int n=3;n<100;n++)
	{
		c=0;
		
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{ 
				c=1;
//				printf("%d\t",n);
				break;
			}
		}
		if(n==i)
		printf(" %d\t",n);
		
	
	}
}
