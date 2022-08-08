#include<stdio.h>
void main()
{
	int no;
	printf("Enter no to check you are eligiblle for vote or not.");
	scanf("%d",&no);
	if(no>=18)
	{
		printf("\nYou are eligiblle for vote.");
	}
	else
	{
		printf("\nYou are not eligiblle for vote.");
	}
}
