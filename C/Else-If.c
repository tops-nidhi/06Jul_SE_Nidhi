#include<stdio.h>
void main()
{
	int no;
	printf("Enter no to check it positive or not:");
	scanf("%d",&no);
	if(no>0)
	{
		printf("\nNo is positive.");
	}
	else if(no==0)
	{
		printf("\nNo is zero.");
	}
	else
	{
		printf("\nNo is negative.");
	}
}
