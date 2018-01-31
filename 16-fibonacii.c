#include<stdio.h>
void main()
{
	int p=0,c=1,n,i=0,a;
	printf("ENter a number\n");
	scanf("%d",&a);
	while(c<=a)
	{
		n=p+c;
		
		printf("%d\t",c);
		if(a==c)
		i=1;
//		printf("fibonacii");
		p=c;
		c=n;
	}
	if(i==1)
		printf(" fibonacii");

	else
		printf("not fibonacii");
}

		
