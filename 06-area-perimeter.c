//program to print the area and perimeter of the circle
#include<stdio.h>
void main()
{
	float radius,area,peri;
 	printf("Enter the radius of the circle\n");
	scanf("%f",&radius);
	area =(float)22/7*radius*radius;
	peri=(float)2*22/7*radius;
	printf("The area of the circle is %.2f and the perimeter is %.2f ",area,peri);
}

