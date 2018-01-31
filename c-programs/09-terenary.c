#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	a>b?(c=a+b):(c=a-b);
	printf("The output is %d",c);
}
