// program to check expression results
#include<stdio.h>
void main()
{
	int a=3,b=4,c=3,d=4,x,y;
	x=(a=5)&&(b=7) ;
	y= (c=5)||(d=8);
	printf("a=%d,b=%d,c=%d,d=%d,x=%d,y=%d\n",a,b,c,d,x,y) ;
}
