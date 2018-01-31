// program to understand function
#include<stdio.h>
int *sum(int *num1, int *num2);
void main()
{
	int a,b,sum1;
	printf("ENter two numbers \n");
	scanf("%d",&a);
	scanf("%d",&b);
	sum1=*sum(&a,&b);
	printf("Sum is %d\n",sum1);
}
int *sum(int *num1, int *num2)
{
	int sum1;
	sum1=*num1 +*num2;
//	printf("Sum is %d\n",sum1);
	*num1=sum1;
	return num1;
}
