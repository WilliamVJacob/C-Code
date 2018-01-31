//program to print two series
#include<stdio.h>
void main()
{
	int i,d,c=0,sum=1,n;
	printf("ENter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=i-1;
			
		sum=sum+c;
		printf("%d\t",sum);
	}
	c=0,sum=0;
	for(i=1;i<=n;i++)
	{
		
		d=c*10+1;
		c=d;
		sum=sum+c;		
		printf("%d\t",sum);
		
	}	}
