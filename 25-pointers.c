#include<stdio.h>  
#include<stdlib.h>  
int main()
{  
  int n,i,*ptr;    
    printf("Enter number of elements: ");    
    scanf("%d",&n);    
    ptr=(int*)malloc(n*sizeof(int));  //memory allocated using malloc    
    if(ptr==NULL)                         
    {    
        printf("Sorry! unable to allocate memory");    
        exit(0);    
    }    
    printf("Enter elements of array: ");   
    for(i=0;i<n;++i)    
    {    
        scanf("%d",ptr+i);    
    }
	ptr[2]=14;	
    for(i=0;i<n;++i)    
    {    
        printf("%d\t",*(ptr+i));    
    }
}         
