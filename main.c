#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int i=10,a[i],b[i],temp;
	
	for(i=0;i<10;i++)
	{
	printf("enter value for A[%d]",i); 
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
	printf("enter value for B[%d]",i); 
	scanf("%d",&b[i]);
	}
	
	
	for(i=0;i<10;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;	
	}
	
	for(i=0;i<10;i++)
	{
	printf("A[%d]'s value %d\n",i,a[i]); 
	}
	
	for(i=0;i<10;i++)
	{
	printf("B[%d]'s value %d\n",i,b[i]);
	}
	
	
	
	
	return 0;
}
