#include<stdio.h>
#include<string.h>
void main()
{
	int i,n[50],c=0,j=1,m,k,p,l,h;char s1[50];
//	char str[]="ab cde fghi jklmn";
	char str[]="ram laxman sita jesus buddha shiva krishna william";
	k=strlen(str);
	for(i=0;i<k+1;i++)
	{
		if(str[i]==' '||str[i]=='\0')
		{	n[j]=i;
			c++;
			j++;
		}
	}
	h=j;
	n[0]=-1;
	j=j-2;
//			printf("_%d\n",j); 
		k=0;
	for(l=0;l<h;l++)
	{
		m=n[j];
		p=n[j+1];
//			printf("#%d\t%d\n",m,p); 
		for(i=m+1;i<p;i++)
		{
//			printf("*%d\n",i); 

			s1[k]=str[i];	
//			printf("%c\t%d\t%d\n",s1[k],k,i);
			k++;
		}
		s1[k]=' ';
//			printf("%c\t%d\n",s1[k],k);
			k=k+1;
		j--;


	}
		s1[k-2]='\0';
		printf("%s\n",s1);
	}

