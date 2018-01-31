#include<stdio.h>
void main()
{
	int n,a=1,r=0,c=0,sum=1,t,d;
	printf("Ujala please enter a number\n");
	scanf("%d",&n);
//	printf("Ujala please enter the number u want to search\n");
//	scanf("%d",&a);
	t=n;
	d=0	;
	while(t!=0)
	{	while(t>d)
		{
			d+=2;
		}
		r=d-t;
			
	//	r=t%2;
		
	sum=sum*10+r;
		t=t/2;
	}
	sum=sum/10;	
	printf("%d",sum);
	while(sum!=0)
	{
		r=sum%10;
		while(a==r)
		{
			c++;
			break;
		}
		//		r==a?c++:1;
		sum=sum/10;
	}
	printf("\nNumber is %d ",c);
}		
