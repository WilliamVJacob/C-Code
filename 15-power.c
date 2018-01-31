#include<stdio.h>
void main()
{
	int x,y,i,mul=1;
	printf("ENter two numbers\n");
	scanf("%d%d",&x,&y);
	for(i=1;i<=y;i++)
	{
		mul=mul*x;
	}
	printf("power is %d",mul);
}
