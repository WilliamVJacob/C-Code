//program to enter a six digit number and then adding all the even digit and multiplying all the odd number
#include<stdio.h>
void main()
{
	int a,n,sum=0,mul=1;
	
	printf("Enter a six digit number");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		if(a%2==0)
		{
			sum=sum+a;
		}
		else
			mul=mul*a;
		
		n=n/10;
	}
	printf("sum = %d and mul =%d",sum,mul);
}
