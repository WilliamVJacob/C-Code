//program to check different formating operator
#include<stdio.h>
#define MSSG "Hello World\n"
void main()
{
	printf(MSSG);
	printf("Indian\b is great\n");
	printf("New\rDelhi\n");
	int a=11;unsigned int b;
	printf("%o\t",a);
	printf("%x\t",a);
	printf("%d\t",a);
	a=50000;b=50000;
	printf("%d \t %u\n",a,b);
}

