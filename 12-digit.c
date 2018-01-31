// program to check how many times a particular digit appears in a number
#include<stdio.h>
void main()
{
	int a,b,c,d=0;
	printf("Enter a number and then a digit:");
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
		c=b%10;
		b=b/10;
		if(c==a)
		d++;
	}
	printf("total number available is %d\n",d);
}
