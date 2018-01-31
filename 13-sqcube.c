//program to print the sum of all the cubes of the number till n
#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i);
		if(i%3==0)
		{
			printf("%d ",i*i*i);
		}
	}
	printf("\nThe sum = %d ",sum);
}
