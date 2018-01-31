//wap to find reverse
#include<stdio.h>
void main()
{
	int n,temp,a=0,b;
	printf("Enter a number \n");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		b=temp%10;
		temp=temp/10;
	//	b=temp%10;
		a=(a*10)+b;
		
	}
	printf("\nThe revere number is %d",a );
}
