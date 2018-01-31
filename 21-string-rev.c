//program to find a reverse of a sting with using extra array
#include<stdio.h>
#include<string.h>
void main()
{
        int i,j,n;
        char str[]="12345678";
	n=strlen(str);
        printf("%d\n",n);
	if(n%2==0)
	{
	for(i=0;i<(n/2)+1;n--,i++)
	{
		j=str[i];
		str[i]=str[n-1];
		str[n-1]=j;
	}}
        else if(n%2!=0)
        {
        for(i=0;i<(n/2);n--,i++)
        {
                j=str[i];
                str[i]=str[n-1];
                str[n-1]=j;
        }}
	 
	n=strlen(str);
	printf("%s\n",str);

	for(i=0;i<=9;i++)
	{	
     		printf("%c",str[i]);
}}

