//program to divide a number by 3 and check its reminder
#include<stdio.h>
void main()
{
	int i;
	printf("Enter a 5 digit number\n");
	scanf("%d",&i);
	i%=3;
	printf(" remainder is %d ",i);
}

