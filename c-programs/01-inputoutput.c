#include<stdio.h>
#include<string.h>
void main()
{
	int a;float b;char ch,str[30];
	printf("Enter  a interger number\n");
	scanf("%d",&a);
	printf("Enter a float number\n");
	scanf("%f",&b);
	printf("Enter a char value\n");
	scanf(" %c",&ch);
	printf("Enter a word\n");
	scanf(" %s",str);
	printf("The Int num is %d, the float num is  %f, the char value is  %c and the word is %s\n",a,b,ch,str);
	printf("The address of  Int num is %p, the address of float num is  %p, the address of char value is  %p and the address of  word is %p\n",&a,&b,&ch,&str);

	printf("The size of  int num is %lu, the size of float num is %lu , the size of char value is %lu   and thesize  word is %lu \n",sizeof(a),sizeof(b),sizeof(ch),sizeof(str) );

}

