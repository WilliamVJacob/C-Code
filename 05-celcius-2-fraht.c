#include<stdio.h>
void main()
{
	float temp,output;
	printf("Enter the temperature in celcius\n");
	scanf("%f",&temp);
	output=((temp*9)/5)+32;
	printf("The temp in fahrenheit is %.2f\n",output);
}
