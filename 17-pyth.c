#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=50;i++)
	{
		for(j=1;j<=i;j++)
		{
			for(k=1;k<=j;k++)	
			{
				if(i*i==(j*j)+(k*k))
				{
					printf("x=%d y=%d z=%d\n",k,j,i);
				}
			}
		}
	}
}
