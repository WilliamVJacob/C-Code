#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,n,m;char s1[50],s2[50];
	char str[]="williamijjjjjjjjjjjjjjj greatu";
	i=0;
//	printf("%s",str);
	while(str[i]!=' ')
	{//	printf("E");
		s1[i]=str[i];
//		printf("%c ",s1[i]);			
		i++;
	}
 	i+=1;j=0;
	while(str[i]!='\0')
	{
                s2[j]=str[i];
  //              printf("%c ",s2[i]);
                i++;j++;
  	}
	n=strlen(s1);m=strlen(s2);
//	l=strlen(str);
//	printf("%d %d",n,m);
//	printf("%s",s2);
	for(i=0;i<m;i++)
	{
		str[i]=s2[i];
	}
	str[m]=' ';
	j=m+1;i=0;
	for(;j<=strlen(str);j++)
	{
		str[j]=s1[i];
		i++;
	}
	printf("%s",str);
}
